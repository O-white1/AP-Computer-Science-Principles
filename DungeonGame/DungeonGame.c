#include "GameHelper.h"


int main() {
    int choice = 0;
    int score = 0;
    int HealAmt = 0;
    char Kills[][];
    char EnemyNames[][] = {
        "Goblin",
        "Dragon",
        "Vampire",
        "Giant Rat"
    }

    Player* plr;
    plr->hp    =  100;
    plr->dmg   =  10;
    //plr->alive = true;

    Enemy* baddie;
    baddie->hp  = RandHp(50);
    baddie->dmg = RandDmg(10);
    baddie->alive = true;

    while (plr->alive == true) {
        if (CheckDeath(plr)) {
            printf("You're Dead.\nScore: %d\n", score);
        }

        printf("You Encounter a %s with %d Health and %d attack power!\n", baddie->name, baddie->hp, baddie->dmg);
        printf("What Do you do?\tAttack(0)\tHeal(1)\tFlee(3)");     scanf("%d", choice);
        HandleChoice();

        if (CheckDeath(baddie)) [
            score+=1
        ]

    }

}