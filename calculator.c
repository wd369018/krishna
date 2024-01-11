/*
author:white purpose:to make a simple calculator dated:30/10/23*/
   #include<stdio.h>
   #include<stdlib.h>

   int main(){
     
     char c;
     float x, y; 

     while (1){
      printf("Enter an opertor (+, -,*,/), if want to exit""press x: ");
      scanf("%c", &c);

      if(c== 'x')
      exit(0);

      printf("Enter Two values:\n");
      scanf("%f %f", &x, &y);

      switch (c){
        // for addition
         
        case'+':
        printf("%.1f +%.1f = %.1f\n",x,y, x+y);
        break;
        //for subtraction
        case'-':
        printf("%.1f -%.1f = %.1f\n",x,y, x-y);
        break;
        //for multiplication
        case'*':
        printf("%.1f *%.1f = %.1f\n",x,y, x*y);
        break;
        //for division
        case'/':
        printf("%.1f /%.1f = %.1f\n",x,y, x/y);
        break;

        defult:
        printf("Error please write a valid operator\n");
      }
     }

     return 0;   
   }