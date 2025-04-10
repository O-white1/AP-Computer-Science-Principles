import java.util.ArrayList;
import java.util.Scanner;
import java.util.Random;

public class Main {
    static Random rand = new Random();
    static Scanner sc  = new Scanner(System.in);
    static ArrayList<Enemy> dead = new ArrayList<>();
    static Player player = new Player("TEMP", 999);
    static int enemyType = rand.nextInt(1, 3);

    public static void fightCycle() {
        enemyType = rand.nextInt(1, 3);
        if (enemyType == 1) {
            Slime slime = new Slime(rand.nextInt(20, 30));
            slime.Fight(player);
            if (player.isWinner) {
                dead.add(slime);
                fightCycle();
            }
        }
        if (enemyType == 2) {
            Goblin goblin = new Goblin(rand.nextInt(25, 50));
            goblin.Fight(player);
            if (player.isWinner) {
                dead.add(goblin);
                fightCycle();
            }
        }
        if (enemyType == 3) {
            Wizard wizard = new Wizard(rand.nextInt(30, 75));
            wizard.Fight(player);
            if (player.isWinner) {
                dead.add(wizard);
                fightCycle();
            }
        }
    }

    public static void main(String[] args) {
        System.out.print("Enter Name: ");String name = sc.nextLine();
        player = new Player(name, 100);
        fightCycle();



    }
}
