#include <iostream>
using namespace std;
int main() {
 int n,m , *arr_bt , *arr_file , temp , sub , *alloc , *copy;
    cin>>n>>m;
    arr_bt = new int[n];
    arr_file = new int[m];
    alloc = new int[m];
    copy = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr_bt[i];
        copy[i] = arr_bt[i];
    }
    for(int i = 0;i<m;i++){
       cin>>arr_file[i];
    }
   cout<<"File Number File Size Block Number Block Size Fragment\n";
    for(int i = 0;i<m;i++){
        sub = 100;
      temp=-1;
        for(int j =  0; j<n; j++){
               if(arr_bt[j] >= arr_file[i]){
                    if(arr_bt[j] - arr_file[i] <= sub){
                    sub = arr_bt[j] - arr_file[i];
                    temp = j;
                   }
           }
        }
       if(sub != 100)
       arr_bt[temp] = sub;
       alloc[i] = temp+1;
      if(i==0)
      cout<<i<<' '<<arr_file[i]<<' '<<temp<<' '<<copy[temp]<<' '<<copy[temp] - arr_file[i];
   
    }

 return 0;
}

