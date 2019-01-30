#include <stdio.h>
#include <string.h>
void sort(char string[], int len)//function to sort the given string.
{
	char temp;
   	int i, j;
	for (i = 0; i < len-1; i++)//loop to access current charecter.
	{
      for (j = i+1; j < len; j++) //loop to access next charecter.
	  {
         if (string[i] > string[j]) //swapping of charecters according to ascii value of the string.
		 {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
}
int check(char string_1[], char string_2[])//check two strings are equal or not.
{
	printf("String_1 in check function  = %s \n", string_1);
	printf("String_1 in check function  = %s \n", string_1);
	if(strcmp(string_1, string_2) == 0)// if str_1 == str_2 then return = 0; if str_1 > str_2 then return = -ve; if str_1 < str_2 then return = +ve; 
	return 0;//return to main function(result)if condition is true
	else 
	return 1;//return to main function(result)if condition is false.
}
int main (void) {
   char string_1[] = "army";
   char string_2[] = "mary";
   
   int len_1 = strlen(string_1);
   int len_2 = strlen(string_2);
   
   printf("String_1 before sorting = %s \n", string_1);
   printf("String_2 before sorting = %s \n\n", string_2);
   
   sort(string_1, len_1);
   sort(string_2, len_2);
   
   printf("String_1 after sorting  = %s \n", string_1);
   printf("String_2 after sorting  = %s \n\n", string_1);
   
   int result = check(string_1, string_2);
   
   printf("\n compare result = %d \n\n",  result);
   if(result == 0)
   {
   	printf("Both are having same charecters");
   }
   else
   printf("Both are having unequal charecters");
   
   return 0;
}

