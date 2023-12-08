/*
(1) Write a C function to return the index of LAST occurrence of a number in a 
given array. Array index start from 0. If the item is not in the list return -1
*/
#include <stdio.h>

int findIndexArray(int *arr , int size , int number );

int main()
{
    int number , check ;
    while (1)
    {
    printf("Enter a number = ");
    scanf("%d",&number);
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    check = findIndexArray( arr , size ,number);
    printf("check = %d ",check);
    }
    
    
    return 0;
}

int findIndexArray(int *arr , int size , int number )
{
    /* create flag called index and intialize it with -1*/
    char index = -1 ;
    /*starting from 0 to size-1 and check if number or not (index == i) */    
    for (int i = 0; i < size; i++)
    {
        
        if(arr[i] == number)
        {
            index = i ;
            /* no proplem if i put return here */
            //return index ; 
        }
    }
    return index ;
}
/***************************************************************************************************/

/*
(2) Write a C function to return the maximum and minimum number in an 
    array and their indexes.
*/
#include <stdio.h>

int findIndexMaxMinArray();

int main()
{
    int arr[] = {10, 25, 5, 100, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    findIndexMaxMinArray(arr, size);
    return 0;
}

 void findIndexMaxMinArray(int *arr, int size)
{
    char indexMax, indexMin;
    /* max , min will point to first element in array */
    int max = arr[0];
    int min = arr[0];
    /*starting from secound element to size  */
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indexMax = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            indexMin = i;
        }
    }
    printf("max = %d\nmin = %d\nindexMax= %d\nindexMin = %d\n", max, min, indexMax, indexMin);
    // return max;
}
/***************************************************************************************************/
/*
(3) Write a C function that return 0 if a given number is a power of 3, 
otherwise return 1.
*/

#include <stdio.h>

int powerOfthree();

int main()
{
    int number;
    printf("Enter a number = ");
    scanf("%d", &number);
    printf("%d", powerOfthree(number));
    return 0;
}

int powerOfthree(int number)
{
    char flag = 1;
    if (number % 3 == 0)
    {
        flag = 0;
        return flag;
    }
    return flag;
}
/****************************************************************************/
/*
(4) Write a C function that take two numbers and return array contain all 
    numbers between the two given numbers. (numbers 2,6->return array 
    contain [3,4,5]).
*/
#include <stdio.h>

void getArray();

int main()
{
    int num1, num2;
    while (1)
    {
        printf("Enter a num1 , num2 = ");
        scanf("%d%d", &num1, &num2);
        getArray(num1, num2);
    }
    return 0;
}

void getArray(int num1, int num2)
{
    /* cornre case if num1 greater than num2 so creat swapping */
    int temp = 0;
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int size = num2 - num1;
    int arr[size];   // if i need creat an array whithout elements
    int *ptr = NULL; // null pointer 
    ptr = &arr[0];   // pointer point to adderss of array
    int index = 0;   // ceate index to know lacation the element in array
    for (int i = num1 + 1; i < num2; i++)
    {
        ptr = &i;                               // you should assign the address of  i  to  ptr
        printf("array[%d] =%d\n", index, *ptr); /* printf("array =%d\n",arr);  attempts to print the array  arr ,
                                                   but it should actually print the value pointed to by  ptr .
                                                   So it should be  printf("array = %d\n", *ptr);`*/

        *(ptr)++; // increment the pointer to point next location
        index++;  // increment index
    }
}

/***********************************************************************************************/
/*
(5) Write c function to find the most repeated number in an array of integers.
*/

#include <stdio.h>

int mostRpeatedNumArray();

int main()
{
    int array[] = {1, 5, 2, 9, 8, 9, 9, 10, 5, 12, 8};
    int size  = 10;
    printf("the most rpeated number is = %d\n", mostRpeatedNumArray(array, size));
    return 0;
}
int mostRpeatedNumArray(int *arr, int size)
{
    int count = 0, maxCount = 0;
    int MRnum = 0;
    for (int i = 0; i < size - 1; i++)
    {
        count = 1; // Initialize count for each element
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                // Increment count for each repeated number
                count = count + 1;
            }
            if (count > maxCount)
            {
                maxCount = count; // Update maximum count
                MRnum = arr[i];   // Update most repeated number
            }
        }
    }
    return MRnum;
}

/**********************************************************************/
/*
   (6) Write a C function to take an array and reverse its elements.
*/

#include <stdio.h>

void reverseArray();

