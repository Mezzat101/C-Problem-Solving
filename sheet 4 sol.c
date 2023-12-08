/*(1)Write c function to reverse string "Ahmed salem"->melas demhA"*/

void reverseString(char *str)
{
  int temp ;
  int length = stringLength(str);
  int j = length- 1 ;
  for(int i =0 ; i <= j ;i++)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp ;
    j-- ;
  }

=================================================================================
/*(2) Write c function to check if string is mirror or not "SalaS","SalelaS".*/
  char mirrorString(char *str){
    int length = stringLength(str);
    for(int i = 0 ; i <length ; i++) 
    {    
        if(str[i] != str[length - i -1])// compare first element with last element 
        {
            return 0 ; //Not a mirror string
        }
        return 1 ;
    }
}

=================================================================================
/*
(3)Write c function to reverse words in sentence (without using external arrays)
 " I work as an embedded software engineer for 3 years"
 -> " years 3 for engineer software embedded an as work I".
*/
void reverseWord(char *str, int first, int last)
{
    char tmp;
    while (first <= last)
    {
        tmp = str[first];
        str[first] = str[last];
        str[last] = tmp;
        first++;
        last--;
    }
}

void reverseWords(char *str)
{
    int len = stringLength(str); // Calculate the length of the string
    reverseWord(str, 0, len - 1); // Reverse the entire string
    int last, first = 0, i;
    for (int i = 0; i < len; i++) // Iterate through each character of the string
    {
        if (str[i] == ' ') // If a space character is encountered
        {
            last = i - 1; // Set the last index of the word
            reverseWord(str, first, last); // Reverse the word between first and last indices
            first = i + 1; // Update the first index for the next word
        }
        
    }
    reverseWord(str, first, len - 1); // Reverse the last word in the string
}