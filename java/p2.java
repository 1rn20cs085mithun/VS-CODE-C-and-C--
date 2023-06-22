class Box
{
	double width;
	double height;
	double depth;
}//no methods here

public class p2
{
	public static void main(String args[])
	{
		Box mybox=new Box();//instance mybox and; new Box() -> dyn allocation
		double vol;
		
		//assign values to mybox instance varibles
		mybox.width=10;
		mybox.height=20;
		mybox.depth=15;
	
		
		// compute volume of box
		vol=mybox.width*mybox.height*mybox.depth;
		System.out.println("Volume is = "+vol);
	}
}
