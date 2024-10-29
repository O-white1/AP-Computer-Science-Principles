typedef struct Player() {
    int hp = 0;
    int dmg = 0;
    bool alive = false;
};

typedef struct Enemy() {
    int hp = 0;
    int dmg = 0;
    bool alive = false;

};

void TakeDamage(struct thing, int dmg) {
    thing.hp -= dmg;
}

int RandHp(int limit)  {return rand()%limit;}
int RandDmg(int limit) {return rand()%limit;}

// void hello() { printf("Hello World"); }
//int main() {
//  void (*ptr)() = &hello;
