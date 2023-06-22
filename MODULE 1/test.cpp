//Exception Handling in Java

The Exception Handling in Java is one of the powerful
mechanism to handle the runtime errors so that the normal 
flow of the application can be maintained.

->Exception is an abnormal condition.
->In Java, an exception is an event that disrupts the normal 
	flow of the program. It is an object which is thrown 
	at runtime
	
->Exception Handling is a mechanism to handle runtime errors such as 
ClassNotFoundException, IOException, SQLException, RemoteException, etc.

-The core advantage of exception handling is to maintain the normal flow of the 
application. An exception normally disrupts the normal flow of the application.

Hierarchy of Java Exception classes

Java Exception Keywords;

try:	The "try" keyword is used to specify a block where we should place an 
	exception code. It means we can't use try block alone. 
	The try block must be followed by either catch or finally.

catch:	The "catch" block is used to handle the exception.
 	It must be preceded by try block which means we can't use catch block alone.
 	It can be followed by finally block later.
 
finally:The "finally" block is used to execute the necessary code of the
 	program. It is executed whether an exception is handled or not.
 
throw:	The "throw" keyword is used to throw an exception.

throws:	The "throws" keyword is used to declare exceptions. 
	It specifies that there may occur an exception in the method.
	It doesn't throw an exception. It is always used with method signature.
    
    
    //example
    public class Main{  
  public static void main(String args[]){  
   try{  
      //code that may raise exception  
      int data=100/0;  
   }
   catch(ArithmeticException e){System.out.println(e);}  
   //rest code of the program   
   System.out.println("rest of the code...");  
  }  
}

//out:
	java.lang.ArithmeticException: / by zero
rest of the code...
        
        //example without try
        public class Main{  
  public static void main(String args[]){  
    int data=100/0;
   System.out.println("rest of the code...");  
  }  
}

//out:
Exception in thread "main" java.lang.ArithmeticException: / by zero
        at Main.main(Main.java:7)
    
    //once the exception rises here, the rest of the code doesnt execute
    
//exmp
    public class Main{  
  public static void main(String args[]){  
     String s = null;  
     System.out.println(s.length());
   
  System.out.println("rest of the code...");  
  }  
}


//out
Exception in thread "main" java.lang.NullPointerException
        at Main.main(Main.java:6)
    
    //examp with try
    public class Main{  
  public static void main(String args[]){  
  try{  
    //   code that may raise exception  
     String s = null;  
     System.out.println(s.length());
  }
  catch(NullPointerException e){System.out.println(e);}  
   //rest code of the program   
   
  System.out.println("rest of the code...");  
  }  
}

//out:
java.lang.NullPointerException
rest of the code...
    
    //NUmberFormatException
    public class Main{  
  public static void main(String args[]){  
//   try{  
    //   code that may raise exception  
     String s="abc";  
    int i=Integer.parseInt(s);
//   }
//   catch(NullPointerException e){System.out.println(e);}  
   //rest code of the program   
   
  System.out.println("rest of the code...");  
  }  
}

