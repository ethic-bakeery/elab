#include <iostream>
using namespace std;
int main() {
int n,m;
  cin>>n;
  int v[n],t[n];
   for(int i=0;i<n;i++)
  {
    cin>>t[i];
   }
  cin>>m;
  int a[m][n+1],b[m][n+1];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>b[i][j];
    }
  }
   for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
      t[j]=t[j]-b[i][j];
    }
        b[i][n]=0;
   }

  int z=0;
 int zt=0,cp=0;
  while(zt==0)
  {int co=cp;
   cp=0;
  for(int i=0;i<m;i++)
  {
    if(b[i][n]==0)
    {
    int k=0;
    for(int j=0;j<n;j++)
    {
      if(a[i][j]-b[i][j]<=t[j])
        k++;
    }
    if(k==n)
    {
       for(int j=0;j<n;j++)
        t[j]=t[j]+b[i][j];
         b[i][n]=1;
      v[z++]=i;
      cp++;
    }
    }
  }
   zt=1;
   for(int i=0;i<m;i++)
     zt*=b[i][n];
   if(zt==1)
   {
     cout<<"< ";
       for(int p=0;p<m;p++)
       cout<<"P["<<v[p]<<"]";
     cout<<" >";
     return 0;
   }
   if(co==cp)
    break;
  }

  return 0;
}
