typedef struct Player() {
    int hp = 0;
    int dmg = 0;
    //bool alive = false;
};

typedef struct Enemy() {
    char Name[] = "";
    int  hp = 0;
    int  dmg = 0;
    bool alive = false;

};

int RandHp(int limit)  {return rand()%limit;}
int RandDmg(int limit) {return rand()%limit;}

// void hello() { printf("Hello World"); }
//int main() {
//  void (*ptr)() = &hello;

void HandleChoice() {
    if (choice == 0) baddie->hp -= plr->dmg;
    else if (choice == 1) {
        HealAmt = rand()%plr->hp;
        plr->hp += HealAmt;
        printf("You healed by %d\tYou're Health is %d", HealAmt, plr->hp);
    }
    else if (choice == 3) {
        printf("COWARD!\nYou Lose! \nScore: %d", score);
        break;
}

}
bool CheckDeath(struct thing) {
    if (thing->hp <= 0)
        return true;
}

void TakeDamage(int amt, struct thing) {
    thing->hp -= amt;
}




