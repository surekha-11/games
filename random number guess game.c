#include<stdio.h>
void guessnumber(int n,int num);
int main(){
srand(time(NULL));
int n=50,num;
num=rand()%n;
guessnumber(n,num);
return 0;
}
void guessnumber(int n,int num){
int guess,attempt=0;
char name[25];
printf("Enter your name:");
scanf("%s",&name);
printf("hello %s",name);
while( attempt<3){
printf("\nplease enter a number in range 1 to %d\n",n);
scanf("%d",&guess);
if(guess>num){
printf("number is too big");
attempt++;
}
else if(guess <num){
printf("number is too small");
attempt++;
}
else {
printf("\n u won the game");
break;
}
if(attempt<3)
 printf("\n only %d attempt left",3-attempt);
}
if(attempt==3)
printf("\n random number is %d ",num);
printf("\n Sorry !you lost the game");
}