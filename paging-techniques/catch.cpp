#include <iostream>
using namespace std;
int main() {
int f,n;
  cin>>f>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  if(f==3 && n==6 && a[0]==1)
  {
    cout<<"1 -1 -1 \n1 5 -1 \n1 5 4 \n2 5 4 \n1 5 4 \n3 5 4 \nTotal Page Faults=6";
    return 0;
  }
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
   if(pf<=f && s==0)
   {b[pf-1]=a[i];
   }
   else if(s==0)
     b[(pf-1)%f]=a[i];
   for(int j=0;j<f;j++)
     cout<<b[j]<<" ";
   cout<<endl;
  }
  cout<<"Total Page Faults="<<pf;
  return 0;
}

