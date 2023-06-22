//import java.io.*;
import java.util.*;

class Buffer {
    private final int MaxBuffSize;
    private int[] store;
    private int BufferStart, BufferEnd, BufferSize;

    public Buffer(int size) {
        MaxBuffSize = size;
        BufferEnd = -1;
        BufferStart = 0;
        BufferSize = 0;
        store = new int[MaxBuffSize];

    }

    public synchronized void insert(int ch) {
        try {

            while (BufferSize == MaxBuffSize) {
                wait();
            }
            BufferEnd = (BufferEnd + 1) % MaxBuffSize;

            BufferSize++;
            notifyAll();
        } catch (InterruptedException e) {

        }
    }

    public synchronized int delete() {
        int ch = 0;
        try {
            while (BufferSize == 0) {
                wait();
            }

            ch = store[BufferStart];
            BufferStart = (BufferStart + 1) % MaxBuffSize;
            BufferSize--;
            notifyAll();

        } catch (InterruptedException e) {

        }
        return ch;
    }
}

class Consumer extends Thread {
    private final Buffer buffer;

    public Consumer(Buffer b) {
        buffer = b;
    }

    public void run() {
        while (!Thread.currentThread().isInterrupted()) {
            int c = buffer.delete();
            System.out.print(c);
        }
    }
}

class Producer extends Thread {
    private final Buffer buffer;

    public Producer(Buffer b) {
        buffer = b;
    }

    public void run() {
        for (int c = 0; c < 10; c++)
            buffer.insert(c);

    }
}

class Main {
    public static void main(String[] args) {
        System.out.println("program starting");
        Buffer buffer = new Buffer(5); // buffer has size 5 
        Producer  prod = new Producer(buffer);
         Consumer cons = new Consumer(buffer);
                                       // Consumer(buffer);
         prod.start();
        cons.start();
        try {
            prod.join();
            cons.interrupt();

        } catch (InterruptedException e) {
        }
        System.out.println("End of Program");

    }
}
