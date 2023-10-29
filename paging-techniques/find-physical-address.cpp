
#include <iostream>
using namespace std;
int main() {

int m=15;
int p,n;
int pt[100];
int f,offset;
int la,pa;
int i;
int choice=0;
scanf("%d",&p);

n=m/p;

for(i=0;i<n;i++)
{
cin>>pt[i];
}


cin>>la;
f=la/p;
offset=la%p;
pa=(pt[f]*p)+offset;
cout<<pa;

 return 0;
}

