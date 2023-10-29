Source code

#include <iostream>
#include<climits>
using namespace std;
int main() {
 int n,m,i,j,min,ind;
   cin>>n>>m;
   int a[n],b[m];
    for(i=0;i<n;i++)
     cin>>a[i];
   for(i=0;i<m;i++)
       cin>>b[i];
   for(i=0;i<m;i++){
       min=INT_MAX;
       ind=n;
       for(j=0;j<n;j++){
           if(a[j]>=b[i] && a[j]<min){
               min=a[j];
                ind=j;
   }
        }
       if(ind<n){
        a[ind]-=b[i];
            cout<<"Process"<<i+1<<" is allocated to Block"<<ind+1<<endl;
            cout<<"after p1:";
            for(j=0;j<n;j++)
              cout<<" "<<a[j];
            cout<<endl;
        }
       else{
           a[0]-=b[i];
           cout<<"Process"<<i+1<<" is allocated to Block1"<<endl;
            cout<<"after p1:";
            for(j=0;j<n;j++)
              cout<<" "<<a[j];
            cout<<endl;
        }
    }
 return 0;
}
