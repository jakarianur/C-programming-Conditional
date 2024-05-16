/*
Write a c program for +, -, *, and / operation using switch case
*/
#include <stdio.h>
int main() {
char operator;
double a, b;
printf("Enter Any Opearator (+, -, *, /) : ");
scanf("%c", &operator);
printf("Enter Your First Number: ");
scanf("%lf", &a);
printf("Enter Your Second Number: ");
scanf("%lf", &b);
switch (operator){
case'+':
printf("\nAddition : %.2lf + %.2lf = %.2lf", a, b, a+b);
break;
case'-':
printf("\nSubstruction : %.2lf - %.2lf = %.2lf", a, b, a-b);
break;
case'*':
printf("\nMultification : %.2lf * %.2lf = %.2lf", a, b, a*b);
break;
case'/':
if(b==0)
printf("\nSecond value is 0. So, The divided value is undefine");
else
printf("\nDivided : %.2lf / %.2lf = %.2lf", a, b, a/b);
break; }
return 0; 
}
