// to check whether the given the number is even or ood

#include<stdio.h>
int main()  //start of the main function
{
int num;  //variable declaration
printf("Enter a number to be checked");  // to print this line
scanf("%d",&num);  // restoring the number

if(num % 2 == 0)  // condition to verify whether the number is even or odd
{
printf(" The number is EVEN ");
}
else
{
printf(" The number is ODD ");
}

return 0;

}
