/*5. Write your own version of strcpy function from <string.h>*/

#include<stdio.h>
#include<string.h>
char *copy (char *sorce, char *destination  ){
        
        
        int i = 0;
        while (sorce[i] != '\0'){
            destination [i] = sorce[i];
            i ++;
        }

        destination[i] = '\0';

        return destination ;
}
int main() {
      char str1[50] ;
    printf("Enter the word pls : ");
    scanf("%49s", str1);

      char str2[50] ;
   

    copy ( str1, str2);

    printf("the copied string is : %s",str2);
     
  
 return 0;
}