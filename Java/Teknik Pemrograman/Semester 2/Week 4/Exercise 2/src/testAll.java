public class testAll {
    public static void main(String[] args) {
        testShape();
        testCircle();
        testRectangle();
        testSquare();
    }

    public static void testShape() {
        Shape shape1 = new Shape();
        System.out.println("Shape 1: " + shape1);

        Shape shape2 = new Shape("red", false);
        System.out.println("Shape 2: " + shape2);

        shape1.setColor("black");
        shape1.setFilled(false);
        System.out.println("Shape 1 after modification: " + shape1);
    }

    public static void testCircle() {
        Circle circle1 = new Circle();
        System.out.println("\nCircle 1: " + circle1);

        Circle circle2 = new Circle(2.5, "purple", true);
        System.out.println("Circle 2: " + circle2);

        circle1.setRadius(3.0);
        System.out.println("Circle 1 after modification: " + circle1);
    }

    public static void testRectangle() {
        Rectangle rectangle1 = new Rectangle();
        System.out.println("\nRectangle 1: " + rectangle1);

        Rectangle rectangle2 = new Rectangle(2.0, 3.0);
        System.out.println("Rectangle 2: " + rectangle2);

        rectangle1.setWidth(4.0);
        rectangle1.setLength(5.0);
        System.out.println("Rectangle 1 after modification: " + rectangle1);
    }

    public static void testSquare() {
        Square square1 = new Square();
        System.out.println("\nSquare 1: " + square1);

        Square square2 = new Square(4.0);
        System.out.println("Square 2: " + square2);

        square1.setSide(6.0);
        System.out.println("Square 1 after modification: " + square1);
    }
}
