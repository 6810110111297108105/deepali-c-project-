
#include<stdio.h>
int main(){
int i,j, rows;
printf("Enter Rows = ") ;
scanf("%d",&rows);
for(i = rows - 1; i > 0; i--) {
 for(j = 1; j <= rows - i; j++) {
 printf(" "); }
 for(j = 1; j <= i * 2 - 1; j++) {
 printf("*"); }
 printf("\n");}
}
