/*
An electric power distribution company charges its domestic consumers as
follows:
Consumption Units Rate of Charge
0 – 200 Rs. 0.50 per unit
201 – 400 Rs. 100 plus Rs. 0.65 per unit excess of 200
401 – 600 Rs. 230 plus Rs. 0.80 per unit excess of 400
601 and above Rs. 390 plus Rs. 1.00 per unit excess of 600
Write a program that reads the power consumed by a customer and prints
the amount to be paid by the customer.
*/
#include <stdio.h>
int main() {
int cus;
float units, bill;
printf("Enter Customer Id Number: ");
scanf("%d",&cus);
printf("Enter Total Customer Units: ");
scanf("%f", &units);
if(units <= 200)
bill = 0.50 * units;
else if(units >= 201 && units <= 400)
bill = 100 + 0.65 * (units - 200);
else if(units >= 401 && units <= 600)
bill = 230 + 0.85 * (units - 400);
else
bill = 390 + 1.00 * (units - 600);
printf("\n Customer Number = %d", cus);
printf("\n Units consumed = %.2f", units);
printf("\n Bill = %.2f", bill);
return 0; 
}
