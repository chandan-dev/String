#include<stdio.h>
#include<conio.h>
int linear_Search(int array[], int size, int value)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(array[i] == value)
		return value;		
	}
	return 0;
	
}
int main(int arg1, char *arg2[])
{
	int value, result;
	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int size = sizeof(array)/sizeof(array[0]);
	printf("Enter the searching value:");
	scanf("%d",&value);
	result = linear_Search(array, size, value);
 	if(result == 0)
	{
		printf("%d is not found.",value);	
	}
	else
		printf("%d is found.",value);
	 
}

