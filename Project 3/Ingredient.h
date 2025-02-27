#pragma once
#include <string>

#ifndef INGREDIENT_H
#define INGREDIENT_H

using namespace std;
class Ingredient {
private:
    string myName;
    int myAmount;
public: Ingredient(string n, int a) {
    myName = n;
    myAmount = a;
}
    string getName() {return myName;}
    int getAmount() {return myAmount;}
};
#endif
