import java.io.*;
import java.util.*;

public class EmployeeManagementSystem {
    private static final String FILENAME = "employees.txt";
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        while (true) {
            System.out.println("\nEmployee Management System");
            System.out.println("1. Add an Employee");
            System.out.println("2. Display All Employees");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    addEmployee();
                    break;
                case 2:
                    displayAllEmployees();
                    break;
                case 3:
                    System.out.println("Exiting the program...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 3.");
            }
        }
    }

    private static void addEmployee() {
        try (PrintWriter writer = new PrintWriter(new FileWriter(FILENAME, true))) {
            System.out.print("Enter employee name: ");
            String name = scanner.nextLine();
            System.out.print("Enter employee ID: ");
            String id = scanner.nextLine();
            System.out.print("Enter employee designation: ");
            String designation = scanner.nextLine();
            System.out.print("Enter employee salary: ");
            double salary = scanner.nextDouble();
            scanner.nextLine();
+
            writer.println(name + "," + id + "," + designation + "," + salary);
            System.out.println("Employee added successfully.");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    private static void displayAllEmployees() {
        try (Scanner fileScanner = new Scanner(new File(FILENAME))) {
            System.out.println("\nEmployee Details:");
            while (fileScanner.hasNextLine()) {
                String line = fileScanner.nextLine();
                String[] details = line.split(",");
                System.out.println("Name: " + details[0]);
                System.out.println("ID: " + details[1]);
                System.out.println("Designation: " + details[2]);
                System.out.println("Salary: " + details[3]);
                System.out.println("-----------------------");
            }
        } catch (FileNotFoundException e) {
            System.out.println("No employees found.");
        }
    }
}
