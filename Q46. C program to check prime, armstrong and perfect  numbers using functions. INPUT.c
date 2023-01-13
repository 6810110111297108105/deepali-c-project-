
#include <stdio.h>
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
int main() {
 int n, flag;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 flag = checkPrimeNumber(n);
 if (flag == 1)
 printf("%d is a prime number.\n", n);
 else
 printf("%d is not a prime number.\n", n);
 flag = checkArmstrongNumber(n);
 if (flag == 1)
 printf("%d is an Armstrong number.", n);
 else
 printf("%d is not an Armstrong number.", n);
 return 0;}
int checkPrimeNumber(int n) {
 int i, flag = 1, squareRoot;
 squareRoot = sqrt(n);
 for (i = 2; i <= squareRoot; ++i) {
 if (n % i == 0) {
 flag = 0;
 break;}}
 return flag;}
int check Armstrong Number(int num) {
 int original Num, remainder, n = 0, flag;
 double result = 0.0;
 for (original Num = num; original Num != 0; ++n) {
 original Num /= 10;}
 for (original Num = num; original Num != 0; original Num /= 10) {
 remainder = original Num % 10;
 result += pow(remainder, n); }
 if (round(result) == num)
 flag = 1;
 else
 flag = 0;
 return flag;
}
