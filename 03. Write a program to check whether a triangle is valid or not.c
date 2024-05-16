/*
Write a program to check whether a triangle is valid or not, when the three
angles of the triangle are entered through the keyboard. A triangle is valid
if the sum of all the three angles is equal to 180 degrees.
  */
#include <stdio.h>
int main() {
float a, b, c;
printf ("Enter three angles of any triangle: ");
scanf("%f %f %f", &a, &b, &c);
if(a+b+c==180)
printf("This is a Triangle.");
else
printf("This is not a Triangle.");
return 0; }
