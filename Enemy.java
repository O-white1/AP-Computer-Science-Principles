public abstract class Enemy<T> extends Entity {
    public Enemy(int hp) {
        super(hp);
    }

    public void Fight(Entity e) {
        while (this.myHp > 0) {

            int action = myRandom.nextInt(1, 2);
            if (action == 1) {
                int x = myRandom.nextInt(5, 15);
                Heal(x);
                System.out.printf(this.myName + " healed for %d\n", x);
            }
            if (action == 2) {
                int y = myRandom.nextInt(5, 20);
                Attack(e, myRandom.nextInt(y));
                System.out.printf(this.myName + " did %d damage to %s\n", y, e.getName());
            }
        }
    }
}
