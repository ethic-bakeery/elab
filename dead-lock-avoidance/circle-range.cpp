#include <iostream>
using namespace std;
int main() {
int n,m;
  cin>>m>>n;
  int v[n];
  int a[m][n+1],b[m][n+1],t[n];
   for(int i=0;i<n;i++)
    t[i]=0;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
    for(int j=0;j<n;j++)
    {
      cin>>b[i][j];
       t[j]+=b[i][j];
    }
        b[i][n]=0;
  }

  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

  int z;
  for(int i=0;i<n;i++)
  {
    t[i]=v[i]-t[i]; 
  }
  int kt=0;
  for(int i=0;i<m;i++)
  {
    cout<<"P"<<i+1<<" ";
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j];
    }
    cout<<" ";
     for(int j=0;j<n;j++)
    {
      cout<<b[i][j];
     }
    cout<<" ";
     for(int j=0;j<n;j++)
    {
      cout<<a[i][j]-b[i][j];
     }
              cout<<" ";
    if(kt==0){
      kt++;
       for(int j=0;j<n;j++)
    {
      cout<<v[j];
       }
      cout<<" ";
       for(int j=0;j<n;j++)
    {
      cout<<t[j];
       }
    }
    cout<<endl;
  }
 int zt=0,cp=0;
  while(zt==0)
  {int co=cp;
   cp=0;
gt:  for(int i=0;i<m;i++)
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
      cout<<"P"<<i+1<<" ";
      for(int j=0;j<n;j++)
        cout<<t[j]-(a[i][j]-b[i][j]);
      cout<<" ";
       for(int j=0;j<n;j++)
        t[j]=t[j]+b[i][j];
         b[i][n]=1;
      cp++;
   
       for(int l=0;l<n;l++)
        cout<<t[l];
      cout<<endl;
      goto gt;
    }
   
    }
  }
   zt=1;
   for(int i=0;i<m;i++)
     zt*=b[i][n];
   if(zt==1)
   {
     cout<<"The above sequence is a safe sequence";
     return 0;
   }
   if(co==cp)
    break;
  }
  cout<<"Deadlock Occurred";
  return 0;
}

