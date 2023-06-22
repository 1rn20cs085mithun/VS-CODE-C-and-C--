import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) throws Exception {
        ServerSocket sersock = new ServerSocket(4000);
        Socket sock = sersock.accept();
        InputStream is = sock.getInputStream();
        BufferedReader sc = new BufferedReader(new InputStreamReader(is));
        String str = new String();
        str = sc.readLine();
        BufferedReader content = new BufferedReader(new FileReader(str));
        OutputStream os = sock.getOutputStream();
        PrintWriter pw = new PrintWriter(os, true);
        String send = new String();
        while ((send = content.readLine()) != null)
            pw.println(send);
        sock.close();
        sersock.close();
    }
}