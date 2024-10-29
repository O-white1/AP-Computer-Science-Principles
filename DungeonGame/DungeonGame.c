#include "GameHelper.h"


int main() {
    int score = 0;

    Player* plr;
    plr->hp    =  100;
    plr->dmg   =  10;
    plr->alive = true;

    Enemy* baddie;
    baddie->hp  = RandHp(50);
    baddie->dmg = RandDmg(10);
    baddie->alive = true;

    while (plr->alive) {
        if (plr->hp <= 0) plr->alive = false; if (plr->alive == false) printf("You're dead.\nScore: %d", score);
        if (baddie->alive) {
            /** TODO: set up prompt and combat */
        }
    }

    

}