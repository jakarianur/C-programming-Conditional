/*
Write a C program to input marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer, calculate percentage and grade
according to given conditions:
 If percentage >= 90% : Grade A
 If percentage >= 80% : Grade B
 If percentage >= 70% : Grade C
 If percentage >= 60% : Grade D
 If percentage >= 40% : Grade E
 If percentage < 40% : Grade F
*/
#include<stdio.h>
int main(){
float c, p, b, m, co, avr_marks;
printf("Enter your chemistry marks: ");
scanf("%f", &c);
printf("Enter your physics marks: ");
scanf("%f", &p);
printf("Enter your biology marks: ");
scanf("%f", &b);
printf("Enter your mathematics marks: ");
scanf("%f", &m);
printf("Enter your computer marks: ");
scanf("%f", &co);
avr_marks = ((c+p+b+m+co)*100)/500;
if(avr_marks >=90)
printf("Grade A");
else if(avr_marks >=80)
printf("Grade B");
else if(avr_marks >=70)
printf("Grade C");
else if(avr_marks >=60)
printf("Grade D");
else if(avr_marks >=40)
printf("Grade E");
else if(avr_marks <40)
printf("Grade F");
else
printf ("Please Enter Your Subject Number.\n");
return 0;
}
