import java.util.List;
import java.util.ArrayList;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class StoreDriver {

    public static void main(String[] args) throws FileNotFoundException {

        int managerCount = 0;
        int salesAssociateCount = 0;
        int securityGuardCount = 0;

        PrintWriter pwd = new PrintWriter(new File("outputFile.txt"));
        Scanner sc = new Scanner(new File("inputFile.txt"));

        List<Manager> managerList = new ArrayList<>();
        List<SalesAssociate> salesAssociateList = new ArrayList<>();
        List<SecurityGuard> securityGuardList = new ArrayList<>();

        while (sc.hasNextLine()) {
            String employeeType = sc.nextLine();
            String storeDetails = sc.nextLine();
            String empName = sc.nextLine();
            double basePay = sc.nextDouble();
            double numberOfHoursWorked = sc.nextDouble();
            double hourlyRate = sc.nextDouble();

            if (employeeType.equals("Manager")) {
                double currentSales = sc.nextDouble();
                double currentStoreSales = sc.nextDouble();

                Manager manager = new Manager(currentStoreSales, currentSales, numberOfHoursWorked,
                        hourlyRate, storeDetails, basePay, empName);
                managerList.add(manager);

            } else if (employeeType.equals("Sales Associate")) {
                double salesRate = sc.nextDouble();

                SalesAssociate salesAssociate = new SalesAssociate(salesRate, numberOfHoursWorked, hourlyRate,
                        storeDetails, empName, basePay);
                salesAssociateList.add(salesAssociate);

            } else if (employeeType.equals("Security Guard")) {
                double securityHours = sc.nextDouble();

                SecurityGuard securityGuard = new SecurityGuard(securityHours, numberOfHoursWorked, hourlyRate, storeDetails, basePay, empName);
                securityGuardList.add(securityGuard);
            }
            sc.nextLine();
        }
        sc.close();

        System.out.println("******************************************************");
        System.out.println("Number of employees working as MANAGER are: " + managerList.size());
        System.out.println("******************************************************");
        pwd.println("******************************************************");
        pwd.println("Number of employees working as MANAGER are: " + managerList.size());
        pwd.println("******************************************************");

        for (Manager manager : managerList) {
            managerCount++;
            System.out.println(managerCount + ". Manager Details:");
            System.out.println(manager);
            pwd.println(managerCount + ". Manager Details:");
            pwd.println(manager);
            System.out.println("Percentage of sales done: " + String.format("%.2f", manager.salesPercentByManager()) + "%");
            pwd.println("Percentage of sales done: " + String.format("%.2f", manager.salesPercentByManager()) + "%");
            System.out.println("Gross Payment: $" + String.format("%.1f", manager.calculatePay()));
            pwd.println("Gross Payment: $" + String.format("%.1f", manager.calculatePay()));
            System.out.println("Remaining store revenue: $" + manager.calculateRemainingStoreRevenue(manager.getTotalStoreSales()));
            pwd.println("Remaining store revenue: $" + manager.calculateRemainingStoreRevenue(manager.getTotalStoreSales()));

            System.out.print("Is " + manager.getEmployeeName() + " eligible for promotion? ");
            if (manager.checkPromotionEligibility()) {
                System.out.println("Yes, he is \n");
            } else {
                System.out.println("No, he needs to work harder\n");
            }
        }

        System.out.println("******************************************************");
        System.out.println("Number of employees working as SALES ASSOCIATES are: " + salesAssociateList.size());
        System.out.println("******************************************************");
        pwd.println("******************************************************");
        pwd.println("Number of employees working as SALES ASSOCIATES are: " + salesAssociateList.size());
        pwd.println("******************************************************");

        for (SalesAssociate salesAssociate : salesAssociateList) {
            salesAssociateCount++;
            System.out.println(salesAssociateCount + ". Sales Associate Details:");
            System.out.println(salesAssociate);
            pwd.println(salesAssociateCount + ". Sales Associate Details:");
            pwd.println(salesAssociate);
            System.out.println("Total commission: $" + salesAssociate.calculateCommission());
            System.out.println("Gross Payment: $" + salesAssociate.calculatePay());
            pwd.println("Total commission: $" + salesAssociate.calculateCommission());
            pwd.println("Gross Payment: $" + salesAssociate.calculatePay());
            System.out.print("Is " + salesAssociate.getEmployeeName() + " eligible for promotion? ");
            if (salesAssociate.checkPromotionEligibility()) {
                System.out.println("Yes, he/she is eligible\n");
            } else {
                System.out.println("No, he/she needs to work harder\n");
            }
        }

        System.out.println("******************************************************");
        System.out.println("Number of employees working as SECURITY GUARDS are: " + securityGuardList.size());
        System.out.println("******************************************************");
        pwd.println("******************************************************");
        pwd.println("Number of employees working as SECURITY GUARDS are: " + securityGuardList.size());
        pwd.println("******************************************************");

        for (SecurityGuard securityGuard : securityGuardList) {
            securityGuardCount++;
            System.out.println(securityGuardCount + ". Security Guard Details:");
            System.out.println(securityGuard);
            pwd.println(securityGuardCount + ". Security Guard Details:");
            pwd.println(securityGuard);
            System.out.println("Gross Payment: $" + securityGuard.calculatePay());
            pwd.println("Gross Payment: $" + securityGuard.calculatePay());
            System.out.print("Is " + securityGuard.getEmployeeName() + " eligible for promotion? ");
            if (securityGuard.checkPromotionEligibility()) {
                System.out.println("Yes, he/she is eligible\n");
            } else {
                System.out.println("No, he/she needs to work harder\n");
            }
        }

        pwd.close();
    }
}
