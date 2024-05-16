/*
https://www.beecrowd.com.br/judge/en/problems/view/1044
*/
#include <stdio.h>
int main()
{
int num_a, num_b;
scanf("%d %d", &num_a, &num_b);
if (num_b % num_a == 0 || num_a % num_b == 0) {
printf("Sao Multiplos\n");
} else {
printf("Nao sao Multiplos\n");
}
return 0;
}
