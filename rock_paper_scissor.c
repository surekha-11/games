#include<stdio.h>
void rps(void);
int main(){
srand(time(NULL));
rps();//rockpaperscissor
return 0;
}
void rps(){
int r=rand() % 3;
int ps=0;//personscore
int cs=0;//computerscore
int chance;
char ch;
char name[10];
int p;
printf("enter your name:");
scanf("%s",&name);
do{
printf("enter: \n 1 for rock \n 2 for paper \n 3 for scissor\n");
scanf("%d",&p);
if(r==1)
printf("computer chooses rock\n");
else if (r==2)
printf("\ncomputer chooses paper\n");
else
printf("\ncomputer chooses scissor\n");
if(p==1)
printf("%s chooses rock\n",name);
else if (p==2)
printf("\n%s chooses paper\n",name);
else
printf("\n%s chooses scissor\n",name);
if(r!=p){
if(p==(r+1)%3){
printf("%s won %d chance\n",name,chance);
ps++;
}
else{
printf("computer won %d chance\n",chance);
cs++;
}
}
else{
printf("both choosen same option \n");
printf("no one won chance %d\n",chance);
}
printf("enter y/n:");
scanf("%c ",&ch);
}while(ch=='y');
printf("computer score is%d \n %s score is %d\n",cs,name,ps);
if(cs>ps)
printf("\n Sorry!..\n %s lost the game",name);
else if(ps>cs)
printf("\n WOW.... \n %s won the game",name);
else
printf("\n game draw");
}