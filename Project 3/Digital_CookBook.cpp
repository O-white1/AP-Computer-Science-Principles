//#pragma once
#include <stdio.h>
#include <string>
#include <vector>

#include "Ingredient.h"
#include "Recipe.h"
using namespace std;
vector<Recipe> recipes;

void NewRecipe() {
    char* name;
    vector<Ingredient> ingredients;
    int ingredientAmount = 0;
    printf("Enter the name of the recipe:\n"); scanf("%s", name);
    printf("Enter the number of ingredients:\n"); scanf("%d", &ingredientAmount);
    for (int i = 0; i < ingredientAmount; i++) {
        string n;
        int amount;
        printf("Ingredient %d name: ", i); scanf("%s", n);
        printf("Ingredient %d amount: ", i); scanf("%d", &amount);
        ingredients.emplace_back(n, amount); // automatically constructs Ingredient with params
    }
    recipes.emplace_back(name, ingredients);
}
void ShowRecipes() {
    for (Recipe r : recipes) {
        r.printMe();
    }
}
void DeleteRecipe() {
    printf("Which recipe would you like to delete? (by index number)");
    int recipeIndex = 0; scanf("%d", &recipeIndex);
    recipes.erase(recipes.begin() + recipeIndex);
}

int main() {
    int choice;
    printf("(1)New Recipe\n(2)Show Recipes\n(3)Delete Recipe\n(4)Quit");
    scanf("%d", &choice);
    if (choice == 1) {NewRecipe();}
    if (choice == 2) {ShowRecipes();}
    if (choice == 3) {DeleteRecipe();}
    else exit(0);
}