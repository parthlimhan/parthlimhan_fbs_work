class Artist {

    String name;
    int age;

    Artist(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void displayArtist() {

        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}


class Painter extends Artist {

    String paintingStyle;
    String mediumUsed;
    int numberOfPaintings;

    Painter(String name, int age,
            String paintingStyle,
            String mediumUsed,
            int numberOfPaintings) {

        super(name, age);

        this.paintingStyle = paintingStyle;
        this.mediumUsed = mediumUsed;
        this.numberOfPaintings = numberOfPaintings;
    }

    void displayPainter() {

        displayArtist();

        System.out.println(
                "Painting Style: " + paintingStyle
        );

        System.out.println(
                "Medium Used: " + mediumUsed
        );

        System.out.println(
                "Number of Paintings: "
                + numberOfPaintings
        );
    }
}


class Musician extends Artist {

    String instrument;
    String musicGenre;
    int numberOfAlbums;

    Musician(String name, int age,
             String instrument,
             String musicGenre,
             int numberOfAlbums) {

        super(name, age);

        this.instrument = instrument;
        this.musicGenre = musicGenre;
        this.numberOfAlbums = numberOfAlbums;
    }

    void displayMusician() {

        displayArtist();

        System.out.println("Instrument: " + instrument);
        System.out.println("Music Genre: " + musicGenre);
        System.out.println(
                "Number of Albums: "
                + numberOfAlbums
        );
    }
}


class Actor extends Artist {

    String filmIndustry;
    int numberOfMovies;

    Actor(String name, int age,
          String filmIndustry,
          int numberOfMovies) {

        super(name, age);

        this.filmIndustry = filmIndustry;
        this.numberOfMovies = numberOfMovies;
    }

    void displayActor() {

        displayArtist();

        System.out.println(
                "Film Industry: " + filmIndustry
        );

        System.out.println(
                "Number of Movies: "
                + numberOfMovies
        );
    }
}


public class ArtistDemo {

    public static void main(String[] args) {

        Painter painter =
                new Painter(
                        "Rahul",
                        40,
                        "Realism",
                        "Oil",
                        50
                );


        Musician musician =
                new Musician(
                        "Amit",
                        35,
                        "Guitar",
                        "Rock",
                        5
                );


        Actor actor =
                new Actor(
                        "Raj",
                        45,
                        "Bollywood",
                        30
                );


        System.out.println("----- PAINTER -----");
        painter.displayPainter();


        System.out.println("\n----- MUSICIAN -----");
        musician.displayMusician();


        System.out.println("\n----- ACTOR -----");
        actor.displayActor();
    }
}