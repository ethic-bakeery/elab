#include <iostream>
using namespace std;
class emp{
public:
  int k;
  int n;
  int a[100];
};
int main() {
  int t;
  cin>>t;
  emp o[t];
  for(int i=0;i<t;i++)
  {
    cin>>o[i].k>>o[i].n;
   for(int j=0;j<o[i].n;j++)
     cin>>o[i].a[j];
  }
  for(int i=0;i<t;i++)
  {cout<<i+1<<" "<<o[i].k<<" "<<o[i].n<<endl;
  }
  cout<<"blocks occupied are:\n";
  for(int i=0;i<t;i++)
  {
    cout<<"fileno"<<i+1<<":";
    for(int j=0;j<o[i].n;j++)
    {cout<<" "<<o[i].k<<" "<<o[i].a[j];
    }
    cout<<endl;
  }
 
  return 0;
}
