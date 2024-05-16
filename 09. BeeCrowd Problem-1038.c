/*
https://www.beecrowd.com.br/judge/en/problems/view/1038
*/
#include <stdio.h>
int main() {
int X, Y;
float price = 0;
scanf("%d %d", &X, &Y);
if (X == 1) {
price = (float) (4.00 * Y); }
else if (X == 2) {
price = (float) (4.50 * Y); }
else if (X == 3) {
price = (float) (5.00 * Y); }
else if (X == 4) {
price = (float) (2.00 * Y); }
else if (X == 5) {
price = (float) (1.50 * Y); }
printf("Total: R$ %.2f\n", price);
return 0; }
