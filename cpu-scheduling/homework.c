#include <stdio.h>
//#include<conio.h>


  int main()
  {
    int i,P,BT[10],WT=0,TAT,x,y,AWT=0,ATT=0;

    scanf("%d",&P);
    for( i=1;i<=P;i++)
    {
      scanf("%d",&BT[i]);
      TAT=BT[i]+WT;
     AWT+=WT;
      WT=TAT;
   
      ATT+=TAT;
      }
    x=(AWT)/P;
    y=(ATT)/P;
   printf("Average Waiting Time:%d\nAverage Turnaround Time:%d",x,y);

 return 0;
  }

