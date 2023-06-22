import java.io.*;
import java.net.*;

public class udpserver {
    public static void main(String[] args) throws Exception {
        DatagramSocket sersock = new DatagramSocket(5786);
        byte[] rec = new byte[1024];
        byte[] send = new byte[1024];
        while (true) {
            DatagramPacket recp = new DatagramPacket(rec, rec.length);
            sersock.receive(recp);
            int port = recp.getPort();
            InetAddress addr = recp.getAddress();
            String s = new String(rec);
            System.out.println(s);
            String mod = s.toUpperCase();
            send = mod.getBytes();
            DatagramPacket sendp = new DatagramPacket(send, send.length, addr, port);
            sersock.send(sendp);
        }
    }
}