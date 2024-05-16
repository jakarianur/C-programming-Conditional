/*
If the ages of Arif, Fahmid and Joy are input through the keyboard, write a
program to determine the youngest of the three.
  */
#include <stdio.h>
int main() {
int alif, fahmid, joy;
printf("Enter the age of Alif: ");
scanf("%d", &alif);
printf("Enter the age of Fahmid: ");
scanf("%d", &fahmid);
printf("Enter the age of Joy: ");
scanf("%d", &joy);
if (alif < fahmid && alif < joy)
printf("Alif is the youngest person.\n");
else if (fahmid < joy)
printf("Fahmid is the youngest person.\n");
else
printf("Joy is the youngest person.\n");
return 0; }
