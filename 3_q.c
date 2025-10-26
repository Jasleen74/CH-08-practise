/*4. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string.*/
#include<stdio.h>
#include<string.h>

void slice (char string[], int );
void slice (char string[],int m  ){

     int n = strlen(string);
       int i = n-m;
       string[i]= '\0';
    printf("%s",string);
}
int main() {

    char str[50] ;
    printf("Enter the word pls : ");
    scanf("%49s", str);


    int m ;
    printf("Enter the number of the element u want to remove : ");
    scanf("%d", &m);
    

    slice(str,m);
    
     
 return 0;
}
