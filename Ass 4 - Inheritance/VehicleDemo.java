class Vehicle {

    String vehicleNumber;
    String model;
    String companyName;
    int noOfWheels;
    double price;

    Vehicle(String vehicleNumber, String model,
            String companyName, int noOfWheels,
            double price) {

        this.vehicleNumber = vehicleNumber;
        this.model = model;
        this.companyName = companyName;
        this.noOfWheels = noOfWheels;
        this.price = price;
    }

    void displayVehicle() {

        System.out.println("Vehicle Number: " + vehicleNumber);
        System.out.println("Model: " + model);
        System.out.println("Company: " + companyName);
        System.out.println("Number of Wheels: " + noOfWheels);
        System.out.println("Price: " + price);
    }
}


class Bike extends Vehicle {

    int noOfStands;
    int noOfHelmets;
    String bikeCategory;

    Bike(String vehicleNumber, String model,
         String companyName, int noOfWheels,
         double price, int noOfStands,
         int noOfHelmets, String bikeCategory) {

        super(vehicleNumber, model, companyName,
              noOfWheels, price);

        this.noOfStands = noOfStands;
        this.noOfHelmets = noOfHelmets;
        this.bikeCategory = bikeCategory;
    }

    void displayBike() {

        displayVehicle();

        System.out.println("Number of Stands: " + noOfStands);
        System.out.println("Number of Helmets: " + noOfHelmets);
        System.out.println("Bike Category: " + bikeCategory);
    }
}


class Car extends Vehicle {

    boolean hasPowerSteering;
    String driveMode;
    int parkingAssistSensors;

    Car(String vehicleNumber, String model,
        String companyName, int noOfWheels,
        double price, boolean hasPowerSteering,
        String driveMode, int parkingAssistSensors) {

        super(vehicleNumber, model, companyName,
              noOfWheels, price);

        this.hasPowerSteering = hasPowerSteering;
        this.driveMode = driveMode;
        this.parkingAssistSensors = parkingAssistSensors;
    }

    void displayCar() {

        displayVehicle();

        System.out.println("Power Steering: " + hasPowerSteering);
        System.out.println("Drive Mode: " + driveMode);
        System.out.println(
                "Parking Assist Sensors: "
                + parkingAssistSensors
        );
    }
}


class Bus extends Vehicle {

    int passengerCapacity;
    int standingCapacity;

    Bus(String vehicleNumber, String model,
        String companyName, int noOfWheels,
        double price, int passengerCapacity,
        int standingCapacity) {

        super(vehicleNumber, model, companyName,
              noOfWheels, price);

        this.passengerCapacity = passengerCapacity;
        this.standingCapacity = standingCapacity;
    }

    void displayBus() {

        displayVehicle();

        System.out.println(
                "Passenger Capacity: "
                + passengerCapacity
        );

        System.out.println(
                "Standing Capacity: "
                + standingCapacity
        );
    }
}


public class VehicleDemo {

    public static void main(String[] args) {

        Bike bike = new Bike(
                "MH12AB1234",
                "Pulsar",
                "Bajaj",
                2,
                120000,
                2,
                2,
                "Sports"
        );

        Car car = new Car(
                "MH12CD5678",
                "City",
                "Honda",
                4,
                1500000,
                true,
                "Automatic",
                4
        );

        Bus bus = new Bus(
                "MH12EF9999",
                "Volvo",
                "Volvo",
                6,
                5000000,
                50,
                20
        );


        System.out.println("----- BIKE -----");
        bike.displayBike();

        System.out.println("\n----- CAR -----");
        car.displayCar();

        System.out.println("\n----- BUS -----");
        bus.displayBus();
    }
}