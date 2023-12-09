/*(1) Write a program that reads the radius of a circle and 
calculates the area and circumference.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
 float radius  ;
 float y =3.14159 ;
 
 printf("Enter the radius of a circle = ");
 scanf("%f",&radius);
printf("circumference = %f\n",2*y*radius);
return 0 ;
}
/*****************************************************/
/*
(2) Write a C program to take a number and a character 
    from user if the number is even print the same 
    character, if the number is odd print the other case of 
    the character (a->A, B->b).
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
unsigned int capital_char = 0 ;
unsigned int small_char = 0  ;
//unsigned int sum = 0 ;
printf("Enter a char = ");
fflush(stdin);
scanf(" %c",&capital_char);
small_char = capital_char + 0x20 ;  
//small_char= capital_char + ('a'-'A');
//small_char= capital_char ^ 32 ;  // we found that small char have 1 on 32 bit such as a(0110 0001) and A(0100 0001) and so on 
printf("%c",small_char); 
return 0 ;
}

/********************************************************/

/*
(3) Write a program to reverse a number in decimal 
    representation (1205->5021).
*/
#include <stdio.h>
int main() {
int i;
int num ;
int rev_num ;
  scanf("%d",&num);
    for (i = 0; i=num; i++) {
    rev_num = num%10; 
    num=num/10  ;

  printf("%d",rev_num) ;
  }
  return 0;
}   

/**************************************************/
/*
(4) Write a program to count the number of 1’s in an 
    unsigned 32-bit integer.
*/
#include <stdio.h>
int main() {
int i;
int num , num_bin;
int count = 0 ;
scanf("%d",&num);
 for (i =0 ; i <=31; i++) {
    num_bin = ((num >> i) & 1) ;
    if(num_bin == 1)
    {
      count++ ;   // counter to count the numbers of ones in the number 
                  // after each iteration (if num_bin =1) will increase  
    }

   }
    printf("%d",count) ;
  return 0;
}
/********************************************************************************************/
/*(6) Write c code to reverse bits in an 8-bit number 
(149->10010101 return 169->10101001),
(5->00000101 return 160->10100000).*/
#include <stdio.h>
void  reverse_bits(int num)
{
  unsigned int i ;
  unsigned int num2=0 ;
  for (int i = 0 ; i < 8 ; i++)
{
  if((num>>i)&1)                             
  {
    num2 = num2 | (1<<(7-i));
  }
}
printf("%d",num2);
}
int main() {
unsigned int num1  ;
unsigned int num2=0  ;
//unsigned int sum = 0 ;
printf("Enter a number = \n");
scanf("%d",&num1);
reverse_bits(num1);
return 0 ;
}
/* 
//////////////////////Explain the code//////////////////// 
     num2 = 0000 0000 , num1 = 145 (1001 0101)    
     if read bit = 1
     1000 0000 (i<<7-0)
  | 
     0000 0000 (num2=0)
  =  1000 0000 (num2 new)
     if read bit(1) i =2
     1000 0000(num2)
     0010 0000(1<<5)
  =  1010 0000 (new num2)
 and so on to be 149 (1001 0101) --->169 (1010 1001)
*/
/********************************************************************************************/
/*
(7) Write c code to sum numbers from 1 to 100 (without loop).
*/

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    int n = 100;
    sum = (n + i) * (n - i + 1) / 2;
    printf("The sum of numbers from 1 to 100 is %d", sum);
    return 0;
}
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------
////////////////////////// another solution ///////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int sum = 0, first_number = 0, last_number = 0, no_of_numbers;

  while (1)
  {
    printf("no of numbers = ");
    scanf("%d", &no_of_numbers);
    printf("first number = ");
    scanf("%d", &first_number);
    printf("last number = ");
    scanf("%d", &last_number);

    sum = (first_number + last_number) * (no_of_numbers / 2);

    printf("sum of numbers From %d to %d = %d\n", first_number, last_number, sum);
  }
}
////////////////////////// another solution with loop ///////////////////

