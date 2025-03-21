import java.util.Random;

public abstract class Entity {
    protected Random myRandom = new Random();
    protected boolean isWinner = true;
    protected String myName;
    protected int myHp;


    public Entity(int hp) {
        this.myHp = hp;
    }
    public void Heal(int hp) {
        myHp +=  hp;
    }
    public void TakeDamage(int dmg) {
        myHp -= dmg;
        if (myHp <= 0) {
            System.out.println(myName + " has died");
            isWinner = false;
        }
        else {
            System.out.println(myName + " has " + myHp + " health left");
        }
    }


    public void Attack(Entity e, int dmg) {e.TakeDamage(dmg);}
    public String getName() {return myName;}
    public int getHp() {return myHp;}


}
