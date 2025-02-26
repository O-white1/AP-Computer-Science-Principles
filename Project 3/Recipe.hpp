#pragma once
#include <stdio.h>
#include <string>
#include <vector>

#include "Ingredient.h"
#include "Recipe.h"
using namespace std;
vector<Recipe> recipes;

void NewRecipe() {
    string name;
    vector<Ingredient> ingredients;
    int ingredientAmount = 0;
    printf("Enter the name of the recipe:\n"); scanf("%s", name);
    printf("Enter the number of ingredients:\n"); scanf("%d", ingredientAmount);
    for (int i = 0; i < ingredientAmount; i++) {
        string n;
        int amount;
        printf("Ingredient %d name: ", i); scanf("%s", n);
        printf("Ingredient %d amount: ", i); scanf("%d", amount);
    }
}
void ShowRecipes() {
    for (Recipe r : recipes) {
        r.printMe();
    }
}
void DeleteRecipe() {
    int num;
    printf("Which Recipe do you want to delete (by index)? ") scanf("%d", num);
    recipes.erase(begin(num), num);
}


void myFunc() {
    int choice = 0;
    string name;
    vector<Ingredient> ingredients;

    printf("(1)New Recipe\n(2)Show Recipes(3)Delete Recipe(4)Quit");
    scanf("%d", choice);
    switch (choice) {
        case 1: {NewRecipe();} //TODO
        case 2: {ShowRecipes();}
        case 3: {DeleteRecipe();}
        default: return;
    }
}

int main() {

}






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
            printf("%d)\t%s:\t%d\n", lcv, myIngredients[lcv].getName().c_str(), myIngredients[lcv].getAmount());
        }
    }

};