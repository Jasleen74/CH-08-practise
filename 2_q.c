/*3. Write your own version of strlen function from <string.h>*/
#include<stdio.h>
int main() {

    char string[]= "Mustang";
    int i =0;
    char c = string[i];

    while(c != '\0'){
       c = string[i];
       i++;
    }
     
    printf("The length of the string is : %d", i);

  
 return 0;
}