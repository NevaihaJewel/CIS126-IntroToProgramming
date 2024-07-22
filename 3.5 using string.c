//Predefined functions using string.h
//Nevaiha Adams
//10/22/23

#include<stdio.h>
#include<string.h>

int main()
{
	char movie[30];
	
	puts("What is your favorite movie?");
	gets(movie);
	
	printf("\nThere are %d characters (including spaces) in your movie title.", strlen(movie));
	
	return 0;
}
