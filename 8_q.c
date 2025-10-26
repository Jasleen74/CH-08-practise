/*9. Write a program to check whether a given character is present in a string or not.*/

#include<stdio.h>
#include<string.h>
int main() {
     char string[50];
     printf("Enter the word pls : ");
    scanf("%49s", string);

    char check ;
    printf("Enter the word u want to check : ");
    scanf(" %c", &check );

     int length = strlen(string);
     int contain  = 0 ;
    
    for (int i = 0 ; i <length; i++ ){
        if (string[i] == check){
            contain  == 1;
            break;
        }
        
    }

    if (contain =1 ){
        printf("YES! it is there ");
    }
    else{
        printf("Nah! not here ");
    }
   
  
 return 0;
}