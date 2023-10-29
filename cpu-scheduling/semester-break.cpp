#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
 int input_len , *pri , *bt , temp_wt=0 , temp_tr=0 , sum_wt = 0 , sum_tr = 0;
  cin>>input_len;
  pri = new int[input_len];
  bt = new int[input_len];
  for(int i =0 ;i<input_len;i++){
    cin>>bt[i];
  }
  for(int i =0 ;i<input_len;i++){
    cin>>pri[i];
  }
  for(int i =0 ;i<input_len;i++){
    temp_wt =0;
     for (int j =0; j < i ;j++){
       temp_wt+=bt[j];
     }
    temp_wt-=pri[i];
    temp_tr = temp_wt+bt[i];
    sum_wt+=temp_wt;
    sum_tr += temp_tr;
    cout<<"Passenger"<<i<<' '<<temp_wt<<' '<<temp_tr<<endl;

  }
  float val = (float)sum_wt/(float)input_len;
  printf("Average waiting time=%.6f\n",val);
  val = (float)sum_tr / (float)input_len;
  printf("Average turn around time=%.6f",val);
 return 0;
}

