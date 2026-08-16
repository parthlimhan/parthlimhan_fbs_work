class Player {

    String name;
    int age;
    String country;
    int matchesPlayed;
    int jerseyNumber;

    Player(String name,
           int age,
           String country,
           int matchesPlayed,
           int jerseyNumber) {

        this.name = name;
        this.age = age;
        this.country = country;
        this.matchesPlayed = matchesPlayed;
        this.jerseyNumber = jerseyNumber;
    }

    void play() {
        System.out.println("Player is playing");
    }
}


class CricketPlayer extends Player {

    int totalRuns;
    int totalWickets;
    String battingStyle;
    String bowlingStyle;

    CricketPlayer(String name,
                  int age,
                  String country,
                  int matchesPlayed,
                  int jerseyNumber,
                  int totalRuns,
                  int totalWickets,
                  String battingStyle,
                  String bowlingStyle) {

        super(name, age, country,
              matchesPlayed, jerseyNumber);

        this.totalRuns = totalRuns;
        this.totalWickets = totalWickets;
        this.battingStyle = battingStyle;
        this.bowlingStyle = bowlingStyle;
    }

    @Override
    void play() {
        System.out.println(
                "Cricket player is playing cricket"
        );
    }
}


class FootballPlayer extends Player {

    int totalGoals;
    String playingPosition;

    FootballPlayer(String name,
                   int age,
                   String country,
                   int matchesPlayed,
                   int jerseyNumber,
                   int totalGoals,
                   String playingPosition) {

        super(name, age, country,
              matchesPlayed, jerseyNumber);

        this.totalGoals = totalGoals;
        this.playingPosition = playingPosition;
    }

    @Override
    void play() {
        System.out.println(
                "Football player is playing football"
        );
    }
}


public class PlayerPolymorphism {

    public static void main(String[] args) {

        Player player;


        player = new CricketPlayer(
                "Rahul",
                30,
                "India",
                200,
                18,
                10000,
                50,
                "Right Hand",
                "Right Arm"
        );

        player.play();


        player = new FootballPlayer(
                "John",
                28,
                "England",
                100,
                10,
                50,
                "Forward"
        );

        player.play();
    }
}