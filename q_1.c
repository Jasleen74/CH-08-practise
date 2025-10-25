/*Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.*/
#include<stdio.h>
int main() {

    //char name[50];

    //Using %s 
    // printf("Enter ur name pls : ");
    //scanf("%s",name);
    
    //printf("Ur name is : %s\n", name);


    // Using %c
    char myname[8];
    printf("enter ur name pls : ");

    for (int i = 0 ;i <7; i ++){
        scanf("%c",&myname[i]);
        fflush(stdin);          //we need to add this cuz when we press enter it reads it as a character too
    }
    myname[7]='\0';

    printf("%s",myname);


//
     
  
 return 0;
}