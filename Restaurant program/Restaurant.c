#include <stdio.h>
int main ()
{
  int ch,a,b,qty,i,again;
  float bill =0;
  do{
  printf("*******Geethapriya Hotel Menu*******");
  printf("\n 1. Chicken Briyani\n 2. Fish fry \n 3. Chocolate Icecream\n");
  printf("ORDER NOW!!\nEnter your choice:");
  scanf("%d",&ch);
  switch (ch){
     case 1:
       printf("Enter the quantity:");
       scanf("%d",&qty);
       bill += qty*200;
       break;
     case 2:
       printf("Enter the quantity:");
       scanf("%d",&qty);
       bill += qty*100;
       break;
     case 3:
       printf("Enter the quantity:");
       scanf("%d",&qty);
       bill += qty*120;
       break;
     default:
       printf("<Invalid order>\n!!Check the menu!!");
       break;
  }
  printf("\nDo u want to order again(Yes=1,No=0) : ");
  scanf("%d",&i);
 }
 while(again==1);
 printf("\n=======YOUR BILL =======\n");
 printf("TOTAL AMOUNT = Rs.%.2f\n",bill);
 printf("\n!!!THANK YOU 😊 VISIT AGAIN!!!\n");
 }
