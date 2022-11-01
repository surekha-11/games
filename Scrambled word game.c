#define _GNU_SOURCE
#include<stdio.h>
#include<string.h>

int main(){
   printf("INSTRUCTIONS\n");
   printf("you have to guess the correct word displayed on the screen\n");
   printf("you will be given 3 chances to guess the word\n");
   int i=0,j=0,attempt,score=0;
   char gs[15],n,name[15];
   char temp[10][15];
   char wrds[10][15]={"apple","banana","berry","grape","melon","custard","orange","mango","guava","pear"};
   printf("Enter your good name : ");
   gets(name);
   do{
      printf("\n");
      strcpy(temp,wrds[i]);
      attempt=1;
      printf("Guess the word %s : \n",strfry(temp));
      while(attempt<4)
       {    
          scanf("%s", gs);
          if(strcmp(wrds[i],gs) == 0)
          {
          printf("CONGRATULATIONS! you got a point\n",name);
          score++;
          printf("%s score = %d\n",name,score);
          break;
          }
          else
          {
           if(attempt==3)
           {
           printf("%s lost a point\nTRY AGAIN \n",name);  
           break;
           }        
          printf("u have still %d attempts : \n",3-attempt);
          ++attempt;
          }
      }
      i++;
      printf("\n%s do you want play enter y/n\n",name);
      scanf(" %c",&n);
     }while(n=='y' || n == 'Y');
   printf("%s Total score =%d\n",name,score);
   return 0;
  }