#include<stdio.h>
#include<conio.h>
int binary_search(int array[], int lwr, int upr, int value)
{
	if(upr >= lwr)//check the existance of array;
	{	
		int mid = lwr + (upr - lwr) / 2;//find out the mid value;
		printf("\n Mid values %d\n\n",mid);		
		if(array[mid] == value)
		{
			return value;
		}	
		//if mid is the required value;
		if(value > array[mid])
		{
			return binary_search(array, mid + 1, upr, value);
		}//recursive call of function;
		
		if(value < array[mid])
		{
			return	binary_search(array, lwr, mid - 1, value);
		}
	}
	return 0;
} 
int main(int arg1, char *arg2[])
{
	int value, lwr = 0;
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};	
	int upr = sizeof(array) / sizeof(array[0]);//length of the array;
	printf("Enter the Searching value: ");
	scanf("\n\n %d", &value);
	int result = binary_search(array,lwr, upr - 1, value);
	if(result == 0)
	{
		printf("%d is not in array", value);
	}
	else
		printf("%d is in array", value);
	getch();	
	return 0;
	
}

