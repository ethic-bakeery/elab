#include <iostream>
using namespace std;
int main() {
 int n, *arr , search , count =0;
    bool flag = true;
    cin>>n;
    arr = new int[n];
    for(int i = 0;i<n;i++){
       cin>>arr[i];
      }
    cin>>search;
    for(int i = 0;i<n;i++){
       if(search == arr[i]){
         flag = false;
         cout<<search<<" is present at location "<<i+1<<endl;
         count++;
       }
    }
    if(!flag){
    cout<<search<<" is present "<<count<<" times in array";
    }
    else{
       cout<<search<<" is not present in array";
    }
 return 0;
}

