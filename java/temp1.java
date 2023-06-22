class Forest{
    Forest(){
        System.out.println("forest is created");
    }
}
class Animal extends Forest{  
    Animal(){//constructor of sup cls
        super();
        System.out.println("animal is created");
    }  
}  
class Dog extends Animal{  
    Dog(){  
        super(); //calling constructor of sup cls 
        System.out.println("dog is created");  
    }  
}
class Main{  
    public static void main(String args[]){  
    Dog d=new Dog();  
}
}