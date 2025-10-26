/*6. Write a program to encrypt a string by adding 1 to the ascii value of its characters.*/
#include<stdio.h>
#include<string.h>

int main() {
    char str1[50] ;
    printf("Enter the word pls : ");
    scanf("%49s", str1);
 
     for (int i = 0 ; i <strlen(str1); i ++){
        str1[i] = str1[i]+1;
     }

    printf("the new value is : %s", str1);


     
  
 return 0;
}