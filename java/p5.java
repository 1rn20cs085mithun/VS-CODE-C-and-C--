class Box
{
	double width;
	double height;
	double depth;
	
	Box()
	{
		System.out.println("consruting Box");
		width=10;
		height=10;
		depth=10;
	}
	double volume()
	{
		return width*height*depth;
	}
}
class p5
{
	public static void main(String args[])
	{
		Box mybox1=new Box();
	  //  Box mybox2=new Box();
	
	    double vol;
	
	    //get the volume for firstBox
	    vol=mybox1.volume();
	    System.out.println("volume is ="+vol);
	
	    // get the volume for second Box
	    vol=mybox1.volume();
	    System.out.println("volume is ="+vol);
	}
}
