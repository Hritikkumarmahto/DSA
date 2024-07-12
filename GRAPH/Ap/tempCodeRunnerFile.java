import java.util.Scanner;

class Student {
    private String name;
    private int uid;
    private String course;
    private char section;

    public Student(String name, int uid, String course, char section) {
        this.name = name;
        this.uid = uid;
        this.course = course;
        this.section = section;
    }

    public String getName() {
        return name;
    }

    public int getUid() {
        return uid;
    }

    public String getCourse() {
        return course;
    }

    public char getSection() {
        return section;
    }
}

public class StudentManagementSystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student[] students = new Student[100]; // Maximum of 100 students

        int choice;
        int count = 0;
        do {
            System.out.println("Welcome to Student Management System");
            System.out.println("1. Add Student");
            System.out.println("2. Display All Students");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter name: ");
                    scanner.nextLine(); // Consume newline character
                    String name = scanner.nextLine();
                    System.out.print("Enter UID: ");
                    int uid = scanner.nextInt();
                    System.out.print("Enter course: ");
                    String course = scanner.next();
                    System.out.print("Enter section: ");
                    char section = scanner.next().charAt(0);

                    students[count] = new Student(name, uid, course, section);
                    count++;
                    System.out.println("Student added successfully!");
                    break;

                case 2:
                    if (count == 0) {
                        System.out.println("No students added yet.");
                    } else {
                        System.out.println("List of Students:");
                        for (int i = 0; i < count; i++) {
                            Student student = students[i];
                            System.out.println("Name: " + student.getName());
                            System.out.println("UID: " + student.getUid());
                            System.out.println("Course: " + student.getCourse());
                            System.out.println("Section: " + student.getSection());
                            System.out.println("----------------------");
                        }
                    }
                    break;

                case 3:
                    System.out.println("Exiting Program. Goodbye!");
                    break;

                default:
                    System.out.println("Invalid choice. Please try again.");
            }

        } while (choice != 3);

        scanner.close();
    }
}
