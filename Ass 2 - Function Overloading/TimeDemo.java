class Time {

    int hr;
    int min;
    int sec;

    Time(int hr, int min, int sec) {
        this.hr = hr;
        this.min = min;
        this.sec = sec;
    }


    // Add two Time objects
    Time add(Time t) {

        int seconds = this.sec + t.sec;
        int minutes = this.min + t.min;
        int hours = this.hr + t.hr;

        // Carry seconds to minutes
        if (seconds >= 60) {
            seconds = seconds - 60;
            minutes++;
        }

        // Carry minutes to hours
        if (minutes >= 60) {
            minutes = minutes - 60;
            hours++;
        }

        // 24-hour format
        if (hours >= 24) {
            hours = hours - 24;
        }

        return new Time(hours, minutes, seconds);
    }


    // Add hours
    Time add(int hours, Time t) {

        int newHours = this.hr + hours;

        if (newHours >= 24) {
            newHours = newHours - 24;
        }

        return new Time(newHours, this.min, this.sec);
    }


    // Add minutes
    Time add(Time t, int minutes) {

        int newMinutes = this.min + minutes;
        int newHours = this.hr;

        while (newMinutes >= 60) {
            newMinutes = newMinutes - 60;
            newHours++;
        }

        if (newHours >= 24) {
            newHours = newHours - 24;
        }

        return new Time(newHours, newMinutes, this.sec);
    }


    // Add seconds
    Time add(int seconds, Time t) {

        int newSeconds = this.sec + seconds;
        int newMinutes = this.min;
        int newHours = this.hr;

        while (newSeconds >= 60) {
            newSeconds = newSeconds - 60;
            newMinutes++;
        }

        while (newMinutes >= 60) {
            newMinutes = newMinutes - 60;
            newHours++;
        }

        if (newHours >= 24) {
            newHours = newHours - 24;
        }

        return new Time(newHours, newMinutes, newSeconds);
    }


    // Display time
    void display() {

        System.out.printf("%02d:%02d:%02d%n", hr, min, sec);
    }
}


public class TimeDemo {

    public static void main(String[] args) {

        Time time1 = new Time(10, 30, 40);

        Time time2 = new Time(5, 40, 30);


        // Add two Time objects
        Time result1 = time1.add(time2);

        System.out.print("Adding two times: ");
        result1.display();


        // Add hours
        Time result2 = time1.add(3, time1);

        System.out.print("Adding 3 hours: ");
        result2.display();


        // Add minutes
        Time result3 = time1.add(time1, 40);

        System.out.print("Adding 40 minutes: ");
        result3.display();


        // Add seconds
        Time result4 = time1.add(50, time1);

        System.out.print("Adding 50 seconds: ");
        result4.display();
    }
}