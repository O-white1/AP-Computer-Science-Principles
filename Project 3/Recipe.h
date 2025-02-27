#pragma once
#include <string>
#include <list>
#include <vector>

#include "Ingredient.h"
using namespace std;
class Recipe {
private:
    string myName;
    vector<Ingredient> myIngredients;

public: Recipe(string name, vector<Ingredient> ingredients) {
    this->myName = name;
    this->myIngredients = ingredients;
}

public:void printMe() {
    for (int lcv = 0; lcv < myIngredients.size(); lcv++) {
        printf("%d %s)\t%s:\t%d\n", lcv, this->myName.c_str(), myIngredients[lcv].getName().c_str(), myIngredients[lcv].getAmount());
    }
}
};