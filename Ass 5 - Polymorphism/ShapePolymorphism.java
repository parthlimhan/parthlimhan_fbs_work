class Shape {

    double area;

    void calculateArea() {
        System.out.println("Calculating area");
    }
}


class Circle extends Shape {

    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    @Override
    void calculateArea() {

        area = Math.PI * radius * radius;

        System.out.println(
                "Circle Area: " + area
        );
    }
}


class Triangle extends Shape {

    double base;
    double height;

    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    @Override
    void calculateArea() {

        area = 0.5 * base * height;

        System.out.println(
                "Triangle Area: " + area
        );
    }
}


class Rectangle extends Shape {

    double length;
    double breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    @Override
    void calculateArea() {

        area = length * breadth;

        System.out.println(
                "Rectangle Area: " + area
        );
    }
}


public class ShapePolymorphism {

    public static void main(String[] args) {

        Shape shape;


        shape = new Circle(7);

        shape.calculateArea();


        shape = new Triangle(10, 5);

        shape.calculateArea();


        shape = new Rectangle(10, 6);

        shape.calculateArea();
    }
}