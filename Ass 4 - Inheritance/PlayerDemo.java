class Player {

    String name;
    int age;
    String country;
    int matchesPlayed;
    int jerseyNumber;

    Player(String name, int age, String country,
           int matchesPlayed, int jerseyNumber) {

        this.name = name;
        this.age = age;
        this.country = country;
        this.matchesPlayed = matchesPlayed;
        this.jerseyNumber = jerseyNumber;
    }

    void displayPlayer() {

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Country: " + country);
        System.out.println("Matches Played: " + matchesPlayed);
        System.out.println("Jersey Number: " + jerseyNumber);
    }
}


class CricketPlayer extends Player {

    int totalRuns;
    int totalWickets;
    String battingStyle;
    String bowlingStyle;

    CricketPlayer(String name, int age, String country,
                  int matchesPlayed, int jerseyNumber,
                  int totalRuns, int totalWickets,
                  String battingStyle,
                  String bowlingStyle) {

        super(name, age, country,
              matchesPlayed, jerseyNumber);

        this.totalRuns = totalRuns;
        this.totalWickets = totalWickets;
        this.battingStyle = battingStyle;
        this.bowlingStyle = bowlingStyle;
    }

    void displayCricketPlayer() {

        displayPlayer();

        System.out.println("Total Runs: " + totalRuns);
        System.out.println("Total Wickets: " + totalWickets);
        System.out.println("Batting Style: " + battingStyle);
        System.out.println("Bowling Style: " + bowlingStyle);
    }
}


class FootballPlayer extends Player {

    int totalGoals;
    String playingPosition;

    FootballPlayer(String name, int age, String country,
                   int matchesPlayed, int jerseyNumber,
                   int totalGoals,
                   String playingPosition) {

        super(name, age, country,
              matchesPlayed, jerseyNumber);

        this.totalGoals = totalGoals;
        this.playingPosition = playingPosition;
    }

    void displayFootballPlayer() {

        displayPlayer();

        System.out.println("Total Goals: " + totalGoals);
        System.out.println("Playing Position: " + playingPosition);
    }
}


public class PlayerDemo {

    public static void main(String[] args) {

        CricketPlayer cricketPlayer =
                new CricketPlayer(
                        "Virat",
                        35,
                        "India",
                        300,
                        18,
                        13000,
                        4,
                        "Right Hand",
                        "Right Arm"
                );


        FootballPlayer footballPlayer =
                new FootballPlayer(
                        "John",
                        28,
                        "England",
                        100,
                        10,
                        50,
                        "Forward"
                );


        System.out.println("----- CRICKET PLAYER -----");

        cricketPlayer.displayCricketPlayer();


        System.out.println("\n----- FOOTBALL PLAYER -----");

        footballPlayer.displayFootballPlayer();
    }
}