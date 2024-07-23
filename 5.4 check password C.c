//checking password program
//Nevaiha Adams
//11/3/2023

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void password_read(char password[]);
int password_check(char password[]);

int main()
{
	char password[100];
	int sum;
	
	password_read(password);
	sum = password_check(password);
	
	if (sum)
	{
		printf("Your password is correct\n");
	}
	else
	{
		printf("Your password is lacking\n");
	}
	
	system("pause");
	return 0;
}

void password_read(char password[])
{
	printf("Enter password: \n");
	printf("Password need to be Uppercase, Digit, and $ symbol: ");
	scanf("%s", &password);
}

int password_check(char password[])
{
	int upper = 0;
	int digit = 0;
	int dollar = 0;
	int i;
	
	for (i = 0; i < strlen(password); i++)
	{
		if (isupper(password[i]))
		{
			upper = 1;
		}
		else if (isdigit(password[i]))
		{
			digit = 1;
		}
		else if (password[i] == '$')
		{ 
			dollar = 1;
		}
		
		return (upper && digit && dollar);
	}
}
