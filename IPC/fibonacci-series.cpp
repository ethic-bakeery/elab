#include <iostream>
using namespace std;
int main() {
 int i;
  cin>>i;
  int start=0,current=1,sum=0;
  cout<<start;
  cout<<current;
  for(int j=2;j<i;j++)
  {
    sum=start+current;
    start=current;
    current=sum;
    cout<<sum;
  }
 return 0;
}
