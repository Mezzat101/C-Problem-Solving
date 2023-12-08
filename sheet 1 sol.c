/*
(1) Write a program to take 2 numbers from user and 
    calculate sum of all numbers between them.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum =0 ;
    int num1 , num2 ;
    int max , n ,min;
    printf("Enter num1 and num2 =  ");
    scanf("%d %d",&num1,&num2);
if(num2 > num1)
{
    max=num2;
    min=num1 ;
}
else{
    max=num1;
    min=num2;
}
 for(n=min+1  ; n<max ; n++)
 {
      sum=sum+n ;
 }
 printf("number is =%d \n",sum);
    return 0;
}
/**************************************************/
/*
(2) Write a program to take numbers from user and find the 
    max and min from them (let users choose the No of numbers).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int number_of_numbers;
int num , n;
int maxNumber ;
int minNumber;
printf("Enter no of numbers =  ");
scanf("%d ",&number_of_numbers);
for( n=0;n<number_of_numbers;n=n+1)
{
    scanf("%d",&num);
    if (num < minNumber) {
      minNumber = num;
} else if (num > maxNumber) {
      maxNumber = num;
    }

}
 printf("maxNumber=%d \nminNumber=%d",maxNumber,minNumber);
    return 0;
}

/**************************************************/
/*
(3) Write a program to take numbers from user and 
    calculate the sum of them (let users choose the No of numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
int number_of_numbers=0;
int num=0;
int n ;
int totalnumbers =0;// intialize by 0
printf("Enter no of numbers =  ");
scanf("%d ",&number_of_numbers);
for( n=0;n<number_of_numbers;n=n+1)
{
    scanf("%d",&num);
    totalnumbers = totalnumbers+num;

}
 printf("totalnumbers is=%d",totalnumbers);
    return 0;
}

/***************************************************************************/

/*
(4) Write a program that take two numbers and multiply 
    them without using * operation.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1 , num2 , mult = 0;
int n ;
printf("Enter two numbers =  ");
scanf("%d%d",&num1,&num2);

for( n=0; n<num1 ; n=n+1)
{

    mult = mult+num2;

}
 printf("multiplie of two numbers =%d",mult);

    return 0;
}
 /********************************************************************************/
/*
(5) Write a program that take two numbers and calculate 
    the reminder without using % operation.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1 , num2 , reminder = 0;
int max= 0;
int min=0;
printf("Enter two numbers =  ");
scanf("%d%d",&num1,&num2);
/*
if(num1>num2){
    max =num1 ;
    min =num2;
}
else if(num2>num1)
{
    max = num2;
    min = num1;
}
else{
    num1=num2;
    max=min;
}

reminder = max - ((max/min)*min);
*/
reminder = num1 - ((num1/num2)*num2);
printf("reminder =%d",reminder);

    return 0;
}
/***********************************************************************/
/*
(6) Write a program to calculate the power of a number. 
    The number and its power are input from user.
*/
#include <stdio.h>

int main() {
  int base, exp, result = 1;
  int i;
  printf("Enter the base and exponent : ");
  scanf("%d%d", &base,&exp);

  for ( i = 0; i < exp; i++) {
    result *= base;
  }

  printf("The power of %d raised to %d is %d\n", base, exp, result);

  return 0;
}

/*********************************************************************/
/*
(7) Write a program that reads a positive integer and 
    computes the factorial.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,factorial=1;
unsigned int n;
printf("Enter number to get factorial =  ");
scanf("%d",&n);
for(i=1 ; i<=n ; i=i+1)
{
 factorial = factorial*i;
}

printf("factorial =%d",factorial);

    return 0;
}


/***********************************************************************************/
/*
(8) Write a program that reads a positive integer and 
    checks if it is a prime.
*/
#include <stdio.h>

int main()
{
  unsigned int num;
  unsigned int i;
  unsigned char flag = 0;

  while (1)
  {
    flag = 0;
    scanf("%d", &num);
    //already 1 and 0 are not prime
    if (num < 2)
    {
      flag = 1;
    }

    for (i = 2; (i <= num / 2) && (flag == 0); i = i + 1)
    {
      printf("%d   ", i);
      if (num % i == 0)
      {
        flag = 1;
        //  break;
      }
    }
    if (flag == 0)
    {
      printf("PRIME\n");
    }
    else
    {
      printf("not prime\n");
    }
  }
  return 0;
}


