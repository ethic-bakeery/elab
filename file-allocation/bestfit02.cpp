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
   cout<<"Fileno:";
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
   
    }

    for(int j = 0;j<m;j++){
        if(alloc[j] != 0)
        cout<<' '<<j+1;
    }
   cout<<endl<<"Filesize:";
    for(int j = 0;j<m;j++){
        if(alloc[j]!=0)
        cout<<' '<<arr_file[j];
    }
   cout<<endl<<"Blockno:";
   for(int j = 0;j<m;j++){
     if(alloc[j]!=0)
     cout<<' '<<alloc[j];
   }
  cout<<endl<<"Blocksize:";
  for(int j = 0;j<m;j++){
         if(alloc[j]!=0)
        cout<<' '<<copy[alloc[j]-1];
  }
   cout<<endl<<"Fragment:";
   for(int j = 0;j<m;j++){
        if(alloc[j]!=0)
        cout<<' '<<arr_bt[alloc[j]-1];
   }
 return 0;
}

