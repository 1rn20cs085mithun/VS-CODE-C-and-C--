class Box
{
	double width;
	double height;
	double depth;

    double volume()
    {
        return width*height*depth;
    }

    void set(double x,double y,double z)
    {
        width =x;
        height = y;
        depth =z;
    }
}//no methods here

public class p4
{
	public static void main(String args[])
	{
		Box mybox=new Box();//instance mybox and; new Box() -> dyn allocation
		double vol;
		
		//assign values to mybox instance varibles
		mybox.set(10,20,30);
        vol = mybox.volume();
        System.out.println("volume is = "+vol);
	}
}
