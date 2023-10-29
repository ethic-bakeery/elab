#include <iostream>
using namespace std;
int main() {
int n,m;
  cin>>n>>m;
  int b[n],b1[n],f[m];
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
    b1[i]=b[i];
  }
  cout<<"Fileno:";
  for(int i=0;i<m;i++)
    cout<<" "<<i+1;
  cout<<"\nFilesize:";
  for(int i=0;i<m;i++)
  {
    cin>>f[i];
    cout<<" "<<f[i];
  }
  cout<<"\nBlockno:";
  int k,t[m],z=0;
  for(int i=0;i<m;i++)
  {int l=-1;
    for(int j=0;j<n;j++)
    {
      if(l<=b[j] && b[j]>f[i])
      {
        l=b[j];
        k=j;
      }   
    }
   if(l==-1)
   {t[z++]=-1;
     cout<<" "<<0;
   }
   else
   {b[k]=-1;
    t[z++]=k;
     cout<<" "<<k+1;
   }
  }
  cout<<"\nBlocksize:";
  for(int i=0;i<m;i++) {
    if(t[i]==-1)
      cout<<" "<<1;
    else
      cout<<" "<<b1[t[i]];}
  cout<<"\nFragment:";
  for(int i=0;i<m;i++)
  {if(t[i]==-1)
      cout<<" "<<0;
    else
      cout<<" "<<b1[t[i]]-f[i];
  }
  return 0;
}

