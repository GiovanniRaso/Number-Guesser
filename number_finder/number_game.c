/*
Author: Giovanni Raso
Date: 2/24/2023
Project: Number Game
Objective: Two player game where player one inputs a number and player two tries to guess the number
*/

#include <stdio.h>
#include "num_game_func.h"

int main(){
    // creating varibles
    int magicNum, totalGuess, guess, correct;
    char junk;
    totalGuess  = 0;

    printf("Welcome to Guessing the Magic Number\n"); //start of the game

    do{
        printf("Player One enter a number between 1 - 100: ");// geting player one input
        scanf("%d", &magicNum);
        if((magicNum > 100) || (magicNum < 1)){ //Checking for correct input
            printf("Error: Number is not inside the range.\n");
            printf("\n");
        }
        printf("\n");
         do { scanf("%c", &junk); } while (junk != '\n');
    }while((magicNum > 100) || (magicNum < 1));

    // getting player twos input and checking to see if it is the magic number
    do{
        printf("Player two guess a number between 1 - 100: ");
        scanf("%d", &guess);
        if((guess > 100) || (guess < 1)){ //Checking for correct input
            printf("Error: Number is not inside the range.");
            printf("\n");
        }
        else{
            totalGuess += 1;
            check_num(guess, magicNum);
            printf("\n");
        }
        do { scanf("%c", &junk); } while (junk != '\n');
    }while(guess != magicNum);

    printf("You have guessed the magic number!  %d\n", magicNum);
    if(totalGuess == 1){
        printf("Player two is a mind reader.\n");
    }
    else{
        printf("Player two guessed %d times.\n", totalGuess);
    }

    return 0;
}