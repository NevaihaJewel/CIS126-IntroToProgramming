#include <stdio.h>

int main()
{
	int num[11], i;
	
	printf("Please enter a number that leads to your lucky number.\n");
	scanf("%d", &num);
	
	for (i = 0; i <= 10; i++)
	{
		num[i] = i + 100;
	}
	
	printf("Lucky Number: %d", num[i]);
	
	return 0;	
}

