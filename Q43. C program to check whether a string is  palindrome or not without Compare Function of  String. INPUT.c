
#include <stdio.h>
#include <string.h>
int main(){
 char input Array[100], reversed Array[100];
 printf("Enter the string for palindrome check \n");
 scanf("%s", input Array);
 strcpy(reversed Array, input Array);
 strrev(reversed Array);
 if(strcmp(input Array, reversed Array) == 0 )
 printf("%s is a palindrome.\n", input Array);
 else
 printf("%s is not a palindrome.\n", input Array);
 getch();
 return 0;
}
