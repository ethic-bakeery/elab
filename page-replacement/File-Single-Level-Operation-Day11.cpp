
#include <iostream>
using namespace std;
struct Files
{
char dname[10],fname[10][10];
int fcnt;
};
int main() {

  Files dir;
  cin>>dir.dname;
  cin>>dir.fcnt;
  dir.fname[dir.fcnt];
  int i;
  for(i=0;i<dir.fcnt;i++)
    cin>>dir.fname[i];
  cout<<"The Files are"<<endl;


  for(i=0;i<dir.fcnt;i++)
    cout<<dir.fname[i]<<endl;
 
 return 0;
}

