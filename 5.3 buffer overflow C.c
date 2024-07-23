//buffer overflow conditions
//Nevaiha Adams
//11/3/2023

#include<stdio.h>

int main()
{
	int n[10];
	int i, j;
	
	for (i=0; i<=10; i++)
	{
		n[i]=i+100;
	}
	
	for (j=0; j<=10; j++)
	{
		printf("Element[%d] = %d\n", j, n[j]);
	}
	
	printf("Element[10] = %d", n[10]);
	
	return 0;
}
