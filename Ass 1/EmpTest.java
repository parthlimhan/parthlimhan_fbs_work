// Entity Class
class Employee
{
    private int id;
    private String name;
    private double salary;

    // Default Constructor
    public Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0.0;
    }

    // Parameterized Constructor
    public Employee(int id, String name, double salary)
    {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Setters
    public void setId(int id)
    {
        this.id = id;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public void setSalary(double salary)
    {
        this.salary = salary;
    }

    // Getters
    public int getId()
    {
        return id;
    }

    public String getName()
    {
        return name;
    }

    public double getSalary()
    {
        return salary;
    }

    // Display Method
    public void display()
    {
        System.out.println("Employee ID : " + id);
        System.out.println("Employee Name : " + name);
        System.out.println("Employee Salary : " + salary);
    }

    // toString() Method
    @Override
    public String toString()
    {
        return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + "]";
    }
}

// Test Class
public class EmpTest
{
    public static void main(String[] args)
    {
        // Object using Default Constructor
        Employee e1 = new Employee();

        // Object using Parameterized Constructor
        Employee e2 = new Employee(101, "Parth", 50000);

        // Print Hash Codes
        System.out.println("HashCode of e1 : " + e1.hashCode());
        System.out.println("HashCode of e2 : " + e2.hashCode());

        // Display Details
        System.out.println("\nDefault Object:");
        e1.display();

        System.out.println("\nParameterized Object:");
        e2.display();

        // Using Setters
        e1.setId(102);
        e1.setName("Rahul");
        e1.setSalary(60000);

        // Using Getters
        System.out.println("\nAfter Using Setters:");
        System.out.println("Employee ID : " + e1.getId());
        System.out.println("Employee Name : " + e1.getName());
        System.out.println("Employee Salary : " + e1.getSalary());

        // Using toString()
        System.out.println("\nUsing toString():");
        System.out.println(e1);
        System.out.println(e2);
    }
}