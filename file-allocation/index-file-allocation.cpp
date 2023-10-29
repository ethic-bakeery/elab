#include <iostream>
using namespace std;
int main() {
 int n,*size,**store_val;
    string *alpha,search;
    bool flag = true;
    cin>>n;
    alpha = new string[n];
    size  = new int[n];
    store_val = new int*[n];

    for (int i =0 ;i<n;i++)
      store_val[i] = new int[20];

    for(int i = 0 ; i<n ; i++){
       
       cin>>alpha[i]>>size[i];
        for(int j = 0; j<size[i] ;j++){
       
           cin>>store_val[i][j];
        }
    }
  cin>>search;
  for (int i =0 ;i<n ;i++){
   
       if(search == alpha[i])
       { flag = false;
         cout<<"Filename No.of blocks\n"<<alpha[i]<<' '<<size[i]<<endl<<"Blocks Occupied\n";
       
         for(int j = 0; j<size[i]-1 ;j++){
            cout<<store_val[i][j]<<' ';
         }
         cout<<store_val[i][size[i]-1];
       }
  }
 
  if (flag) {
      cout<<"File Not Found";

  }
 return 0;
}
