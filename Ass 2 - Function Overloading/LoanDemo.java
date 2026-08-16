class Student {

    int rollNo;
    String name;
    double percentage;

    Student(int rollNo, String name, double percentage) {
        this.rollNo = rollNo;
        this.name = name;
        this.percentage = percentage;
    }
}


class Employee {

    int id;
    String name;
    double annualSalary;

    Employee(int id, String name, double annualSalary) {
        this.id = id;
        this.name = name;
        this.annualSalary = annualSalary;
    }
}


class Bank {

    // Loan approval for Student
    void approveLoan(Student s) {

        System.out.println("\nStudent Name: " + s.name);
        System.out.println("Percentage: " + s.percentage);

        if (s.percentage > 80) {
            System.out.println("Loan Approved: Rs. 2,00,000");
        }
        else if (s.percentage >= 60) {
            System.out.println("Loan Approved: Rs. 1,00,000");
        }
        else if (s.percentage >= 40) {
            System.out.println("Loan Approved: Rs. 50,000");
        }
        else {
            System.out.println("No loan approved");
        }
    }


    // Loan approval for Employee
    void approveLoan(Employee e) {

        System.out.println("\nEmployee Name: " + e.name);
        System.out.println("Annual Salary: " + e.annualSalary + " LPA");

        if (e.annualSalary > 12) {
            System.out.println("Loan Approved: Rs. 7,00,000");
        }
        else if (e.annualSalary >= 10) {
            System.out.println("Loan Approved: Rs. 6,00,000");
        }
        else if (e.annualSalary >= 6) {
            System.out.println("Loan Approved: Rs. 5,00,000");
        }
        else if (e.annualSalary >= 4) {
            System.out.println("Loan Approved: Rs. 4,00,000");
        }
        else {
            System.out.println("No loan approved");
        }
    }
}


public class LoanDemo {

    public static void main(String[] args) {

        Bank bank = new Bank();

        Student student = new Student(101, "Rahul", 85);

        Employee employee = new Employee(501, "Amit", 11);

        bank.approveLoan(student);

        bank.approveLoan(employee);
    }
}