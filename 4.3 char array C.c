//using character arrays
//Nevaiha Adams
//11/3/2023

#include<stdio.h>

int main()
{
	char name[20];
	char prompt[] = "Enter your name: ";
	char prompt1[5] = {'y','o','u','r','\0'};
	
	puts(prompt);
	gets(name);
	
	printf("%s", prompt1);
	printf(" name is: %s", name);
	
	return 0;
}
