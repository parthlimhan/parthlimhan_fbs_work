class Employee {

    // Same bonus rate for all employees
    static double bonusRate = 10.0;

    // Different for each employee
    String employeeName;
    double basicSalary;


    // Constructor
    Employee(String employeeName, double basicSalary) {
        this.employeeName = employeeName;
        this.basicSalary = basicSalary;
    }


    // Update bonus rate
    static void updateBonusRate(double newRate) {
        bonusRate = newRate;
    }


    // Calculate total salary
    double calculateSalary() {

        double bonus = basicSalary * bonusRate / 100;

        double totalSalary = basicSalary + bonus;

        return totalSalary;
    }


    // Display salary
    void displaySalary() {

        System.out.println("Employee Name: " + employeeName);
        System.out.println("Basic Salary: Rs. " + basicSalary);
        System.out.println("Bonus Rate: " + bonusRate + "%");
        System.out.println("Total Salary: Rs. " + calculateSalary());
    }
}


public class EmployeeDemo {

    public static void main(String[] args) {

        Employee employee1 =
                new Employee("Rahul", 30000);

        Employee employee2 =
                new Employee("Amit", 50000);


        System.out.println("Employee 1:");
        employee1.displaySalary();


        System.out.println("\nEmployee 2:");
        employee2.displaySalary();


        // Update company-wide bonus rate
        System.out.println("\nUpdating bonus rate...");

        Employee.updateBonusRate(15.0);


        System.out.println("\nAfter updating bonus rate:");

        employee1.displaySalary();

        System.out.println();

        employee2.displaySalary();
    }
}