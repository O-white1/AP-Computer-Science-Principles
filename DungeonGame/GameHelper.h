typedef struct Enemy {
    char Name[] = "";
    int  Hp = 0;
    int  Dmg = 0;
    char EnemyNames[][] = {
        "Goblin",
        "Dragon",
        "Vampire",
        "Giant Rat"
    };
};

typedef struct Player {
    int Hp = 0;
    int Dmg = 0;
    int Choice = 0;
    int Score = 0;
};

int RandHp(int limit)  {return rand()%limit;}
int RandDmg(int limit) {return rand()%limit;}

void ReviveEnemy() {
    Enemy->Name = EnemyNames[rand()%4];
    Enemy->Hp  = RandHp(50);
    Enemy->Dmg = RandDmg(10);
}

void SetUpPlayer() {
    Player->Hp  = RandHp(200);
    Player->Dmg = RandDmg(20);
    Player->Score = 0;
    Player->Choice = 0;
}

void SetUpEnemy() {
    Enemy->Name  = EnemyNames[rand()%4];
    Enemy->Hp    = RandHp(50);
    Enemy->Dmg   = RandDmg(10);
}

void PromptAndChoice() {
    printf("You see a %s with %d Health and %d attack power!\n", Enemy.Name, Enemy.Hp, Enemy.Dmg);
    printf("What Do you do?\tAttack(0)\tHeal(1)\tFlee(2)");
    scanf("%d", &Player->Choice);
}