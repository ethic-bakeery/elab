#include <iostream>
using namespace std;
struct Files
{
  char dname[10],fname[10][10];
  int fcnt;
}dir;
int main() {


  cin>>dir.dname;
  cin>>dir.fcnt;
  dir.fname[dir.fcnt];
  int i;
  for(i=0;i<dir.fcnt;i++)
    cin>>dir.fname[i];
 string k;cin>>k;
  int f=0;
  for(i=0;i<dir.fcnt;i++)
  {
    if(dir.fname[i]==k)
       f=1;
 
  }
       if(f==1)
       cout<<"File"<<" "<<k<<" "<<"is found";
       else
       cout<<"File"<<" "<<k<<" "<<"not found";
 return 0;
}
