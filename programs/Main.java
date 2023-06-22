package programs;
import java.util.Random;//util package comsists of random class
//using Thread Class
class Main{
    static int randomInteger;
    public static void main(String[] args){
        System.out.println("For 10 Random numbers");
        MyThread1 thread1 = new MyThread1();
        thread1.start();//start thread1
    }
    
}
//Thread1
class MyThread1 extends Thread{
    public void run() {
        int i = 0;
        try {
            //generating 10 random numbers
            while(i<10) {
                Random random = new Random();
                Main.randomInteger = random.nextInt(10);
                System.out.println((i+1)+" Random integer is "+Main.randomInteger);
                new MyThread2().start();//start thread2
                new MyThread3().start();//start thread3
                Thread.sleep(1000*1);//delay for display of output
                System.out.println("\n");
                i++;
            }
        }
        catch (InterruptedException exception) {
            exception.printStackTrace();
        }
    }
}
//Thread2
class MyThread2 extends Thread {
    public void run() {
        System.out.println("Square of "+Main.randomInteger + " is " +Main.randomInteger * Main.randomInteger );
    }
}
//Thread3
class MyThread3 extends Thread {
    public void run() {
        System.out.println("Cube of "+Main.randomInteger + " is " + Main.randomInteger * Main.randomInteger *Main.randomInteger );
    }
}
