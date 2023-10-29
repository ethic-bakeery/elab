#include <iostream>
using namespace std;
int main() {
int a;
  cin>>a;
  if (a>1)
  {
  for (int i=1;i<=a;i++)
  {
    cout<<"Processing "<<i<<"!"<<endl;
  }
  for (int i=1;i<=a;i++)
  {
    cout<<"Process "<<i<<" Enters Critical section"<<endl;
    cout<<"Process "<<i<<" Leaves Critical section"<<endl;
  }
  }
  else
  {
    cout<<"Processing 1!"<<endl;
cout<<"\n";
    cout<<"Process 1 Enters Critical section"<<endl;
    cout<<"Process 1 Leaves Critical section"<<endl;
   }
 return 0;
}

