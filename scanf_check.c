#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isInteger(char* integerStr)
{
	int resultCheck = 1; 
	int i;
	for(i=0; i<strlen(integerStr); i++)
	{
		if(!isdigit(integerStr[i]))
		{
			resultCheck = 0;
			break;
		}
	}
	return resultCheck;
}

void putInteger(char* integerStr)
{

	int resultCheck = 0;
	do{
		printf("Enter an integer number: ");
		scanf("%s", integerStr);
		resultCheck = isInteger(integerStr);
		if(!resultCheck)
		{
			printf("---> Not valid integer number, please try again <---\n");
		}
	}while(!resultCheck);
}

int main(int argc, char* argv[])
{
	char integerStr1[10], integerStr2[10];
	putInteger(integerStr1);
	putInteger(integerStr2);
	printf("The sum is %d\n", atoi(integerStr1) + atoi(integerStr2));

	return 0;
}
