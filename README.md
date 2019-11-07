----
#                  **PROGRAMMING FOR PROBLEM SOLVING ESC-18105**
---
![](https://www.logolynx.com/images/logolynx/9f/9f2c4042d28462d69f738e6018bb4ff9.jpeg)
---
## **NAME** - ***DIVYA JUHI SINGH***
## **ROLL NO.** - *1914033*
## **BRANCH** - *CIVIL*
## **SECTION**- *A2*
'''
---
----

#         PROGRAMS

----

## 1. ADD TWO NUMBERS
```C
#include<stdio.h>
void main()
{
        int a,b;
        printf("Enter the two number to be added\n");
        scanf("%d%d",&a,&b);
        printf("Sum  : %d + %d = %d \n",a,b,a+b);

}
```
### OUTPUT
```
Enter the two number to be added
14 35
Sum  : 14 + 35 = 49
```

----
## 2. AVG.OF N NUMBER
```C
#include<stdio.h>
void main()     
{
        int n;
        float sum=0;
        printf("Enter number of elements \n");

        scanf("%d",&n);
        int a[n];
        printf(" now enter %d elements\n",n);
        for(int i=1;i<=n;i++)
        {       
                scanf("%d",&a[i]);
                sum+=a[i];
        }
        float avg;
        avg = sum/n;
        printf("Average of %d elements is %0.2f \n",n,avg);
}       
```

----
## 3. WEEKDAYS BY USING SWITCH STATEMENT
```C
#include<stdio.h>
void main()
{
        int a;
        printf("Enter any integer between 1 to 7\n");
        scanf("%d",&a);
        switch(a)
        {
                case 1:
                        printf("MONDAY\n");
                        break;
                case 2:
                        printf("TUESDAY\n");
                        break;
                case 3:
                        printf("WEDNESDAY\n");
                        break;
                case 4:
                        printf("THRUSDAY\n");
                        break;
                case 5:
                        printf("FRIDAY\n");
                        break;
                case 6:
                        printf("SATURDAY\n");
                        break;
                case 7:
                        printf("SUNDAY\n");
                        break;
                default :
                        printf("Enter number between 1 to 7\n");
                        break;
        }
}  
```

----
## 4. NUMBER IS EVEN OR ODD
```C
#include<stdio.h>
void main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        if(a%2==0)
                printf("EVEN\n");
        else
                printf("ODD\n");
}
```

----
## 5. TABLE OF ANY NUMBER
```C
#include<stdio.h>
int main()
{
        int n,i;
        printf("enter the number \n");
        scanf("%d",&n);
        printf("\t\t\tTABLE OF %d\n",n);
        printf("\t\t\t==========\n");
        for(i=1;i<11;i++)
        {
                printf("%d * %d = %d\n",n,i,n*i);
        }               
        return 0;       
}
```

----
## 6. ARMSTRONG NUMBER
```C
#include<stdio.h>
int main()
{
        int sum=0,digit;
        int n, temp;
        printf("enter any positive integer number");
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
                digit=temp%10;
                temp/=10;
                sum=sum+digit*digit*digit;
        }
        if(n==sum)
                printf("\n %d is a armstrong number\n",n);
        else
                printf("\n %d is not a armstrong number\n",n);
}
```

----
## 7. CALCULATOR
```C
#include<stdio.h>


void main()
{
        
        puts(" _______________ ");
        puts("|_______________|");
        puts("| 1 | 2 | 3 |   |");
        puts("|___|___|___|   |");
        puts("| 4 | 5 | 6 | + |");
        puts("|___|___|___|___|");
        puts("| 7 | 8 | 9 | - |");
        puts("|___|___|___|___|");
        puts("|     0     | * |");
        puts("|___________|___|");

}
```
----
## 8. BUBBLE SORT
```C
#include<stdio.h>
int main()
{
        int i,n,k,temp;
        printf("\n enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter %d elements of array\n",n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(k=0;k<n-1;k++)
        {
                for(i=0;i<n-k-1;i++)
                {
                        if(a[i]>a[i+1])
                        {
                                temp=a[i];
                                a[i]=a[i+1];
                                a[i+1]=temp;
                        }
                }
        }
        printf("\n array elements after shorting\n");
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
}
```

## 9. BINARY SEARCH
```C
#include<stdio.h>
int main()      
{               
        int m,n,a[100],search,first,last,middle;
        printf("Enter the size of array");
        scanf("%d",&m);
                
        printf("Enter %d numbar\n",m);
                
        for(n=0;n<m;n++)
                scanf("%d",&a[n]);
        printf("Enter the the number u want to search\n");
        scanf("%d",&search);

        first=0;
        last=m-1;
        middle=(first+last)/2;

        while(first<=last)
        {
                if(a[middle]<search)
                        first=middle+1;
                else if(a[middle]==search)
                {
                        printf("%d found at location %d\n",search,middle+1);
                        break;
                }
                else
                        last=middle-1;
                middle=(first+last)/2;
        }
        if(first>last)
                printf("Not found! %d is not present in the list \n",search);
        return 0;
}
```
----
## 10. FACTORIAL OF n NUMBER
```C
              
#include<stdio.h>
int main()
{       
        int n;
        printf("enter number\n");
        scanf("%d",&n);
        int p=1;
        for(int i=1;i<=n;i++)
        {
                p*=i;
        }
        printf("%d! = %d \n",n,p);
}
```
----
##  11. FIZZ-BUZZ GAME
```C
#include<stdio.h>
int main()
{
        for(int i=1;i<=30;i++)
                {
                        if(i%15==0)
                                printf("fizzbuzz\n");
                        else if(i%5==0)
                                printf("buzz\n");
                        else if(i%3==0)
                                printf("fizz\n");
                        else {printf("%d\n",i);}
                }
        return 0;
}
```

----
## 12. SUM OF FIRST 100 NUMBERS
```C
#include<stdio.h>
int main()
{
        int sum=0,i=1;
        while(i<101)
        {
                sum =sum+i;
                i++;
        }
        printf("sum of numbers from 0 to 100 is %d\n",sum);
        return 0;
}
```

----
## 13. FIND GREATER BETWEEN TWO GIVEN NUMBERS
```C
#include<stdio.h>
void main()
{       
        float a,b;
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter the second nummber\n");
        scanf("%f",&b);
        if(a>b)
                printf("%f is greater\n",a);
        else if(b>a)
                printf("%f is greater\n",b);
        else    
                printf("both numbers are equal\n");
}
```
----
## 14. GREATER AMONG THREE NUMBERS
```C
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers which you want to compare \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is the greatest number\n",a);
else if(b>a&&b>c)
printf("\n%d is the greatest number\n",b);
else 
printf("\n%d is the greatest number\n",c);
}
```
----
## 15. GREATEST INTEAGER FUNCTION
```C
#include<stdio.h>
int gcd(int a,int b)
{
        int c;
        c=a%b;
        if(c==0)
                return b;
        else 
                gcd(b,c);
}
int main()
{
        int m,n,c;
        scanf("%d%d",&m ,&n);
        c=gcd(m,n);
        printf("\n gcd is %d \n",c);
        return 0;
}

                         
                                     **********************OR*******************
                                     
                                     
                                     
#include<stdio.h>
int main()
{       
        int m,n,r=1;
        printf("\nEnter value for m,n\n");
        scanf("%d%d",&m,&n);
        while(r!=0)
        {
                r=n%m;
                n=m;
                m=r;
        }               
        printf("\nGCD=%d\n",n);
        return 0;
}                       
```
 ----
 ## 16. LEAP YEAR CHECK
 ```C
 #include <stdio.h>
    int main()
    {
        int year;
        printf("Enter a year: ");
        scanf("%d",&year);
        if(year%4 == 0)
        {
            if( year%100 == 0)
            {
                // year is divisible by 400, hence the year is a leap year
                if ( year%400 == 0)
                    printf("%d is a leap year.", year);
                else
                    printf("%d is not a leap year.", year);
            }
            else
                printf("%d is a leap year.", year );
        }
        else
            printf("%d is not a leap year.", year);
        
        return 0;
    }
---
```
### OUTPUT
```
Enter a year: 1900
1900 is not a leap year.
Enter a year: 2012
2012 is a leap year.
```

----
## 17. LINEAR SEARCH
```C
#include<stdio.h>

int check(int b[],int m,int o)
{int p=-1;
        for(int i=1;i<=m;i++)
        {
                if(b[i]==o)
                 p = i;
        }

                        return p;
        
}

void main()
{
        int n,num,index;
        printf("enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter the array elements\n");
        for(int i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("now enter the number which you want to check\n whether it is present or not in entered array\n");

        scanf("%d",&num);
        index=check(a,n,num);
        if(index==-1)
        printf("element is not found\n");
        else
        printf("element is found at the position %d \n",index);
}
```
----
##  18. SUM OF TWO MATRIX
```C
   include<stdio.h>
void main()
{
        int a[10][10],b[10][10],c[10][10];
        int m,n,i,j;
        printf("Enter size of matrix A as m,n:");
        scanf("%d%d",&m,&n);
        printf("\nEnter elements of matrix A rowwise m*n\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("enter the elements of second matrix\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        c[i][j]=b[i][j]+a[i][j];
                }
        }
        printf("\nSUM OF MATRIX A&B \n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d    ",c[i][j]);
                }
                printf("\n");
        }       
}       
```


----
## 19. TRANSPOSE MATRIX
```C
#include<stdio.h>
int main()
{ 
        int m,n,i,j;
        printf("enter the number of rows and columns of matrix\n");
        scanf("%d%d",&m,&n);
        int a[m][n],b[m][n] ;
                printf("enter the elements of  matrix row wise\n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                scanf("%d",&a[i][j]);
                        }       
                }       
                
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                b[j][i]=a[i][j];
                        }       
                }       
                printf("transpose  of matrix is \n");
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                printf("%d ",b[i][j]);
                        }       
                        printf("\n");
                }       
}               
```
----
## 20. SUM OF DIGITS OF A NUMBER
```C
#include<stdio.h>
int main()
{
        int a,sum=0,c;
        printf("enter the number\n");
        scanf("%d",&a);
        while(a!=0)
        {
        c=a%10;
        sum+=c;
        a=a/10;
        }
        printf("sum of digits is %d\n",sum);
}
```
----
## 21. CHECK PALINDROME NUMBER
```C
#include<stdio.h>
int main()
{
        int sum=0,digit;
        int n, temp;
        printf("enter any positive integer number\n");
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
                digit=temp%10;
                temp/=10;
                sum=sum*10+digit;
        }
        if(n==sum)
                printf("\n %d is a palidrome number\n",n);
        else
                printf("\n %d is not a palidrome number\n",n);
}
```
 ----
 ## 22. CALL BY VALUE
 ```C
 #include<stdio.h>
void swap(int a,int b);
void main()
{
int x,y;
printf("\n Enter value for x:");
scanf("%d",&x);
printf("\n Enter value for y:");
scanf("%d",&y);
printf("\n Before calling swap functin\n");
printf("\n Value of x=%d,Value of y=%d\n",x,y);
swap(x,y);
printf("\n After returning from swap function");
printf("\n Value of x=%d,value of y=%d\n",x,y);
}
void swap(int a,int b)
{
int temp;
printf("\n Inside the function \n");
printf("\n Value of a=%d,Value of b=%d before swaping\n",a,b);
temp=a;
a=b;
b=temp;
printf("\n Value of a=%d,Value of b=%d after swaping\n",a,b);
}
```
----
## 23. CALL BY REFERENCE
```C
#include<stdio.h>
void swap(int *,int *);
void main()
{
int x,y;
printf("\n Enter value for x:");
scanf("%d",&x);
printf("\n Enter value for y:");
scanf("%d",&y);
printf("\n Before calling swap functin\n");
printf("\n Value of x=%d,Value of y=%d\n",x,y);
swap(&x,&y);
printf("\n After returning from swap function");
printf("\n Value of x=%d,value of y=%d\n",x,y);
}
void swap(int *a,int *b)
{
int temp;
printf("\n Inside the function \n");
printf("\n Value of a=%d,Value of b=%d before swaping\n",*a,*b);
temp=*a;
*a=*b;
*b=temp;
printf("\n Value of a=%d,Value of b=%d after swaping\n",*a,*b);
}
```
----
## 24. EMPLOYEE DETAILS USING STRUCTURE
```C
#include<stdio.h>
#include<string.h>
struct employee
{
        int code;
        char name[20];
        char department[20];
        float salary;
};
void main()
{
        struct employee e;
        printf("enter employee code\n");
        scanf("%d",&e.code);
        printf("enter employee name\n");
        scanf("%s",&e.name);
        printf("enter employee department\n");
        scanf("%s",&e.department);
        printf("enter employee salary\n");
        scanf("%f",&e.salary);
        printf("information about employee is \n");
        printf("Employee code: %d \n",e.code);
        printf("Employee name: %s \n",e.name);
        printf("Employee department: %s \n",e.department);
        printf("Employee salary: %f \n",e.salary);
}
```
----
## 25. FRACTION PRODUCT USING STRUCTURE
```C
#include<stdio.h>
struct fraction
{
        int num;
        int den;
};
void main()
{
        int rnum,rden;
        struct fraction f1,f2;
        printf("enter numerator and denominator of first fraction\n");
        scanf("%d%d",&f1.num,&f1.den);
        printf("enter numerator and denominator of second fraction\n");
        scanf("%d%d",&f2.num,&f2.den);  
        rnum=f1.num*f2.num;
        rden=f1.den*f2.den;
        printf("\nproduct is : %d/%d\n",rnum,rden);
}
```
