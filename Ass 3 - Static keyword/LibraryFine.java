class LibraryUser {

    // Same fine for all users
    static double finePerDay = 10.0;

    // Different for each user
    String userName;
    int daysLate;


    // Constructor
    LibraryUser(String userName, int daysLate) {
        this.userName = userName;
        this.daysLate = daysLate;
    }


    // Calculate total fine
    double calculateFine() {

        return daysLate * finePerDay;
    }


    // Display fine
    void displayFine() {

        System.out.println("User Name: " + userName);
        System.out.println("Days Late: " + daysLate);
        System.out.println("Fine Per Day: Rs. " + finePerDay);
        System.out.println("Total Fine: Rs. " + calculateFine());
    }
}


public class LibraryFine {

    public static void main(String[] args) {

        LibraryUser user1 =
                new LibraryUser("Rahul", 5);

        LibraryUser user2 =
                new LibraryUser("Amit", 10);


        System.out.println("User 1:");
        user1.displayFine();


        System.out.println("\nUser 2:");
        user2.displayFine();
    }
}