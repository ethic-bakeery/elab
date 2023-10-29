#include <iostream>
using namespace std;
int main() {
  int k;
  cin>>k;
  int a[k];
  for(int i=0;i<k;i++)
    cin>>a[i];
  int n;
  cin>>n;
  int b[n];
 for(int i=0;i<n;i++)
   b[i]=-1;
  int v=0;
  for(int i=0;i<k;i++)
  {int y=0;
    for(int j=0;j<n;j++)
    {
      if(b[j]==a[i])
        y++;
    }
   if(y>0){
     v++;
   }
   else if(y==0 && i<n)
     b[i]=a[i];
   else if(y==0)
   {int ck[n],t=0;
     for(int l=0;l<n;l++)
     { t=0;
       for(int z=i+1;z<k;z++)
       {
         if(b[l]==a[z])
         {t++;
          ck[l]=z;
          break;
         }
       }
      if(t==0)
      {
        ck[l]=k;
        b[l]=a[i];
        break;
      }
     }
    if(t!=0)
    {
    int mx=ck[0],pt=0;
    for(int z=1;z<n;z++)
    {
      if(ck[z]>mx)
      {
        mx=ck[z];
        pt=z;
      }
    }
 
     b[pt]=a[i];
    }
   
   }
   cout<<"FAULT ";
  for(int z=0;z<n;z++)
  {if(b[z]!=-1)
    cout<<b[z]<<" ";
  }
  cout<<endl;
 
  }
  cout<<"Total Number of Page Faults:"<<k-v;

  return 0;
}
