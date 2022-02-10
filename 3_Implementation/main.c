/**
 * @file main.c
 * @author Sudhan
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "guessgame.h"
#include<stdio.h>
int main() {
   int n=5, f=1, guess, c=0, random1, random2;
   printf("guess a number between 1 to 10 \n");
   do {
      printf("enter the guessed number\n");
      scanf("%d", &guess);
      c++;
      if(guess>10 || guess <1){
         printf("select a number within the range\n");
         continue;
      }
      guesstheno(guess);
      if(n==guess){
         f=0;
      printf("Good guess\n ");
      }
      else{
      random2= guess_game();
      }
   } while(f);
   printf("Total attempts is: %d\n",c);
}