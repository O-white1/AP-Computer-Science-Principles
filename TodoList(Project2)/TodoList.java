
import java.util.Scanner;
import java.util.ArrayList;

public static void main(String[] args) {
    ArrayList<Items> list = new ArrayList<>;
    Scanner input = new Scanner(System.in);


    while (true) {
        System.out.println("(1): New Item\n(2): Mark Item Complete\n(3): Exit Program");
        int decision = input.nextInt();

        if (decision==1) {
            System.out.println("Item Name: ");String name = input.next();
            System.out.println("Item Priority (Lower means higher priority): ");int priority = input.nextInt();
            System.out.println("Today's date: ");String date = input.next();
            list.add(new Item(priority, name, date));
        }
        if (decision==2) {
            System.out.println("Which Item would you like to mark complete?");
            for (int lcv = 0; lcv < list.size; lcv++) {
                System.out.println(list.get(lcv).myName + "(%d)", lcv);
            }
        }
        if (decision==3) {

        }
    }
}