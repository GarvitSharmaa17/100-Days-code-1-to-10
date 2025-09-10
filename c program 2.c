

/*Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.*/



#include <stdio.h>

int main (){

int a;
int b;
int sum;
int sub;
int product;
float quotient;
printf("Enter First Number : ");
scanf("%d",&a);
printf("Enter Second Number : ");
scanf("%d",&b);

sum=a+b;
sub=a-b;
product=a*b;
quotient=a/b;

printf("Sum of two number is : %d\nDifference between two number is : %d\nProduct of two numbers is : %d\nQuotient of two numbers is : %f\n",sum,sub,product,quotient);


return 0;
}