int main()
{
    int array[] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    reverseArray(array, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}
void reverseArray(int *arr, int size)
{
    int start = 0;
    int end   = size - 1;
    while (start < end)
    {
        /* swapping elements */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; // increment starting point
        end--;   // decrement ending point
    }
}


/*******************************************************************************************/
/*
(7) Write a C function to take 2 arrays and swap them (try with 2 different 
sizes).
*/

#include <stdio.h>
 
void swapArray();
 
 int main() {
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {10,20,30,40,50,60};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Before swapping\n");
    
    for(int i =0 ; i< size1 ; i++)   
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    
    for(int j =0 ; j< size2 ; j++)
    {
        printf("%d ",arr2[j]);
    }

   swapArray( arr1, arr2 ,  size1 ,  size2);

   printf("\nAfter swapping\n");
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
void swapArray(int *arr1,int *arr2 , int size1 , int size2) {
    
    int temp;
     for (int i = 0; i < size1 && i < size2; i++) 
    {
       temp= arr1[i];
       arr1[i] =arr2[i] ;
       arr2[i] = temp ;
    }
    // two diffrent size 
    if(size1!=size2)
    {
         if (size1 > size2) {
        for (int i = size2; i < size1; i++) {
            arr2[i] = arr1[i];
        }
    } else if (size1 < size2) {
        for (int i = size1; i < size2; i++) {
            arr1[i] = arr2[i];
        }

    }
}
}
/*****************************************************************/

/*
(8) Write a C function that return the count of the longest consecutive 
occurrence of a given number in an array. 
Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4.
*/

#include <stdio.h>
 
int countMaxRepeatedNum(int *arr,int size,int num) ;
 
 int main() {
    int arr[] = {1,2,3,4,5,5,5,5,5,6,7,8,9,10,10,10,10};
    int num  ;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter a number = ");
    scanf("%d",&num);
    printf("result = %d",countMaxRepeatedNum(arr,size,num));
    return 0;

} 
int countMaxRepeatedNum(int *arr,int size,int num) 
{
    int count=0 ; 
     for (int i = 0; i < size; i++) 
    {
       if(num == arr[i])
       {
        count++;
       }
    }
  return count ;
}

/**************************************************************/
/*
(9) Write a C function that return the count of the longest consecutive 
occurrence of any number ,and return the number
Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4.
*/
#include <stdio.h>
int countMaxRepeatedNum2();
int main()
{
    int arr[] = {1, 2, 3, 4, 4,4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10};
    int num;
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = countMaxRepeatedNum2(arr, size, &num);
    printf("Count: %d\n", count);
    printf("Number: %d\n", num);
    return 0;
}
int countMaxRepeatedNum2(int *arr, int size, int *Number)
{
    int count = 0, maxCount = 0;
    int maxNumber = arr[0]; // intialize with first Number with longest consecutive occurrence
    // Traverse the array starting from the second element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++; // Increment the count of consecutive occurrence
        }
        else
        {
            if (maxCount < count)
            {
                maxCount = count;       // Update the max count
                maxNumber = arr[i - 1]; // Update the number with max count
            }
            count = 0; // reset conter
        }
    }
    // Check if the count of consecutive occurrence for the last element is greater than the max count
    if (maxCount < count)
    {
        maxCount = count;       // Update the max count
        maxNumber = arr[size - 1]; // Update the number with max count
    }
    *Number = maxNumber; // Assign the number with max count to the pointer
    return maxCount;     // Return the max count of consecutive occurrence
}
/********************************************************************/
/*10-Write c function to take 2 arrays and return an array by merging 
them like this ( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return 
arr3={1,11,2,12,3,13,4,14,5,15} ).*/

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
/************************************************************************/
/*
(11) Write a c function that removes the repeated number of an input 
sorted array and return a new array without the repeated numbers.
*/
#include <stdio.h>

int removeRepeatedNumArray();
void array_print();
void sortArray();

int main()
{

  int array[] = {10, 5, 5, 6, 5, 2, 10, 1};
  int size = sizeof(array) / sizeof(int);
  int size2;
  int Newarr[100] = {0};
  sortArray(array, size);
  array_print(array, size);
  size2 = removeRepeatedNumArray(array, size, Newarr);
  array_print(Newarr, size2);
  return 0;
}
int removeRepeatedNumArray(int *arr, int size, int *NewArr)
{
  int i, j, k;
  int count = 0;
  arr[j] = arr[i + 1];
  for (i = 0, j = 0; i < size; i++, j++)
  {

    if (arr[i] == arr[i + 1])
    {
      j--;
    }
    else
    {
      NewArr[j] = arr[i];
      count++;
    }

    //  printf("f: count = %d",count);
  }

  return count;
}

