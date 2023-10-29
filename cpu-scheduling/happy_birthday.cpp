#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  float n, arr[50],wt=0,tt=0,awt,att;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>arr[i];
    tt+=arr[i];
    awt+=wt;
    cout<<"F"<<i<<fixed<<setprecision(2)<<" "<<arr[i]<<" "<<wt<<" "<<tt<<endl;
    wt+=arr[i];

    att+=tt;
    
  }
  
  
  awt=awt/n;
  att=att/n;
    cout<<"Average Waiting Time="<<fixed<<setprecision(6)<<awt<<endl;
  cout<<"Average Turnaround Time="<<att<<endl;
  
 
 return 0;

}
