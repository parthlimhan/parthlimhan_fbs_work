class Employee {

    int id;
    String name;
    double salary;

    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Common method
    void calculateSalary() {
        System.out.println("Employee salary: " + salary);
    }
}


class Admin extends Employee {

    double allowance;

    Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    // Method overriding
    @Override
    void calculateSalary() {

        double totalSalary = salary + allowance;

        System.out.println(
                "Admin Salary: " + totalSalary
        );
    }
}


class SalesManager extends Employee {

    double incentive;
    double target;

    SalesManager(int id, String name,
                 double salary,
                 double incentive,
                 double target) {

        super(id, name, salary);

        this.incentive = incentive;
        this.target = target;
    }

    @Override
    void calculateSalary() {

        double totalSalary = salary + incentive;

        System.out.println(
                "Sales Manager Salary: "
                + totalSalary
        );
    }
}


class HR extends Employee {

    double commission;

    HR(int id, String name,
       double salary,
       double commission) {

        super(id, name, salary);

        this.commission = commission;
    }

    @Override
    void calculateSalary() {

        double totalSalary = salary + commission;

        System.out.println(
                "HR Salary: " + totalSalary
        );
    }
}


public class EmployeePolymorphism {

    public static void main(String[] args) {

        // Superclass reference
        Employee employee;


        // Reference points to Admin object
        employee = new Admin(
                101,
                "Rahul",
                50000,
                5000
        );

        employee.calculateSalary();


        // Reference points to SalesManager object
        employee = new SalesManager(
                102,
                "Amit",
                60000,
                10000,
                100000
        );

        employee.calculateSalary();


        // Reference points to HR object
        employee = new HR(
                103,
                "Priya",
                55000,
                8000
        );

        employee.calculateSalary();
    }
}