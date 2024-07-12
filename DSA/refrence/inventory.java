import java.util.Scanner;

class VideoStore {
  private Video[] videos;

  public VideoStore(int size) {
    videos = new Video[size];
  }

  public void addVideo(String title, String director, int releaseYear) {
    for (int i = 0; i < videos.length; i++) {
      if (videos[i] == null) {
        videos[i] = new Video(title, director, releaseYear);
        System.out.println("Video added: " + title);
        break;
      }
    }
  }

  public void checkOutVideo(String title) {
    for (Video video : videos) {
      if (video != null && video.getTitle().equalsIgnoreCase(title) && !video.isCheckedOut()) {
        video.setCheckedOut(true);
        System.out.println("Checked out: " + title);
        return;
      }
    }
    System.out.println("Video not available for checkout: " + title);
  }

  public void returnVideo(String title) {
    for (Video video : videos) {
      if (video != null && video.getTitle().equalsIgnoreCase(title) && video.isCheckedOut()) {
        video.setCheckedOut(false);
        System.out.println("Returned: " + title);
        return;
      }
    }
    System.out.println("Video not checked out or not found: " + title);
  }

  public void receiveRating(String title, int rating) {
    for (Video video : videos) {
      if (video != null && video.getTitle().equalsIgnoreCase(title)) {
        video.addRating(rating);
        System.out.println("Rating added for " + title + ": " + rating);
        return;
      }
    }
    System.out.println("Video not found: " + title);
  }

  public void listInventory() {
    for (Video video : videos) {
      if (video != null) {
        System.out.println("Title: " + video.getTitle() + ", Director: " + video.getDirector() +
            ", Release Year: " + video.getReleaseYear() + ", Checked Out: " +
            (video.isCheckedOut() ? "Yes" : "No") + ", Rating: " + video.getRating());
      }
    }
  }
}

class Video {
  private String title;
  private String director;
  private int releaseYear;
  private boolean isCheckedOut;
  private int rating;

  public Video(String title, String director, int releaseYear) {
    this.title = title;
    this.director = director;
    this.releaseYear = releaseYear;
    isCheckedOut = false;
    rating = 0;
  }

  public String getTitle() {
    return title;
  }

  public String getDirector() {
    return director;
  }

  public int getReleaseYear() {
    return releaseYear;
  }

  public boolean isCheckedOut() {
    return isCheckedOut;
  }

  public void setCheckedOut(boolean checkedOut) {
    isCheckedOut = checkedOut;
  }

  public int getRating() {
    return rating;
  }

  public void addRating(int rating) {
    this.rating = rating;
  }
}

public class inventory {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    VideoStore videoStore = new VideoStore(5);

    while (true) {
      System.out.println("\nMenu:");
      System.out.println("1. Add Videos");
      System.out.println("2. Check Out Videos");
      System.out.println("3. Return Videos");
      System.out.println("4. Receive Rating");
      System.out.println("5. List Inventory");
      System.out.println("6. Exit");
      System.out.print("Enter your choice: ");

      int choice = scanner.nextInt();
      scanner.nextLine();

      switch (choice) {
        case 1:
          System.out.print("Enter video title to add: ");
          String addTitle = scanner.nextLine();
          System.out.print("Enter director: ");
          String director = scanner.nextLine();
          System.out.print("Enter release year: ");
          int releaseYear = scanner.nextInt();
          videoStore.addVideo(addTitle, director, releaseYear);
          break;
        case 2:
          System.out.print("Enter video title to check out: ");
          String checkOutTitle = scanner.nextLine();
          videoStore.checkOutVideo(checkOutTitle);
          break;
        case 3:
          System.out.print("Enter video title to return: ");
          String returnTitle = scanner.nextLine();
          videoStore.returnVideo(returnTitle);
          break;
        case 4:
          System.out.print("Enter video title to receive rating: ");
          String ratingTitle = scanner.nextLine();
          System.out.print("Enter rating (1-5): ");
          int rating = scanner.nextInt();
          videoStore.receiveRating(ratingTitle, rating);
          break;
        case 5:
          videoStore.listInventory();
          break;
        case 6:
          System.out.println("Exiting program. Goodbye!");
          System.exit(0);
          break;
        default:
          System.out.println("Invalid choice. Please try again.");
      }
    }
  }
}
