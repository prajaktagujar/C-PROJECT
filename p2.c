#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int number,guess,nguess=1;
srand(time(0));
number=rand()%100 +1;
do
{
    printf("enter the number between 1 to 100 \n");
scanf("%d",&guess);

    if(guess>number)
        printf("lesser number please \n ");
    else if (guess<number)
        printf("greater number please \n ");
    else
        printf("you guessed the number in %d attempts ",nguess);
    nguess++;
}while(guess!=number);
return 0;





}
