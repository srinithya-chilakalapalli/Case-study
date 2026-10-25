#include<stdio.h>
int main()
{
float currentbalance,withdrawal,deposit;
int transaction;
printf("enter the current bank balance:");
scanf("%f",&currentbalance);
printf("\nenter the transaction type\n1.balance inquiry\n2.cash withdrawal\n3.cash deposit:");
scanf("%d",&transaction);
   if(transaction==1)
   {
   printf("the current bank balance is %f",currentbalance);
   }
   else if(transaction==2)
   {
     printf("enter withdrawal amount:");
     scanf("%f",&withdrawal);
     if(withdrawal<=currentbalance)
     {
     printf("transaction successful");
     printf("remaining balance=%f",currentbalance-withdrawal);
     }
     else
     printf("insufficient balance");
   }
   else if(transaction==3)
   {
   printf("enter deposit amount");
   scanf("%f",&deposit);
   printf("the updated balance=%f",currentbalance+deposit);
   }
   else
   printf("invalid option");
}   