//out:
Exception in thread "main" java.lang.NumberFormatException: For input string: "abc"
        at java.base/java.lang.NumberFormatException.forInputString(NumberFormatException.java:65)
        at java.base/java.lang.Integer.parseInt(Integer.java:652)
        at java.base/java.lang.Integer.parseInt(Integer.java:770)
        at Main.main(Main.java:6
                     
                     
 public class Main{  
  public static void main(String args[]){  
  try{  
    //   code that may raise exception  
     String s="abc";  
    int i=Integer.parseInt(s);
  }
  catch(NumberFormatException e){System.out.println(e);}  
   //rest code of the program   
   
  System.out.println("rest of the code...");  
  }  
}

                     
                     //out:
                     java.lang.NumberFormatException: For input string: "abc"
						rest of the code...
                     
//ArrayIndexOutOfBoundsException
public class Main{  
  public static void main(String args[]){  
//   try{  
    //   code that may raise exception  
     int a[]=new int[5];  
        a[10]=50; //ArrayIndexOutOfBoundsException
//   }
//   catch(NumberFormatException e){System.out.println(e);}  
   //rest code of the program   
   
  System.out.println("rest of the code...");  
  }  
}

//out:
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length 5
        at Main.main(Main.java:6)

public class Main{  
  public static void main(String args[]){  
  try{  
    //   code that may raise exception  
     int a[]=new int[5];  
        a[10]=50; //ArrayIndexOutOfBoundsException
  }
  catch(ArrayIndexOutOfBoundsException e){System.out.println(e);}  
   //rest code of the program   
   
  System.out.println("rest of the code...");  
  }  
}

                     
 //out:
 java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length 5
rest of the code...

// if exception occurs, the remaining statement will not exceute. But its is a good programming practise to keep only the exception code in the try block;

public class Main {  
  
    public static void main(String[] args) {  
        try  
        {  
        int data=50/0; //may throw exception   
        // if exception occurs, the remaining statement will not exceute  
        System.out.println("rest of the code");  
        }  
             // handling the exception   
        catch(ArithmeticException e)  
        {  
            System.out.println(e);  
        }  
          
    }  
      
} 
                     
//out:
java.lang.ArithmeticException: / by zero

//ex4 Here, we handle the exception using the parent class exception.
public class Main {  
    public static void main(String[] args) {  
        try  {  
            //int data=50/0; //may throw exception  
            String s="abc";  
            int i=Integer.parseInt(s);
        }  
            // handling the exception by using Exception class      
        catch(Exception e)  {  
            System.out.println(e);  
        }  
        System.out.println("rest of the code");  
    }  
}

//out:
java.lang.NumberFormatException: For input string: "abc"
rest of the code

//example to print a custom message on exception.
public class Main {  
  
    public static void main(String[] args) {  
        try  
        {  
        int data=50/0; //may throw exception   
        }  
             // handling the exception  
        catch(Exception e)  
        {  
                  // displaying the custom message  
            System.out.println("Can't divided by zero  \n" + e);  
        }  
    }  
      
} 
                     
                     //out:
                     Can't divided by zero  
					java.lang.ArithmeticException: / by zero
                    
//example to resolve the exception in a catch block.
public class TryCatchExample6 {  
  
    public static void main(String[] args) {  
        int i=50;  
        int j=0;  
        int data;  
        try  
        {  
        	data=i/j; //may throw exception   
        }  
            // handling the exception  
        catch(Exception e)  
        {  
             // resolving the exception in catch block  
            System.out.println(i/(j+2));
	//we can write the code in the catch block  
        }  
    }  
}

//out:
25

//array out of bound exception
public class TryCatchExample9 {  
  
    public static void main(String[] args) {  
        try  
        {  
        int arr[]= {1,3,5,7};  
        System.out.println(arr[10]); //may throw exception   
        }  
            // handling the array exception  
        catch(ArrayIndexOutOfBoundsException e)  
        {  
            System.out.println(e);  
        }  
        System.out.println("rest of the code");  
    }  
      
}  
                     
//out:
java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length 4
rest of the code

//Java finally block :


Java finally block is a block used to execute important code 
such as closing the connection, etc.

Java finally block is always executed whether an exception is 
handled or not. Therefore, it contains all the necessary 
statements that need to be printed regardless of the 
exception occurs or not.

The finally block follows the try-catch block.
                     
//case 1: When an exception does not occur
class Main {    
  public static void main(String args[]){    
  try{    
    //below code do not throw any exception  
   int data=25/5;    
   System.out.println(data); //5   
  }    
//catch won't be executed  
  catch(Exception e){  
	System.out.println(e);  
}    
//executed regardless of exception occurred or not  
 finally {  
    System.out.println("finally block is always executed");  
}    
    
System.out.println("rest of phe code...");    
  }    
}
                     
//out:
5
finally block is always executed
rest of phe code...
                     
//case2: finally always execute
//When an exception occurr but not handled by the catch block
class Main {    
  public static void main(String args[]){    
  try{    
    //below code do not throw any exception  
   int data=25/0;    
   System.out.println(data); 
  }    
//catch won't be executed  
  catch(NullPointerException e){  
	System.out.println(e);  
}    
//executed regardless of exception occurred or not  
 finally {  
    System.out.println("finally block is always executed");  
}    
    
System.out.println("rest of phe code...");    
  }    
}
//out:
finally block is always executed
Exception in thread "main" java.lang.ArithmeticException: / by zero
        at Main.main(Main.java:5)
                     
                     
//throw:
public class Main {   
    //function to check if person is eligible to vote or not   
    public static void validate(int age) {  
        if(age<18) {  
            //throw Arithmetic exception if not eligible to vote  
            throw new ArithmeticException("Person is not eligible to vote");    
        }  
        else {  
            System.out.println("Person is eligible to vote!!");  
        }  
    }  
    //main method  
    public static void main(String args[]){  
        //calling the function  
        validate(13);  
        System.out.println("rest of the code...");    
  }    
}
                     
//out:
Exception in thread "main" java.lang.ArithmeticException: Person is not eligible to vote
        at Main.validate(Main.java:6)
        at Main.main(Main.java:15)
                     
//throws:
//The Java throws keyword is used to declare an exception. It gives an information to the programmer that there may occur an exception.
 So, it is better for the programmer to provide the exception handling code so that the normal flow of the program can be maintained.

Exception Handling is mainly used to handle the checked exceptions. If there occurs any unchecked exception such as NullPointerException,
 it is programmers' fault that he is not checking the code before it being used.
                     
Syntax of Java throws
return_type method_name() throws exception_class_name{  
//method code  
}
                     
import java.io.*;  
class M{  
 void method()throws IOException{//creates or declares exception 
  throw new IOException("device error");  
 }  
}  
class Main{  
   public static void main(String args[])throws IOException{//declare exception  
     M m=new M();  
     m.method();  
  
    System.out.println("normal flow...");  
  }  
}  
//out:
Exception in thread "main" java.io.IOException: device error
        at M.method(Main.java:4)
        at Main.main(Main.java:10)
                     