//secure c programming
//Nevaiha Adams
//11/3/2023

#include<stdio.h>
#include<string.h>

int main(void)
{
	char buff[8];
	int pass = 0;
	
	printf("\nEnter the password: \n");
	gets(buff);
	
	if(strcmp(buff, "password"))
	{
		printf("\nWrong password\n");
	}
	else
	{
		printf("\nCorrect password\n");
		printf("\nRoot privileges given to the user\n");
		pass=1;
	}
	
	return 0;
}