#include <stdio.h>
int sum(int n) {
    int sum = 0;
    int i = 0;
    while (i < 32) {
        if ((n >> i) & 1) {
            sum += (1 << i) * (n >> (i + 1)) + (n & ((1 << i) - 1)) + 1;
        }
        i++;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of numbers from 1 to %d: %d\n", n, sum(n));
    return 0;
}

/**********************************************************************************************/
/*
  (8) Write a full C program to take 4 choose from user:
      1-Set bit. 
      2-Clear bit 
      3-Toggle bit.
      4-Read bit.
    then take number, and bit number. 
    print the number after set, clear, or toggle if 1,2 or 3 is 
    selected. 
    print the bit value if 4 is selected.
*/

#include <stdio.h>
int main() {
int num , bit_num , operation;
int set_bit,clear_bit,toggle_bit,read_bit ;

printf("Enter a number = ") ;
scanf("%d",&num);
printf("Enter a bit number = ") ;
scanf("%d",&bit_num);
printf("Enter an operator (1,2,3,4) : ");
scanf("%d",&operation);
switch (operation)
{
    case 1:
      set_bit = (num | (1<<bit_num));
      printf("set_bit = %d",set_bit);
      break;
    case 2:
      clear_bit = (num & ~(1<<bit_num)) ;
      printf("clear_bit = %d",clear_bit);
      break;
    case 3:
      toggle_bit= (num ^ (1<<bit_num));
      printf("toggle_bit = %d",toggle_bit);
      break;
    case 4: 
      read_bit = (num << bit_num) & 1 ;
      printf("read_bit = %d",read_bit);   
      break; 
      default :
      printf("VALID") ;
}

  return 0;
}
//////****** with function ****************/////
#include<stdio.h>
// Setbit function (set bit = 1)
int set_Bit(int num , int bit_num )
{
  
  return ( (1<<bit_num) | num )  ;
}
//clear_bit function  (make bit = 0 )
int clear_Bit(int num , int bit_num )
{
  return ( ~(1<<bit_num) & num )  ;
}
//toggle_bit function  (if 1 make 0 or reverse )
 int toggle_Bit(int num , int bit_num )
{
  return ( (1<<bit_num) ^ num )  ;
}
// read bit (get bit i need )
int set_Bit(int num , int bit_num )
{ 
 return ( (num<<bit_num) & 1 )  ;
}


/***main finction***/

 int main()
{
int num , bit_num , operation;
printf("Enter a number = ") ;
scanf("%d",&num);
printf("Enter a bit number = ") ;
scanf("%d",&bit_num);
printf("Enter an operator (1,2,3,4) : ");
scanf("%d",&operation);
switch (operation)
{
    case 1://case1 for setBit
      printf("set_bit = %d",set_Bit(num,bit_num));
      break;
    case 2://case2 for clearBit
      //clear_bit = (num & ~(1<<bit_num)) ;
      printf("clear_bit = %d",clear_bit(num,bit_num));
      break;
    case 3://case3 for toggleBit
     // toggle_bit= (num ^ (1<<bit_num));
      printf("toggle_bit = %d",toggle_bit(num,bit_num));
      break;
    case 4: //case4 for readBit
     // read_bit = (num << bit_num) & 1 ;
      printf("read_bit = %d",read_bit(num,bit_num));   
      break; 
      default :
      printf("VALID") ;
} 
return 0;
}
/********************Q8********************************************************************/
/*draw_reverse_triangle*/
#include <stdio.h>
void draw_reverse_triangle(int num_lines);
int main()
{
  int num ;
  printf("Enter a number = ");
  scanf("%d",&num);
  draw_reverse_triangle(num);
  return 0;
}
void draw_reverse_triangle(int num_lines){
   int i;
   int j;
  for (i = num_lines; i >= 0; i--)
  {
    for ( j =1; j <=i; j++)
    {
     printf("*");
    }
     printf("\n");
  }
}


/************Draw triangle********************/
#include <stdio.h>
void draw_triangle(int num_lines);
int main()
{
  int num ;
  printf("Enter a number = ");
  scanf("%d",&num);
  draw_triangle(num);
  return 0;
}
void draw_triangle(int num_lines){
   int i;
   int j;
  for (i = 1; i <=num_lines; i++)
  {
    for ( j =i; j >=1; j--)
    {
     printf("*");
    }
     printf("\n");
  }
} /* X shape */
#include <stdio.h>

int main() {
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j || j == 4 - i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
/*******full pyramid******/
#include<stdio.h>
int main() {
    int n =0, i , j , k ;
    printf("Enter a number : %d" ,n);
    scanf("%d",&n);
    for ( i = 1; i <= n ; ++i)
    {
        for(j=1 ; j<=n-i ;++j)
        {
            printf(" "); //space

        }
        for (k = 1 ; k <= 2*i-1 ; k++)
        {
            printf("*"); // star
            
        }
        printf("\n"); // new line
    }
    
    return 0;
}

/*********************************************************************/
/*
(10) Write c function to count the max number of zeros 
between two ones in the binary representation of a 
number (296384-> {1001000010111000000} return 4).
*/

#include <stdio.h>
void countZeros();

int main()
{
  unsigned int n;
  printf("Enter a number = ");
  scanf("%d", &n);
 countZeros(n);

  return 0;
}


void countZeros(unsigned int num)
{
  int i, count = 0, maxCount = 0;
  unsigned int flag = 0;
  for (i = 0; i <= 31; i++)
  {
    /*  Check bit  */
    int num_bin = ((num >> i) & 1);
    /* if numbin == 1 set flag = 1 */
    if (num_bin == 1)
    {
      flag = 1; // go to else
      /* check if maxcount < counter ,store value of counter in maxcount */
      if (maxCount <count)
      {
        maxCount = count ;
      }
      /* reset conter */
      count = 0;
    }
    else{
      if (flag == 1)
      {
        count = count+1;
      }  
  }
}
 printf("number of zeroes betwean two ones is = %d\n",maxCount) ;
}
/*************************************************/
/*
  11) Given two integers: L and R, Find the maximal value of A 
xor B where A and B satisfy the condition L =< A <= B <= 
R Constrains: 1 <= L <= R <= 1000 Input format: the 
input contains two lines first line contains L and next 
line contains R. Output format: The maximum value of 
Axor B.
 */
#include <stdio.h>
 
int findMaxXor();
 int main() {
    int L, R;
    scanf("%d", &L);
    scanf("%d", &R);
     int max_xor = findMaxXor(L, R);
    printf("%d\n", max_xor);
     return 0;
}
int findMaxXor(int L, int R) {
    int max_xor = 0;
     for (int A = L; A <= R; A++) {
        for (int B = A; B <= R; B++) {
            int xor_value = A ^ B;
            if (xor_value > max_xor) {
                max_xor = xor_value;
            }
        }
    }
     return max_xor;
}


/***************************************************************************************/