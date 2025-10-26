/*. Write a program to count the occurrence of a given character in a string.*/

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

    int count = 0 ;
    for (int i = 0 ; i <length; i++ ){
        if (string[i] == check){
            count ++;
        } 

    }
   
    printf("The word occured %d times", count);
      return 0;
 }