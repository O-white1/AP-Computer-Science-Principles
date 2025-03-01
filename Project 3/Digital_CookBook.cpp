//#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

#include "Ingredient.h"
#include "Recipe.h"
using namespace std;
vector<Recipe> recipes;

void NewRecipe() {
    string name;
    int ingredientAmount;
    vector<Ingredient> ingredients;

    cout << "Enter Name of Recipe: ";  //cin >>  name; // NO SPACE
    cout << "Enter Number of Ingredients: ";cin >> ingredientAmount;

    for (int i = 0; i < ingredientAmount; i++) {
        string n;
        int amount;
        cout << "Enter ingredient name: "; cin >> n; //TODO: SAME AS ABOVE
        cout << "Enter ingredient amount: "; cin >> amount;
        ingredients.emplace_back(n, amount);
    }
    recipes.emplace_back(name.data(), ingredients);
}
void ShowRecipes() {
    for (int i = 0; i < recipes.size(); i++) {
        printf("Recipe #%d:\n", i+1);
        recipes[i].printMe();
    }
}
void DeleteRecipe() {
    cout << "Which recipe would you like to delete? (by Recipe Number)";
    int recipeIndex = 0; cin >> recipeIndex; recipeIndex--;
    recipes.erase(recipes.begin() + recipeIndex);

}
void myFunc() {
    int choice;
    cout << "(1)New Recipe\n(2)Show Recipes\n(3)Delete Recipe\n(4)Quit\n";
    cin >> choice;
    if (choice == 1) {NewRecipe();myFunc();}
    if (choice == 2) {ShowRecipes();myFunc();}
    if (choice == 3) {DeleteRecipe();myFunc();}
    if (choice == 4) {exit(0);}
}


int main() {
    myFunc();
}