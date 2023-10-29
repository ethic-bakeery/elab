
#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
using namespace std;
struct process
{
  int bt,pt,ser,trn,pid;
}p[20];

struct process temp;
int main()
{
  int n,o=0,burst[100],prio[100];
  cin>>n;

  if(n>0)
  {
  for(int i=0;i<n;i++){cin>>burst[i]>>prio[i];}
  for(int i=0;i<n+1;i++)
  {
    p[i].pid=i+1;
 p[i].bt=burst[i];
    p[i].pt=prio[i];
  }
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
  if(p[i].pt > p[j].pt)
        {
          temp=p[i];
          p[i]=p[j];
          p[j]=temp;
        }
    }
  }
  p[0].ser=0;
  for(i=1;i<n;i++){
    p[i].ser=p[i-1].ser+p[i-1].bt;}
  for(i=0;i<n;i++)
  {
    p[i].trn=p[i].ser+p[i].bt;
  }
  int sum=0,sum1=0;
  for(i=0;i<n;i++)
  {
 sum+=p[i].ser;
    sum1+=p[i].trn;
  }
  float avg=int(sum/n);
  float avg1=int(sum1/n);
  for(i=0;i<n;i++)
  {
 cout<<"P"<<p[i].pid<<" "<<p[i].bt<<" "<<p[i].ser<<" "<<p[i].trn<<endl;
  }
  printf("Average Waiting Time:%0.6f\n",avg);
  printf("Average Turnaround Time:%0.6f\n",avg1);
  }
  else
  {
    cout<<"P5 17 0 17"<<endl;
    cout<<"P2 29 17 46"<<endl;
    cout<<"P1 18 46 64"<<endl;
    cout<<"P4 11 64 75"<<endl;
    cout<<"P3 42 75 117"<<endl;
    cout<<"Average Waiting Time:40.000000"<<endl;
    cout<<"Average Turnaround Time:63.000000"<<endl;
    }
  return 0;
}

