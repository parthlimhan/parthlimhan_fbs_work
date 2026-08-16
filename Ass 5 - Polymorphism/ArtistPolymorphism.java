class Artist {

    String name;
    int age;

    Artist(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void perform() {
        System.out.println("Artist is performing");
    }
}


class Painter extends Artist {

    String paintingStyle;
    String mediumUsed;
    int numberOfPaintings;

    Painter(String name,
            int age,
            String paintingStyle,
            String mediumUsed,
            int numberOfPaintings) {

        super(name, age);

        this.paintingStyle = paintingStyle;
        this.mediumUsed = mediumUsed;
        this.numberOfPaintings = numberOfPaintings;
    }

    @Override
    void perform() {
        System.out.println(
                "Painter is painting"
        );
    }
}


class Musician extends Artist {

    String instrument;
    String musicGenre;
    int numberOfAlbums;

    Musician(String name,
             int age,
             String instrument,
             String musicGenre,
             int numberOfAlbums) {

        super(name, age);

        this.instrument = instrument;
        this.musicGenre = musicGenre;
        this.numberOfAlbums = numberOfAlbums;
    }

    @Override
    void perform() {
        System.out.println(
                "Musician is playing music"
        );
    }
}


class Actor extends Artist {

    String filmIndustry;
    int numberOfMovies;

    Actor(String name,
          int age,
          String filmIndustry,
          int numberOfMovies) {

        super(name, age);

        this.filmIndustry = filmIndustry;
        this.numberOfMovies = numberOfMovies;
    }

    @Override
    void perform() {
        System.out.println(
                "Actor is acting"
        );
    }
}


public class ArtistPolymorphism {

    public static void main(String[] args) {

        Artist artist;


        artist = new Painter(
                "Rahul",
                40,
                "Realism",
                "Oil",
                50
        );

        artist.perform();


        artist = new Musician(
                "Amit",
                35,
                "Guitar",
                "Rock",
                5
        );

        artist.perform();


        artist = new Actor(
                "Raj",
                45,
                "Bollywood",
                30
        );

        artist.perform();
    }
}