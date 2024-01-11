#include <stdio.h>  
#include <conio.h>  
  
// create a function  
void upr_lwr (char *str)  
{  
    int i;  
    // use for loop to iterate the length of the string  
    for ( i = 0; str[i]; i++)  
    {  
        if ( str [i] >= 65 && str [i] <= 90)  
        str[i] = str[i] + 32; /* add 32 to string character to change into lowercase */  
    }  
}  
int main ()  
{  
    char str[100]; // declare the size of character array  
      
    printf (" Enter the upper case string: ");  
    gets (str); // use gets() function to take string  
      
    // call upr_lwr() function   
    upr_lwr (str);  
  
    printf (" \n The lowercase string is: %s", str);  
          
    return 0;  
  
}  
