class ElectricityBill {

    // Same rate for all customers
    static double ratePerUnit = 5.0;

    // Different for each customer
    String customerName;
    double unitsConsumed;


    // Constructor
    ElectricityBill(String customerName, double unitsConsumed) {
        this.customerName = customerName;
        this.unitsConsumed = unitsConsumed;
    }


    // Update electricity rate
    static void updateRate(double newRate) {
        ratePerUnit = newRate;
    }


    // Calculate total bill
    double calculateBill() {
        return unitsConsumed * ratePerUnit;
    }


    // Display bill
    void displayBill() {
        System.out.println("Customer Name: " + customerName);
        System.out.println("Units Consumed: " + unitsConsumed);
        System.out.println("Rate Per Unit: Rs. " + ratePerUnit);
        System.out.println("Total Bill: Rs. " + calculateBill());
    }
}


public class ElectricityBillDemo {

    public static void main(String[] args) {

        ElectricityBill customer1 =
                new ElectricityBill("Rahul", 100);

        ElectricityBill customer2 =
                new ElectricityBill("Amit", 200);


        System.out.println("Customer 1:");
        customer1.displayBill();

        System.out.println("\nCustomer 2:");
        customer2.displayBill();


        // Update rate
        System.out.println("\nUpdating electricity rate...");

        ElectricityBill.updateRate(6.0);


        System.out.println("\nAfter updating rate:");

        customer1.displayBill();

        System.out.println();

        customer2.displayBill();
    }
}