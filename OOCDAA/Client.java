import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) throws Exception {
        Socket sock = new Socket("127.0.0.1", 4000);
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the filename");
        String fname = sc.readLine();
        OutputStream os = sock.getOutputStream();
        PrintWriter pwrite = new PrintWriter(os, true);
        pwrite.println(fname);
        InputStream is = sock.getInputStream();
        BufferedReader sin = new BufferedReader(new InputStreamReader(is));
        String str = new String();
        while ((str = sin.readLine()) != null)
            System.out.println(str);
        System.out.println();
        sock.close();
    }
}