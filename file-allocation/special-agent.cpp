#include <iostream>
using namespace std;
int main() {
 int n , *arr , m;
    bool flag = true;
    cin>>n;
    arr = new int[n];
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    cin>>m;
    for(int i = 0;i<n;i++){
       if(m==arr[i]){
        flag = false;
        cout<<arr[i]<<" is present at location "<<i+1;     
       }
    }
   if(flag){
     cout<<m<<" is not present in array";
   }
 return 0;
}

