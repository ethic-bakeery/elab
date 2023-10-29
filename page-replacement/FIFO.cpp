#include <iostream>
#include<list>
using namespace std;
int main() {
int f,n;
  list<int>lt;
  cin>>f>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int b[f];
  for(int i=0;i<f;i++) b[i]=-1;
  int pf=0;
  for(int i=0;i<n;i++)
  {int s=0;
    for(int j=0;j<f;j++)
    {
      if(a[i]==b[j])
      {s++;
       pf--;
      }
    }
    pf++;
   if(s>0)
   {
         lt.remove(a[i]);
         lt.push_back(a[i]);
   }
   if(pf<=f && s==0)
   {b[pf-1]=a[i];
    lt.push_back(a[i]);
   }
   else if(s==0)
   {
     int t=lt.front();
     lt.pop_front();
     for(int y=0;y<f;y++)
     {
       if(b[y]==t)
       {
         b[y]=a[i];
         lt.push_back(a[i]);
         break;
       }
     }
   }
  }
  cout<<"Faults="<<pf;
  return 0;
}
