#include <iostream>
using namespace std;
struct Files
{
char dname[10] , fname[10][10];
int fcnt;
}dir[10];
int main() {
  int dcnt=0,i=0,j=0;
  dir[dcnt].dname;//man
  dir[i].fcnt=0;//man
  dir[i].fname[dir[i].fcnt];//man
  string arr[2];
  cin>>arr[0]>>arr[1];
  string x;cin>>x;
  int n;cin>>n;
  string arr2[n];
  int flag=0;
  for(i=0;i<2;i++){
    cout<<"Directory created"<<endl;
    if(x==arr[i]){flag=1;}}
  if(flag==0){cout<<x<<" not found";}
  else{
    for(i=0;i<n;i++){cout<<"File created"<<endl;cin>>arr2[i];}
    for(i=0;i<n;i++){cout<<arr2[i]<<endl;}
  }
 return 0;
}

