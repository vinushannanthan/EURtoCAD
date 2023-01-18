#include <stdio.h> 
main(){

char first;
char last;
double dollars;
double EUR;
double CAD;

printf("Type your initials to continue > ");
scanf("%c%c", &first, &last);
printf("\nWelcome %c%c, please enter the amount of CAD you are trying to convert > ", first, last);
scanf("%lf", &CAD);
printf("Your amount of CAD is %.2lf.\n", CAD);

EUR = CAD * 0.69;

printf("Your CanAdian dollar amount %.2lf, equals to %.2lf euros.", CAD, EUR);

return 0;
}