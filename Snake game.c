#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
char scr[100],ar[10][10],d,r,u,w,op;
int i,j,frow,fcol,srow,scol,score=0;
void bound() {
    for(i=0; i<10; i++) {
         for(j=0; j<10; j++) {
              if(i==0 || i==9 || j==0 || j==9)
                   ar[i][j]='#';
              else
                   ar[i][j]=' ';    
        }
    }
}
void food() {
    srand(time(NULL));
    fcol=rand()%8+1;
    frow=rand()%8+1;
    ar[frow][fcol]='*';
}
void snake() {
    srand(time(NULL));
    srow=rand()%8+1;
    scol=rand()%8+1;
    ar[srow][scol]='0';
}
void display() {
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++)
               printf("%c ",ar[i][j]);
        printf("\n");
    }
}
void check(int q,int x){
  if(ar[q][x]=='#'){
  printf("game over");
  exit(0);
}
  else {
    if(ar[q][x]=='*'){
      score++;
      food();
   while(ar[frow][fcol]=='0')
     food();
   }
   ar[q][x]='0';
   ar[srow][scol]=' ';
clrscr();
printf("---------------\n");
printf("score=%d\n",score);
printf("---------------\n");
display();
}
}
void movement() {
    char op;
   op=getch();
    switch(op){
    case 'd':check(srow+1,scol);
            movement(srow++,scol);
    case 'u':check(srow-1,scol);
             movement(srow--,scol);
    case 'l':check(srow,scol-1);
             movement(srow,scol--);
    case 'r':check(srow,scol+1);
             movement(srow,scol++);
    default: movement();
}
}
int main() {
    printf("enter 1.d for down\n2.u for up\n3.l for left\n4.r for right\n");
    bound();
    food();
    snake();
    while(ar[frow][fcol]=='0')
     food();
    display();
    movement();
    return 0;
}