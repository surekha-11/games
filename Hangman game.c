#include<stdio.h>
#include<string.h>
void hangman(char s[]);
int main(){
srand(time(NULL));
char s[15][13]={"apple","jackfruit","strawberry","cherry","gauva","kiwi","mango","watermelon","grapes","pineapple","custardapple","banana","dragonfruit","lichi","orange"};
int i=rand()%15;
hangman(s[i]);
return 0;
}
void hangman(char s[]){
char c,t;
char s3[]="---------------";
int j=0;
int count;
int i,attempts=0;
for(i=0;s[i]!='\0';i++){
j+=1;
}
char s2[j];
strncpy(s2,s3,j);
while(attempts!=j && strcmp(s2,s)!=0){
count=0;
printf("%s",s2);
printf("\nenter character\n");
scanf(" %c",&c);
for(i=0;s[i]!='\0';i++){
if(s[i]==c){
 s2[i]=c;
 count=1;
}
}
if(count==0)
printf("\ncharacter is not available in word");
attempts+=1;
printf("\n");
}
printf("%s",s);
if(strcmp(s2,s)==0)
printf("\nu won the game");
else
printf("\nu lost the game");


}