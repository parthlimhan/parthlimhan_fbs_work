class Shape {
    double area;
}


class Triangle extends Shape {

    double base;
    double height;

    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }
}


class Rectangle extends Shape {

    double length;
    double breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}


class Circle extends Shape {

    double radius;

    Circle(double radius) {
        this.radius = radius;
    }
}


class AreaCalculator {

    // Calculate area of Triangle
    double calculateArea(Triangle t) {
        return 0.5 * t.base * t.height;
    }

    // Calculate area of Rectangle
    double calculateArea(Rectangle r) {
        return r.length * r.breadth;
    }

    // Calculate area of Circle
    double calculateArea(Circle c) {
        return Math.PI * c.radius * c.radius;
    }
}


public class AreaDemo {

    public static void main(String[] args) {

        Triangle triangle = new Triangle(10, 5);

        Rectangle rectangle = new Rectangle(10, 5);

        Circle circle = new Circle(7);

        AreaCalculator calculator = new AreaCalculator();

        System.out.println("Area of Triangle = "
                + calculator.calculateArea(triangle));

        System.out.println("Area of Rectangle = "
                + calculator.calculateArea(rectangle));

        System.out.println("Area of Circle = "
                + calculator.calculateArea(circle));
    }
}