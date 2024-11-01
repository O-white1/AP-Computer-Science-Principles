#include <stdio.h>
#include "GameHelper.h"

int main() {
    SetUpPlayer();
    SetUpEnemy();

    while (Player->Hp > 0) {
        if (Player->Hp <= 0) break;

        if (Enemy->Hp <= 0) {
            Player->Score += 1;
            printf("Enemy Defeated, Score: %d", Player->Score);
            SetUpEnemy();
            PromptAndChoice();
        }
        PromptAndChoice();
        if (Player->Choice==0) Enemy->Hp -= Player->Dmg;
        if (Player->Choice==1) {
            Player->Hp += RandHp(Player->Hp);
        }
        if (Player->Choice==2) {
            printf("Coward!\n");
            break;
        }
    }
    printf("You Died\nScore: %d\n", Player->Score);
}