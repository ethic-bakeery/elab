#include <iostream>
using namespace std;
int main() {
 int n,m,*arr_batch , *arr_file, *assignment , *en ,sub ;
    cin>>n>>m;
    arr_batch = new int[n];
    arr_file = new int[m];
    assignment = new int[m];
    en = new int[n];
    for(int i = 0;i<n;i++){
       cin>>arr_batch[i];
    }
    for(int i = 0;i<m;i++){
        cin>>arr_file[i];
    }
    cout<<"File Number File Size Block Number Block Size Fragment\n";
    for(int i = 0;i<m;i++){
         for(int j = 0; j<n ;j++){
             sub =0;
              if(arr_batch[j]>arr_file[i] && en[j] != 1){
                   sub = arr_batch[j] - arr_file[i];
                   en[j] = 1;
                   assignment[i]=j;
              }
         }
      cout<<i<<' '<<arr_file[i]<<' '<<assignment[i]<<' '<<arr_batch[assignment[i]]<<' '<<sub<<endl;
    }
 return 0;
}

