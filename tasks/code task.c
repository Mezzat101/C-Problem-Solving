
/*
  user Enter a capital char and code turn on it to small char
  user enter E --- e ,, A --- a 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
unsigned int capital_char = 0 ;
unsigned int small_char = 0  ;
//unsigned int sum = 0 ;
printf("Enter a char = \n");
fflush(stdin);
scanf(" %c",&capital_char);
small_char = capital_char + 0x20 ;
printf("%c",small_char); 
return 0 ;
}

/**********************************************************/
/*  substracte two numbers without (-) */

#include <stdio.h>
#include <stdlib.h>

int main() {
 int x ;
 int y ;
 int sub ;
 printf("Enter two numbers = ");
 scanf("%d%d",&x,&y);
 y=~y;                  //complement(~) turns on the number in decimal to  { -(number+1) }    
 y=y+1;
 sub=x+y;
//sub = x +(~(y-1)) ;  // i can use this but there is substraction
printf("sub = %d\n",sub);
return 0 ;
}
/*********************************************************************/
/*5 method to find if number is base of 2 or not*/

/* 1- Using the log2() function: The log2() function returns the logarithm of a number to the base 2.
   If the result is an integer, then the number is a power of 2*/
#include <stdio.h>
#include <math.h>

int main() {
  int number =0 ;
  while(1)
  {
  printf("Enter a number = ");
 scanf("%d",&number);

 // Check if the number is a power of 2 
  if (log2(number)==(int)log2(number)) {
    printf("The number is a power of 2\n");
  } else {
    printf("The number is not a power of 2\n");
  }
}
  return 0;
}

/*****************************************************/

/******************task1 lec12 *********************/
// 1- find two max for array elements

/* this code run succesfully
Corner case to test for max code 
1-all array negative number
2-max come before second max 
3-second max come before max 
4-max repeated 2 times in array */ 
#include <stdio.h>
 

 void findMaxElements(); 
 
 int main() {
    int arr[] = {-5, -10, -3, -8, -15, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
     findMaxElements(arr, size);
     return 0;
} 

void findMaxElements(int *arr, int size) {
    /*Initially,  max1  and  max2  are both set to the first element of the array ( arr[0] ). */
    int max1 = arr[0]; 
    int max2 = arr[0]; 
   // printf("f max1 = %d\nmax2 = %d\n",max1,max2);
   /* starting from the second element ( arr[1] ) to the last element.  */
     for (int i = 1; i < size; i++) {
     /* In each iteration, it checks if the current element ( arr[i] )
     is greater than the current maximum ( max1 ).
     If it is, it means we have found a new maximum*/
        if (arr[i] > max1) {
            max2 = max1; // Store previous maximum as second maximum
            max1 = arr[i]; // Update first maximum
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i]; // Update second maximum
        }
    }
    printf("First Maximum: %d\n", max1);
    printf("Second Maximum: %d\n", max2);
}
/***********************task2 lec12*********************************/

// swap first element of array 1 with last element of array2 and so on

