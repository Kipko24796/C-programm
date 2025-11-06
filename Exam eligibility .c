/*
Name:Kipkoech Collins 
Registration number:CT101/G/24796/24
Description:checking exam eligibility 
*/

 #include <stdio.h>
 
 int main (){
 int average_marks;
 int attendance;
 //input attendance and average marks 
 printf ("Enter average marks:");
 scanf ("%f",&average_marks);
 
 printf ("Enter attendance percentage:");
 scanf ("%f",&attendance);
 
 //check eligibility 
 if(attendance >=75 & average_marks >=40){
 printf ("Eligible for final exam. \n");
 }else{
 printf ("not eligible. \n");
 }
 
 return 0;
 }