class Box
{
	double width;
	double height;
	double depth;

    void volume()
    {
        double vol;
        vol=width*height*depth;
        System.out.println("volume is "+vol);
    }
}//no methods here

public class p3
{
	public static void main(String args[])
	{
		Box mybox=new Box();//instance mybox and; new Box() -> dyn allocation
	//	double vol;
		
		//assign values to mybox instance varibles
		mybox.width=10;
		mybox.height=20;
		mybox.depth=15;
        mybox.volume();
	}
}