#include <stdio.h>
 
 void arrayZigzag(); 
 
 int main() {
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {10,20,30,40,50,60};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    arrayZigzag( arr1, arr2 ,  size1 ,  size2);
    /* the content of array1 after swapping */
    for(int i =0 ; i< size1 ; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    /* the content of array1 after swapping */
    for(int j =0 ; j< size2 ; j++)
    {
        printf("%d ",arr2[j]);
    }
    return 0;
} 

void arrayZigzag(int *arr1,int *arr2 , int size1 , int size2) {
   
    int temp;
     for (int i = 0; i < size1; i++) {
     
       temp= arr1[i];
       arr1[i] = arr2[size1-1-i];
       arr2[size1 -1 -i] = temp ;
    }
    
}
/***********************************lec12****************************************/
#include<stdio.h>
int prime(int num)
{
  int i ;
     if(num<2)             //for 0 ,1 not prime so we should write this
         {
           return 0;      //not prime
         }
  for( i=2 ; i<num ; i=i+1 )  // i not equal num 
  {                                                
    if(num%i==0)
        {
           return 0;      //not prime
        }                  
  }
    return 1;            // prime
}
/****************Array_print_prime**********************/
void Array_print_prime(int *arr , int size)
{     
  int i ,count=0 ;
  
    for(i=0 ; i<size ; i++)
    {
      if(prime(arr[i]))
      {
        printf("%d\n",arr[i]);
        count++;
      }
    }
    printf("count=%d",count) ;
 }
/***************Main function******************/
int main()
{
   int size ;
   int arr[20]={1,2,3,4,5,6,7,8,9,10,13,25,98,63,14,563,12,36,5,3};
   size = sizeof(arr)/sizeof(arr[0]);
   // printf("Enter a number = ");
   // scanf("%d",&num);
   // printf(
  Array_print_prime(arr , size);
  return 0;
} 

/******************task lec12 *********************/
// 1- find two max for array elements

/* this code run succesfully
Corner case to test for max code 
1-all array negative number
2-max come before second max 
3-second max come before max 
4-max repeated 2 times in array */ 
#include <stdio.h>
 

 void findMaxElements(); 
 
 int main() {
    int arr[] = {-5, -10, -3, -8, -15, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
     findMaxElements(arr, size);
     return 0;
} 

void findMaxElements(int *arr, int size) {
    /*Initially,  max1  and  max2  are both set to the first element of the array ( arr[0] ). */
    int max1 = arr[0]; 
    int max2 = arr[0]; 
   // printf("f max1 = %d\nmax2 = %d\n",max1,max2);
   /* starting from the second element ( arr[1] ) to the last element.  */
     for (int i = 1; i < size; i++) {
     /* In each iteration, it checks if the current element ( arr[i] )
     is greater than the current maximum ( max1 ).
     If it is, it means we have found a new maximum*/
        if (arr[i] > max1) {
            max2 = max1; // Store previous maximum as second maximum
            max1 = arr[i]; // Update first maximum
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i]; // Update second maximum
        }
    }
    printf("First Maximum: %d\n", max1);
    printf("Second Maximum: %d\n", max2);
}
 ----------------------------------------------------------------

/* my code and dont run */
#include <stdio.h>
void findMaxElements();
int main()
{

    int array[] = {10, 9, 2, 3, 1, 8, 9, 7, 6};
    int size = sizeof(array) / sizeof(array[0]);

    findMaxElements(array, size);
    /* print array after sorting*/
   /** for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }*/
    // printf(" first maximum value=%d",max-1);

    return 0;
}
void findMaxElements(int *arr, int size)
{
    int i;
    int first_max   = arr[0];
    int secound_max = arr[0];
    for (i = 1; i < size; i++)
    {
        /*if the first element bigger than firstMax doing swap and save it in firstMax elseif scondMax*/
        if (arr[i] > first_max)
        {
            secound_max = first_max;
            first_max = arr[i];
        }
        else if ((arr[i] > secound_max) && (arr[i] < first_max))
        {
            secound_max = arr[i];
        }
    }
    printf("First max element =%d\nsecound max element = %d\n", first_max, secound_max);
}
/***********lec13************/
#include <stdio.h>
void array_print();
int *scanArray(void);
int findPrimeArray(int *arr, int size, int *primeArray);
int prime(int num);
int array_merge(int *arr1, int size1, int *arr2, int size2, int *newArray);

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {11, 22, 33, 44, 55};
    int arr3[100] = {0};
    int S3 = array_merge(arr1, 5, arr2, 5, arr3);
    printf("number of array merge = %d \n", S3);
    array_print(arr3, S3);
    return 0;
}
/* first idea for merge array*/
int array_merge(int *arr1, int size1, int *arr2, int size2, int *newArray)
{
    int i, j = 0;
    int newsize = size2 * 2; // if two array same size
    for (i = 0; i < newsize; i++)
    {   
        if (i % 2 == 0) // i is index even or odd
        {
            newArray[i] = arr1[j];
        /*  If the index  i  is even, we update the content of  newArray[i]  with the value from  arr1[j] .
            This means that every alternate element of  newArray  will be filled with values from  arr1 .  */
        }
        else
        {
            newArray[i] = arr2[j];
            j++;
        }
    }
    return i;
}
  /* scound idea for merge array */
int array_merge2(int *ar1,int s1,int *ar2,int s2,int *arrnew)
{
    int i,j=0;
    int newsize=s2*2;
    for(i=0; i<newsize; i++)
    {
        arrnew[i]=ar1[j];
        i++;
        arrnew[i]=ar2[j];
        j++;
    }

    return i;
}

int findPrimeArray(int *arr, int size, int *primeArray)
{
    int i, j = 0;
    for (i = 0; i < size; i++)
    {
        if (prime(arr[i]) == 1) // calling prime function
        {
            primeArray[j] = arr[i]; // update content of primeArray
            j++;
        }
    }
    return j; // return size of primeArray
}


