/*
1) You have an array of 100 element contain all number from 0 t0 100 except 
one number, write c function to find the missed number (try in O(n)).
*/

int findMissingNumber(int arr[], int size)
{
    int totalSum = (size * (size + 1)) / 2; // Calculate the sum of numbers from 0 to size
    int arraySum = 0;

    for (int i = 0; i < size; i++) 
    {
        arraySum = arraySum + arr[i]; // Calculate the sum of elements in the array
        //printf("num is %d \n",arraySum);
    }
    int missingNumber = totalSum - arraySum; // Subtract the array sum from the total sum to find the missing number
    return missingNumber;
}
------------------------------------------------------------------------------------




-----------------------------------------------------------------------------------
/*
3) You have an array of integers all numbers in the array repeated 2 times 
except one number repeated one time only find this number (try o(n)).
array like {1,2,4,66,2,1,500,66,7,7,500}->4.
*/
int findUniqueNumber(int arr[], int size) {
    int uniqueNum = 0;
    
    for (int i = 0; i < size; i++) {
        uniqueNum = uniqueNum ^ arr[i];
    }
    /*Since XOR of two same numbers results in 0,
     all the numbers that are repeated twice will cancel out 
     each other. The only number remaining will be the one that
    is repeated only once. */
    
    return uniqueNum;
}