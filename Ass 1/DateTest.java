// Entity Class
class Date
{
    private int day;
    private int month;
    private int year;
    private String dow;

    // Default Constructor
    public Date()
    {
        day = 1;
        month = 1;
        year = 2000;
        dow = "Monday";
    }

    // Parameterized Constructor
    public Date(int day, int month, int year, String dow)
    {
        this.day = day;
        this.month = month;
        this.year = year;
        this.dow = dow;
    }

    // Setters
    public void setDay(int day)
    {
        this.day = day;
    }

    public void setMonth(int month)
    {
        this.month = month;
    }

    public void setYear(int year)
    {
        this.year = year;
    }

    public void setDow(String dow)
    {
        this.dow = dow;
    }

    // Getters
    public int getDay()
    {
        return day;
    }

    public int getMonth()
    {
        return month;
    }

    public int getYear()
    {
        return year;
    }

    public String getDow()
    {
        return dow;
    }

    // Display Method
    public void display()
    {
        System.out.println("Day : " + day);
        System.out.println("Month : " + month);
        System.out.println("Year : " + year);
        System.out.println("Day of Week : " + dow);
    }

    // toString() Method
    @Override
    public String toString()
    {
        return "Date [day=" + day + ", month=" + month + ", year=" + year + ", dow=" + dow + "]";
    }
}

// Test Class
public class DateTest
{
    public static void main(String[] args)
    {
        // Object using Default Constructor
        Date d1 = new Date();

        // Object using Parameterized Constructor
        Date d2 = new Date(27, 7, 2026, "Monday");

        // Print Hash Codes
        System.out.println("HashCode of d1 : " + d1.hashCode());
        System.out.println("HashCode of d2 : " + d2.hashCode());

        // Display Details
        System.out.println("\nDefault Object:");
        d1.display();

        System.out.println("\nParameterized Object:");
        d2.display();

        // Using Setters
        d1.setDay(15);
        d1.setMonth(8);
        d1.setYear(2026);
        d1.setDow("Saturday");

        // Using Getters
        System.out.println("\nAfter Using Setters:");
        System.out.println("Day : " + d1.getDay());
        System.out.println("Month : " + d1.getMonth());
        System.out.println("Year : " + d1.getYear());
        System.out.println("Day of Week : " + d1.getDow());

        // Using toString()
        System.out.println("\nUsing toString():");
        System.out.println(d1);
        System.out.println(d2);
    }
}