#include <stdio.h>
#include<string.h>
struct Files{
  char dname[10],fname[10][10];
  int fcnt;
}dir;
int main() {
  int i;
 scanf("%s",dir.dname);
  scanf("%d",&dir.fcnt);
  for(i=0;i<dir.fcnt;i++){
    scanf("%s",dir.fname[i]);}
  printf("The Files are\n");
  for(i=0;i<dir.fcnt;i++){
    printf("%s\n",dir.fname[i]);}

 return 0;
}


