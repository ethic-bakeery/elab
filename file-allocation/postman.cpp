#include <iostream>
using namespace std;
int main() {
 int n[15],arr[15][10],count,inc;
    for(int i = 0;i>-1;i++){
       cin>>n[i];
       if(n[i]==0)
         break;
       for(int j = 0;j<n[i];j++){
          cin>>arr[i][j];
       }
      count=1;
      inc=1;
      for(int j=n[i]-1;j>0;j--){
            if(arr[i][j] == arr[i][0]+inc){
                 count++;
            }
            else{
               break;
            }
         inc++;
      }
      if(count==n[i]){
        cout<<"sequential"<<endl;
      }
      else{
        cout<<"not sequential"<<endl;
      }
    }
 return 0;
}

