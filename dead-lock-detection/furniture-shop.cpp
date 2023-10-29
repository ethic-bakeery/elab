#include <iostream>
using namespace std;
int main() {
int n,m;
  cin>>m>>n;
  int v[n];
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int a[m][n+1],b[m][n],t[n];
   for(int i=0;i<n;i++)
    t[i]=0;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
      t[j]+=a[i][j];
    }
    a[i][n]=0;
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>b[i][j];
    }
  }
  cout<<"Allocated resources:";
  for(int i=0;i<n;i++)
    cout<<t[i]<<" ";
  cout<<"\nAvailable resources:";
  for(int i=0;i<n;i++)
    cout<<v[i]-t[i]<<" ";
  cout<<endl;
  for(int i=0;i<n;i++)
  {
    t[i]=v[i]-t[i];
   
  }
 int zt=0,cp=0;
while(zt==0)
  {int co=cp;
   cp=0;
  for(int i=0;i<m;i++)
  {
    if(a[i][n]==0)
    {
    int k=0;
    for(int j=0;j<n;j++)
    {
      if(b[i][j]-a[i][j]<=t[j])
        k++;
    }
    if(k==n)
    {
       for(int j=0;j<n;j++)
        t[j]=t[j]+a[i][j];
         a[i][n]=1;
      cout<<"Process"<<i+1<<" is executing\n"<<"The process is in safe state\n";
      cout<<"Available vector:";
             for(int j=0;j<n;j++)
               cout<<t[j]<<" ";
      cout<<endl;
      cp++;
    }
    }
  }
   zt=1;
   for(int i=0;i<m;i++)
     zt*=a[i][n];
   if(zt==1)
   {
     return 0;
   }
   if(co==cp)
    break;
  }
  cout<<"The processes are in unsafe state";
  return 0;
}
