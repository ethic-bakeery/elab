#include <iostream>
using namespace std;
int main() {
 int n,*arr,search;
    cin>>n;
    arr = new int[n];
    for(int  i = 0;i<n;i++){
       cin>>arr[i];
    }
    cin>>search;
    cout<<"Sequential file\n";
    for(int i = 0;i<n;i++){
        if(search==arr[i]){
          cout<<search<<" found at location "<<i+1<<endl;
          break;
        }
    }
 return 0;
}

