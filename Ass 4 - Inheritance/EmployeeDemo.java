class Employee {

    int id;
    String name;
    double salary;

    Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    void displayEmployee() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
    }
}


class Admin extends Employee {

    double allowance;

    Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

    void displayAdmin() {
        displayEmployee();
        System.out.println("Allowance: " + allowance);
    }
}


class SalesManager extends Employee {

    double incentive;
    double target;

    SalesManager(int id, String name, double salary,
                 double incentive, double target) {

        super(id, name, salary);

        this.incentive = incentive;
        this.target = target;
    }

    void displaySalesManager() {
        displayEmployee();
        System.out.println("Incentive: " + incentive);
        System.out.println("Target: " + target);
    }
}


class HR extends Employee {

    double commission;

    HR(int id, String name, double salary, double commission) {

        super(id, name, salary);

        this.commission = commission;
    }

    void displayHR() {
        displayEmployee();
        System.out.println("Commission: " + commission);
    }
}


public class EmployeeDemo {

    public static void main(String[] args) {

        Admin admin = new Admin(
                101,
                "Rahul",
                50000,
                5000
        );

        SalesManager salesManager = new SalesManager(
                102,
                "Amit",
                60000,
                10000,
                1000000
        );

        HR hr = new HR(
                103,
                "Priya",
                55000,
                8000
        );


        System.out.println("----- ADMIN -----");
        admin.displayAdmin();

        System.out.println("\n----- SALES MANAGER -----");
        salesManager.displaySalesManager();

        System.out.println("\n----- HR -----");
        hr.displayHR();
    }
}