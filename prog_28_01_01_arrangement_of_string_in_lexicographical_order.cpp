#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(int arg1, char *arg2[])
{
	char array[5][30] = { "xppp", "ghyk","hpou", "absw","qwxr"};
	char temp[30];
	int i, j;
	for(i = 0; i < 4; i++)
	{
		for(j = i+1; j < 5; j++)
		{
			if(strcmp(array[i], array[j]) > 0)
			{
				strcpy(temp, array[i]);
				strcpy(array[i],  array[j]);
				strcpy(array[j], temp);
			}		
		}				
	}
	for(i = 0; i < 5; i++)
	{
		printf("%s", array[i]);
		printf("_");
	}
	getch();
}
 
