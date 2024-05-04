package skdua;

public class Cylinder extends Shape{
    private double radius;
    private double height;

    public Cylinder(double r, double h){
        super("Cylinder");
        this.radius = r;
        this.height = h;
    }

    public double area(){
        return (2*Math.PI*radius*height) + (2*Math.PI*radius*height);
    }

    public String toString(){
        return super.toString() + " of radius " + radius + " and height " + height;
    }
}
