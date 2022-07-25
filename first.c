//Write a simple C Program to convert uppercase string to lowercase string, compile using gcc and run.

#include <stdio.h>
#include <string.h>
int main ()  
{  
    char upr[50], lwr[50]; // declare character array  
    int i = 0;  
      
    printf (" Enter an upper case string: ");  
    scanf ("%s", &upr); // use gets() function to take string  
      
    /* use while loop to iterate the character array string until '\0' not occur. */  
   // while (upr [i] != '\0')  
   for(i=0; i<strlen(upr); i++)
    {  
    lwr [i] = upr[i] + 32; // Add 32 to string character to convert into lower case.        i++;  
        }     
    lwr[i] = '\0'; 
        printf (" \n The lowercase string is: %s", lwr);  
          
    return 0;  
  
}