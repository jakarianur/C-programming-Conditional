#include <stdio.h>
int main() {
char ch;
printf("Enter any character: ");
scanf("%c", &ch);
if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
printf("This is an ALPHABET\n");
else
printf("This is NOT an ALPHABET\n");
return 0; }
