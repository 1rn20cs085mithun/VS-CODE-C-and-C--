import java.io.*;
import java.net.*;

public class udpclient {
    public static void main(String[] args) throws Exception {
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        DatagramSocket socket = new DatagramSocket();
        InetAddress addr = InetAddress.getByName("localhost");
        System.out.println("Enter the message");
        String s = sc.readLine();
        byte[] mess = new byte[1024];
        mess = s.getBytes();
        byte[] rec = new byte[1024];
        DatagramPacket sendp = new DatagramPacket(mess, mess.length, addr, 5786);
        socket.send(sendp);
        DatagramPacket recp = new DatagramPacket(rec, rec.length);
        socket.receive(recp);
        String mod = new String(recp.getData());
        System.out.println(mod);
    }
}