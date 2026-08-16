class Vehicle {

    String vehicleNumber;
    String model;
    String companyName;
    int noOfWheels;
    double price;

    Vehicle(String vehicleNumber,
            String model,
            String companyName,
            int noOfWheels,
            double price) {

        this.vehicleNumber = vehicleNumber;
        this.model = model;
        this.companyName = companyName;
        this.noOfWheels = noOfWheels;
        this.price = price;
    }

    // Common method
    void brake() {
        System.out.println("Vehicle is braking");
    }
}


class Bike extends Vehicle {

    int noOfStands;
    int noOfHelmets;
    String bikeCategory;

    Bike(String vehicleNumber,
         String model,
         String companyName,
         int noOfWheels,
         double price,
         int noOfStands,
         int noOfHelmets,
         String bikeCategory) {

        super(vehicleNumber, model,
              companyName, noOfWheels, price);

        this.noOfStands = noOfStands;
        this.noOfHelmets = noOfHelmets;
        this.bikeCategory = bikeCategory;
    }

    @Override
    void brake() {
        System.out.println("Bike brake is applied");
    }
}


class Car extends Vehicle {

    boolean hasPowerSteering;
    String driveMode;
    int parkingAssistSensors;

    Car(String vehicleNumber,
        String model,
        String companyName,
        int noOfWheels,
        double price,
        boolean hasPowerSteering,
        String driveMode,
        int parkingAssistSensors) {

        super(vehicleNumber, model,
              companyName, noOfWheels, price);

        this.hasPowerSteering = hasPowerSteering;
        this.driveMode = driveMode;
        this.parkingAssistSensors = parkingAssistSensors;
    }

    @Override
    void brake() {
        System.out.println("Car brake is applied");
    }
}


class Bus extends Vehicle {

    int passengerCapacity;
    int standingCapacity;

    Bus(String vehicleNumber,
        String model,
        String companyName,
        int noOfWheels,
        double price,
        int passengerCapacity,
        int standingCapacity) {

        super(vehicleNumber, model,
              companyName, noOfWheels, price);

        this.passengerCapacity = passengerCapacity;
        this.standingCapacity = standingCapacity;
    }

    @Override
    void brake() {
        System.out.println("Bus brake is applied");
    }
}


public class VehiclePolymorphism {

    public static void main(String[] args) {

        Vehicle vehicle;


        vehicle = new Bike(
                "MH12AB1234",
                "Pulsar",
                "Bajaj",
                2,
                120000,
                2,
                2,
                "Sports"
        );

        vehicle.brake();


        vehicle = new Car(
                "MH12CD5678",
                "City",
                "Honda",
                4,
                1500000,
                true,
                "Automatic",
                4
        );

        vehicle.brake();


        vehicle = new Bus(
                "MH12EF9999",
                "Volvo",
                "Volvo",
                6,
                5000000,
                50,
                20
        );

        vehicle.brake();
    }
}