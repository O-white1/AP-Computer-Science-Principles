import java.util.ArrayList;
import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        ArrayList<Enemy> dead = new ArrayList<>();
        Scanner sc  = new Scanner(System.in);
        Random rand = new Random();

        System.out.print("Enter Name: ");String name = sc.nextLine();
        Player player = new Player(name, 100);

        int enemyType = rand.nextInt(1, 3);

        if (enemyType==1) {
            Slime slime = new Slime(rand.nextInt(20, 30));
            slime.Fight(player);
        }
        if (enemyType==2) {
            Goblin goblin = new Goblin(rand.nextInt(25, 50));
            goblin.Fight(player);
        }
        if (enemyType==3) {
            Wizard wizard = new Wizard(rand.nextInt(30, 75));
            wizard.Fight(player);
        }

    }
}