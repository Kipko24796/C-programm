/*
Name: Kipkoech Collins 
Registration number:CT101/G/24796/24
Description:program for number guessing game 
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
        int number,  guess, attempts =0;
        
        //random number generator 
        srand(time(0));
        number =rand()%100+1;//random number be between 1and 100
        
        printf ("welcomenumber guessing game\n");
        printf ("Enter number between 1 and 100.\n");
        
     do{
     printf ("Enter your guess:"); 
     scanf ("%d",&guess);
     attempts ++;
     
     if(guess>number){
     printf ("Too high try again\n");
     }else if (guess<number){
     printf ("Too low try again.\n");
     }else {
     printf ("congratulations you guessed it in %d attempts. \n, attempts");
     }
     
     }while (guess =number);
     return 0;
     
   }  