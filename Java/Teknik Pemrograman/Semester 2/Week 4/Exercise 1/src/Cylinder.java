public class Cylinder extends Circle {
    private double height;
    public Cylinder(){
        super();
        height = 1.0;
    }
    
    public Cylinder(double height){
        super();
        this.height = height;
    }
    
    public Cylinder(double radius, double height){
        super(radius);
        this.height = height;
    }
    
    public double getHeight(){
        return height;
    }

    @Override
    public double getArea(){
        double baseArea = super.getArea();
        double surfaceArea = (2*Math.PI * getRadius() * height) + (2 * baseArea);
        return surfaceArea;
    }

    @Override
    public String toString(){
        return "Cylinder: subclass of " + super.toString() + " height=" + height;

    }
    
    public double getVolume(){
        return getArea()*height;
    }
}
