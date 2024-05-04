package skdua;

public abstract class Shape {
    private String shapeName;

    public Shape(String shapeName){
        this.shapeName = shapeName;
    }

    abstract double area();

    public String toString(){
        return "Shape: " + shapeName;
    }
}
