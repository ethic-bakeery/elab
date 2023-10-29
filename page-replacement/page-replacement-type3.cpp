#include <iostream>
#include<list>
using namespace std;
int main()
{
      int tf, tp, hit = 0;
      int p[25], frame[10], arr[25], time[25];
      int m, n, page, flag, k, mt, temp;
      cin>>tp>>tf;
      for(m=0;m<tf;m++)
        frame[m]=-1;
      for(m=0;m<25;m++)
        arr[m] = 0;
      for(m = 0; m < tp; m++)
        cin>>p[m];
        cout<<endl;
  for(m=0; m < tp; m++)
      {
            arr[p[m]]++;
            time[p[m]] = m;
            flag = 1;
            k = frame[0];
            for(n = 0; n < tf; n++)
            {
                  if(frame[n] == -1 || frame[n] == p[m])
                  {
                        if(frame[n] != -1)
                          hit++;
                        flag = 0;
                        frame[n] = p[m];
                        break;
                  }
                  if(arr[k] > arr[frame[n]])
                   k = frame[n];
            }
            if(flag)
            {
                  mt = 25;
                  for(n = 0; n < tf; n++)
                  {
                        if(arr[frame[n]]==arr[k] && time[frame[n]]<mt)
                        {
                              temp = n;
                              mt=time[frame[n]];
                        }
                  }
                  arr[frame[temp]] = 0;
                  frame[temp] = p[m];
            }
            for(n = 0; n < tf; n++)
                 cout<<frame[n]<<" ";
           cout<<endl;
      }
      cout<<"Page fault:"<<hit;
      return 0;
}