void sortArray(int *arr, int size)
{
  int i = 0, temp;
  for (i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void array_print(int arr[], int size)
{
  int i;

  for (i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

/******************************************************************************/
  /*
    (13) Write c function to take an array and return the biggest difference 
between 2 numbers in the array (the smaller number must come first in the 
array) {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.
  */
  int array_biggestdiff(int *arr, int size)
{
  int maxdiff = 0;
  if (size < 2)
  {
    printf("Error in size\n");
    return 0;
  }
  
  for (int i = size - 1; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[i] - arr[j] > maxdiff)
      {
        maxdiff = arr[i] - arr[j];
      }
    }
  }
  return maxdiff;
}

/****************************************************************/
/*(14) Write c function to find the most repeated number in an array of 
char (size of the array is very large) try to optimize your code.*/

char mostRepeatedNum(char *arr, int size)
{
  int maxRepNum, count = 0, maxCount = 0, i, j;
  for (i = 0; i < size; i++)
  {
    count = 0;
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        maxRepNum = arr[i];
        count++;
      }
    }
    if (count > maxCount)
    {
      maxCount = count;
      maxRepNum = arr[i];
    }
  }
  return maxRepNum;
}

/*********************************************************************************
/*
15-Write a C Function that swaps two pointers
*/

#include <stdio.h>
#include <stdlib.h>
int findMaxDifference(int *arr, int size);
void swap3numAfterZeros(int *arr, int size);
int array_biggestdiff(int *arr, int size);
void array_print(int arr[], int size);
char mostRepeatedNum(char *arr, int size);
void SwapTwoPointers(int **ptr1 , int **ptr2);
int main()
{
  char array[] = {10, 1, 5, 3,8,9,9,5, 10, 6,5, 8, 7, 2};
  int size = sizeof(array) / sizeof(array[0]);
  int x=10 ,y = 5; 
  int *ptr1 = &x ;
  int *ptr2 = &y ;
  printf("Before swapping x=%d     y=%d   ,,  ptr1 =%d    ptr2=%d\n",x,y,*ptr1,*ptr2);
  SwapTwoPointers( &ptr1,&ptr2 );  //pass the address of two pointers
  printf("After swapping x=%d     y=%d   ,,  ptr1 =%d    ptr2=%d\n",x,y,*ptr1,*ptr2);



  //printf("max rep num is = %d", mostRepeatedNum(array, size));
  // array_print(array, size);
  // swap3numAfterZeros(array, size);
  // array_print(array, size);
  return 0;
}

void SwapTwoPointers(int **ptr1 , int **ptr2)
{
  int *temp =NULL; //null pointer
  temp = *ptr1 ;
  *ptr1 = *ptr2 ;
  *ptr2 = temp ;
}

/*******************************************************************/

/*
Write a C function to take 10 mono numbers (from 0to 9) from user 
and return the most repeated one, if user enter number bigger than 9 
return -1(don’t use arrays)
*/
int monoNumbersRepeated(int *nmax)
{
    int num,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,max=0;
    printf("enter your numbers\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&num);
        if(num>9)
        {
            return-1;
        }
        else
        {
            switch(num)
            {
            case 0:
                c0++;
                break;

            case 1:
                c1++;
                break;

            case 2:
                c2++;
                break;

            case 3:
                c3++;
                break;

            case 4:
                c4++;
                break;

            case 5:
                c5++;
                break;


            case 6:
                c6++;
                break;


            case 7:
                c7++;
                break;


            case 8:
                c8++;
                break;


            case 9:
                c9++;
                break;
            default:
                break;

            }
        }
           }
           if(c0>max)
        {
            max=c0;
            *nmax=0;
        }
        if(c1>max)
        {
            max=c1;
            *nmax=1;
        }
        if(c2>max)
        {
            max=c2;
            *nmax=2;
        }
        if(c3>max)
        {
            max=c3;
            *nmax=3;
        }
        if(c4>max)
        {
            max=c4;
            *nmax=4;
        }
        if(c5>max)
        {
            max=c5;
            *nmax=5;
        }
        if(c6>max)
        {
            max=c6;
            *nmax=6;
        }
        if(c7>max)
        {
            max=c7;
            *nmax=7;
        }
        if(c8>max)
        {
            max=c8;
            *nmax=8;
        }
        if(c9>max)
        {
            max=c9;
            *nmax=9;
        }
     return  max;
}