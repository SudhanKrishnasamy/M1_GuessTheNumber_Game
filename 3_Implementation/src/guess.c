/**
 * @file guess.c
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
int guesstheno(int guess){
    int f,c=0,n=5;
    if(n==guess) {
         f=0;
         printf("Congratulations! The guess is correct %d\n", n);
      } else if(guess<n) {
         f=1;
         printf("Lower than the number\n");
         c++;
      } else {
         f=1;
         printf("Greater than the number\n");
         c++;
      }
    return (c);
}