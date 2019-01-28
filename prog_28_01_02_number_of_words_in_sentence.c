#include<stdio.h>
#include<conio.h>
int countWords(char *string)
{
	int count = 0,num=0;
	while(*string)
	{
		if(*string == ' '|| *string == '\n' || *string =='\t')//check the word separator
		{
			count++;//count the number of gaps
		}
	 
		string ++;
	}
	return count;
}
void main()
{
	int result;
	char string[] = {"I am chandan kumar palei"};
	result = countWords(string);
	printf("Number of words = %d",result+1);	
	getch();
}

