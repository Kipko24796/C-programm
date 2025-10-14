/*
Name: Kipkoech Collins 
Registration number:CT101/G/24796/24
A program to prompt the user to enter the password until type the correct one
*/
//start, step,stop
#include<stdio.h>
int main (){
int password =1234;
int pwd;
int i=0;//start 
do{
printf ("enter password\n");
scanf ("%d",&pwd);
i++;//step

}while (pwd!=password);//step
printf ("Accessgranted\n");

return 0;

}