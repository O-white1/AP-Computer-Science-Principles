#include "GameHelper.h"
#include <stdio.h>

int main() {
    Enemy* Enemy;
    Player* Player;
    SetUpPlayer();
    SetUpEnemy();

    while (Player.Hp > 0) {
        if (Player.Hp <= 0) break;

        if (Enemy.Hp <= 0) {
            Player.Score += 1;
            SetUpEnemy();
            PromptAndChoice();
        }
        else PromptAndChoice();
        PromptAndChoice();
        if (Player.Choice==0) Enemy.Hp -= Player.Dmg;
        if (Player.Choice==1) {
            Player.Hp += RandHp(Player.Hp);
        }
        if (Player.Choice==2) {
            printf("Coward!\n");
            break;
        }
    }
    printf("You Died\nScore: %d\n", Player.Score);
}