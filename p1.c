#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>
int game (char you,char comp )
{
    if(comp==you)  //game withdraw
        return 0;
    if(you=='s' && comp=='w')
        return 1;
    else
        return -1;
    if(you=='s' && comp=='g')
        return -1;
    else
        return 1;
   if(you=='w' && comp=='g')
        return -1;
    else
        return 1;
}
int main(){
    // generating a random number
  int number;
  int you,comp;
srand(time(0));
number=rand()%100 +1;
if(number<33)
{
    comp='s';
}
else if(number>33 && number<66)
{
    comp='w';
}
else {
    comp='g';
}
printf("enter s for snake w for water and g for gun \n");
scanf("%c",&you);
int result = game(you,comp);
if(result==0)
    printf("game withdraw!! ");
else if(result==1)
    printf("YOU WON !! ");
else
    printf("YOU LOOSE !! ");
printf("/n You choose %c and Comp choose %c ",you,comp );
return 0;
}
