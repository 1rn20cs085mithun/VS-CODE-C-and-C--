package OOCDAA;
import java.util.*;
public class Main {
            static int Randomint;
        public static Scanner sc = new Scanner(System.in );
        public static void main(String args[])
        {
           
            System.out.println("for any 10 no's");
            Mythread1 thread1 = new Mythread1();
            thread1.start();
        }
}
 class Mythread1 extends Thread{
            public void run()
            {
                int i=0;
                while(i<10){
                    try{
                        Random random = new Random();
                        Main.Randomint=random.nextInt(10);
                        new  Mythread2().start();
                        new Mythread3().start();
                        Thread.sleep(1000*1);
                        System.out.println();
                        i++;
                    }
                    catch(InterruptedException e)
                    {
                        e.printStackTrace();
                    }
                }
            }

}

class Mythread2 extends Thread{
    public void run()
    {
        System.out.println("Square is :");
        System.out.println( Main.Randomint *  Main.Randomint);
    }
}
class Mythread3 extends Thread{
    public void run()
    {
        System.out.println("cube is :");
        System.out.println( Main.Randomint *  Main.Randomint * Main.Randomint);
    }
}