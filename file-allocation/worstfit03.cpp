
#include <iostream>
using namespace std;
int main() {
 int n,m,*arr_bt,*arr_file,*en,*rec,frag;
    cin>>n>>m;
    arr_bt  = new int[n];
    arr_file = new int[m];
    en  = new int[n];
    rec = new int[m];
    for(int i = 0;i<n;i++){
       cin>>arr_bt[i];
    }
    for(int i = 0;i<m;i++){
       cin>>arr_file[i];
    }
 
    for(int i = 0;i<m;i++){
       rec[i]=-1;
     
       for(int j = 0;j<n;j++){
             if(arr_bt[j]>=arr_file[i]&&en[j]!=1){
                 en[j] = 1;
                 rec[i] = j;
                 frag = arr_bt[j] - arr_file[i];
             
                 break;
             }
       }
   
    }
  cout<<"Fileno:";
  for(int j = 0 ;j<m;j++){
    cout<<' '<<j+1;
  }
   cout<<endl<<"Filesize:";
  for(int j = 0;j<m;j++){
     cout<<' '<<arr_file[j];
  }
   cout<<endl<<"Blockno:";
   for(int j = 0;j<m;j++){
     cout<<' '<<rec[j]+1;
   }
   cout<<endl<<"Blocksize:";
   for(int j = 0;j<m;j++){
     if(rec[j]==-1){
       cout<<' '<<1;
        continue;
     }
     cout<<' '<<arr_bt[rec[j]];
   }
  cout<<endl<<"Fragment:";
  for(int j = 0;j<m;j++){
    if(rec[j]==-1){
     cout<<' '<<arr_bt[n-1] - arr_file[j];
      continue;
    }
    cout<<' '<<arr_bt[rec[j]] - arr_file[j];
  }
 return 0;
}
