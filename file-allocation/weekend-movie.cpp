
#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int p=0;p<t;p++)
 {
 long long int n;cin>>n;
 long long int l[n],r[n],a[n];
  for(long long int i=0;i<n;i++)
  cin>>l[i];
  for(long long int i=0;i<n;i++)
  cin>>r[i];
long long int max[n];
 long long int maximum=0;
  for(long long int i=0,j=0;i<n&&j<n;i++)
  {
   a[i]=l[i]*r[i];
   if(a[i]>maximum)
   {
   maximum=a[i];j=0;
   max[j++]=i;max[j]=-1;}
   else if(a[i]==maximum)
   {
   max[j++]=i;max[j]=-1;}
  }
 
  long long int rm=-1,r2[n];
   for(long long int i=0,j=0;max[i]!=-1;i++)
   {
    if(r[max[i]]>rm)
    {
     rm=r[max[i]];j=0;
     r2[j++]=max[i];
    }
    else if(r[max[i]]==rm)
    r2[j++]=max[i];
   }
       cout<<r2[0]+1<<endl;
  
 }
}