void array_print(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int prime(int num)
{
    int i;
    if (num < 2) // for 0 ,1 not prime so we should write this
    {
        return 0; // not prime
    }
    for (i = 2; i < num; i = i + 1) // i not equal num
    {
        if (num % i == 0)
        {
            return 0; // not prime
        }
    }
    return 1; // prime
}

/***********lec14*******************/




#include <stdio.h>

int countMaxRepeatedNum2();
void revesString();
int stringLength();
void string_print();
void upperToLowerString();
int compareString();
void LongestWordStirng();

int main()
{
    int value = 0;
    char str1[] = {"Mohamed"};
    char str2[] = {"I am an embedded softwre Engineer for 6 years"};
    char word[100] = {0};
    // int size = sizeof(srr) / sizeof(str[0]);
    // revesString(str);
    // upperToLowerString(str);
    LongestWordStirng(str2, word);
    // value = compareString(str1, str2);
    /*if (value == 1)
    {
        printf(" two string Equal ");
    }
    else
    {
        printf(" two string NOT Equal ");
    }
*/

    return 0;
}
void LongestWordStirng(char *str, char *word)
{
    int j, c = 0, max = 0, index = 0;
    int i;
    for (i; str[i] != 0; i++)
    {
        if (str[i] == ' ')
        {
            c = 0;
        }
        else
        { 
            c++;
            if (c > max)
            {
                max = c;
                index = i;
            }
        }
    }
    j = 0;
    i = index - max;
    // printf("%d    %d    %c",max,index,str[i]);
    while (j < max)
    {
        word[j] = str[i];
        i++, j++;
    }
}

int compareString(char *str1, char *str2)
{
    for (int i = 0; str1[i] || str2[i]; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}

void upperToLowerString(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

void revesString(char *str)
{
    int temp;
    int length = stringLength(str);
    int j = length - 1;
    for (int i = 0; i <= j; i++)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}

int stringLength(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

void string_print(char arr[])
{
    int i;
    for (i = 0; arr[i] != 0; i++)
    {
        printf("%c", arr[i]);
    }
    //  printf("\n");
    // printf("f: len=%d\n",string_len(arr));
    // printf("f: size=%d\n",sizeof(arr));
}

/////////////////////////////////////////////////////////////////////
/************SESSION 17 ********************************/
#include <stdi.ho>
#include <stdlib.h>

int max ;
int min ;

void takeNum(int num)
{
    static char flag = 0 ;
    //I start max and min with n number
    if(flag == 0)
    {
        max=num;
        min=num;
        flag = 1;
    }
    if(num > max)
    {
        max = num ;
    }
    if(num<min)
    {
        min = num ;
    }
}
 int getMax(void)
 {
    return max ;
 }
int getMin(void)
 {
    return min ;
 }


int main ()
{
    int x ;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            printf("max=%d\n",getMax());
        }else if(x==1)
        {
            printf("min=%d\n",getMin());
        }else
        {
            takeNum(x);
        }
    }

}

-------------------------------------------------------------------------
/**** session 19 ******/
int mostRepeatedNumArray(int *arr, int size, int *pnum)
{
    int i,j,count =0,max = 0,c ;
    for(i=0; i<size ; i++)
    {
        count = 0;
        for(j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count > max)
        {
            max = count ;
            *pnum = arr[i];
        }
    }

    return max ;
}
int mostRepeatedNumArray_mono(int *arr, int size ,int*pnum)
{
    int i,j,count[10] ={0},max = 0,c ;
    for(i=0; i<size ; i++)
    {   //each iterate will increase counter on each number  
       count[arr[i]]++;
    }
    for ( i = 0; i < 10; i++)
    {
     printf("%d    %d\n",i,count[i]);
    }
    for ( i = 0; i < 10; i++)
    {  
        if(count[i]>max)
        {
            max = count[i];
            *pnum=i;
        }
    }
    

    return max ;
}
//this function for any array entered
int mostRepeatedNumArray_generic (int *arr, int size ,int*pnum)
{
   int i,max_num=0,count_size,negative_count = 0,min_num=0,max=0;;
    min_num=arr[0];
    max_num=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>max_num)
        {
            max_num=arr[i];
        }
        if(arr[i]<min_num)
        {
            min_num=arr[i];
        }
    }
    count_size=max_num-min_num+1;
    int*count=calloc(count_size,sizeof(int));
    for(i=0; i<size; i++)
    {
        int index = arr[i] - min_num; // To handle negative numbers
        count[index]++;
    }
   /*for (i = min_num; i <= 0; i++) // Loop through negative numbers
    {
        negative_count += count[i];
    }*/
    for(i=min_num; i<count_size; i++)
    {
        printf("%d  %d\n", i + min_num, count[i]);
    }
    for(i=0; i<count_size; i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            *pnum=i+min_num;
        }
    }
    free(count);
    return max;
    //return negative_count;
}
