#include "num_game_func.h"
#include <stdio.h>

int check_num(int guess, int target){
    //This function checks to see if the guess is the target number or tells the users how close they are getting
    int Lfrz, Rfrz, Lcold, Rcold, Lhot, Rhot, Lburn, Rburn;

    // getting values for hints
    Lfrz = target - 30;
    Rfrz = target + 30;

    Lcold = target - 20;
    Rcold = target + 20;

    Lhot = target - 10;
    Rhot = target + 10;

    Lburn = target - 1;
    Rburn = target + 1;

    //checking the guess
    if(guess == target)
        return;
    else if(guess <= Lfrz)
        printf("You are freezing\n");
    else if(guess <= Lcold)
        printf("You are cold\n");
    else if(guess <= Lhot)
        printf("You are hot\n");
    else if(guess <= Lburn)
        printf("You are burning\n");
    else if(guess >= Rfrz)
        printf("You are freezing\n");
    else if(guess >= Rcold)
        printf("You are cold\n");
    else if(guess >= Rhot)
        printf("You are hot\n");
    else if(guess >= Rburn)
        printf("You are burning\n");

    return 0;
}