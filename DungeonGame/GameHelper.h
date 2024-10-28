typedef struct Player() {
    int hp = 0;
    int dmg = 0;
    
};

typedef struct Enemy() {
    int hp = 0;
    int dmg = 0;

};

void TakeDamage(struct thing, int dmg) {
    thing.hp -= dmg;
}

// void hello() { printf("Hello World"); }
//int main() {
//  void (*ptr)() = &hello;
