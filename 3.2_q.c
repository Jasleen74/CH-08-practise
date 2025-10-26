/**/
#include<stdio.h>
char * slice(char string[], int m , int n ){
    int i = 0 ;
    char *ptr1 = &string[m];
    char *ptr2 = &string[n];

    string = ptr1;
    string[n] = '\0';
    return string;
}
int main() {
      char str[50] ;
    printf("Enter the word pls : ");
    scanf("%49s", str);

    int m ;
    printf("Enter the starting number : ");
    scanf("%d", &m);
  
    int n ;
    printf("Enter the ending number : ");
    scanf("%d", &n);

    printf("The result to this is : %s", slice(str,m,n));
 return 0;
}