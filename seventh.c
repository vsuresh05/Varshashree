// Write a program in C to print a string in reverse using a pointer.
// https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-22.php

#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;
 	printf("\n\n Pointer : Print a string in reverse order :\n"); 
	printf("------------------------------------------------\n");	
    printf(" Input a string : ");
    scanf("%s",str1);
    while(*stptr)
    {
     stptr++;
     i++;
    }
    while(i>=0)
    {
     stptr--;
     *rvptr = *stptr;
     rvptr++;
     --i;
    }
    *rvptr='\0';
    printf(" Reverse of the string is : %s\n\n",revstr);
    return 0;
}