/**********************************************************************************/
/*
(9) Write a program that reads a positive integer and 
    checks if it is a perfect square.
*/

#include <stdio.h>
int main()
{
  unsigned int num;
  unsigned int i;
  unsigned char flag = 0;

  while (1)
  {
    flag = 0;
    scanf("%d", &num);
    // printf("%d\n",num);
    for (i = 1; (i * i <= num) && ((flag == 0)); i = i + 1)
    {

      if (i * i == num)
      {
        flag = 1;
      }
    }
    if (flag == 0)
    {
      printf("not sqr  %d\n", i);
    }
    else
    {
      printf("sqr  %d\n", i - 1);
    }
  }
  return 0;
}


/************************************************************************************/

/*
(10) Write a program that reads a positive integer and check 
     if this number is a base of 2 like 1,2,4,8,16,32, 64...
*/
#include <stdio.h>
int main() {
unsigned int num ;
unsigned int i ;
unsigned char flag = 0 ;

  while(1)
 {
    flag=0;
    scanf("%d",&num);
   /* if(num<2)
    {
        flag=1;
    }*/
    for(i=1;i<=num;i=i*2)
    {
        
          printf("%d   ",i);
        if(num==i)
        {
            flag=1;
         //  break;
        }
    }
    if(flag==0)
    {
       printf("not base of 2 \n");
    }
    else
    {
        printf("Base of 2 \n",i);
    }
 }
  return 0;
}

/***************************************************************************************/
/*
(11) Write a program to sum the digits in a decimal number 
     145 -> 1+4+5=10.
*/
#include <stdio.h>
int main() {
unsigned int num ;
unsigned int i , result = 0;
unsigned int x = 0 ;
while(1)
{
printf("Enter a number \n");
scanf("%d",&num);

while(num>0)
{
    x=num%10;
    result = result + x ;
    num=num/10;

}
printf("result is %d ",result);

}
return 0 ;
}

/*******************************************************************/
/*
(12) write a program to take even numbers from user and 
     print the sum of them after each entry if the user enters
     2 odd number the program print "bye" and stopped.
*/
#include <stdio.h>

int main()
{

  unsigned int num;
  unsigned int i, result = 0;
  unsigned int flag = 0;
  unsigned int counter = 0;

  while (1)
  {
    flag = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
      flag = 1;
    }

    if (flag == 1)
    {
      result = result + num;
      printf("result = %d\n", result);
    }
    else
    {
      counter = counter + 1;
      if (counter == 2)
      {
        printf("you entered two number is odd <<<Bye>>> \n");
        break;
      }
    }
  }
  return 0;
}

/***********************************************************************/

/*
(13) You are designing a poster which prints out numbers 
with a unique style applied to each of them. The styling 
is based on the number of closed paths or holes present 
in a giver number. The number of holes that each of the 
digits from 0 to 9 have are equal to the number of 
closed paths in the digit. Their values are: 
1, 2, 3, 5 and 7 = 0 holes. 
 0, 4, 6, and 9 = 1 hole. 
8 = 2 holes. 
Example if number 3824->3 has 0 holes,8 has 2 
holes,4 has 1hole sum=0+2+1=3.
*/

#include <stdio.h>
int main() {
unsigned int num ;
unsigned int x , holes = 0;
unsigned int sum = 0 ;

printf("Enter a number = ");
scanf("%d",&num);

while(num>0)
{
    x=num%10;
    if( (x==1) || (x==2) || (x==3) || (x==5) || (x==7))   // using ==
    {
        holes = 0 ;
    }
    else if ( (x==4) || (x==6) || (x==0) || (x==9))
    {
        holes = 1 ;
    }
    else if (x==8)
    {
        holes = 2 ;
    }
    sum = sum + holes ;
   // printf("holes = %d\n",holes);
    num=num/10;

}
printf("sum of holes = %d",sum);
return 0 ;
}