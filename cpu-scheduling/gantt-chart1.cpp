
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int input_len,temp,swap ;
    float waiting_time = 0 , turn_time = 0;
   cin>>input_len;
   string *name_arr = new string[input_len] , temp_str;
   int *process_time_arr = new int[input_len];
  for(int i=0; i<input_len;i++){
     cin>>name_arr[i];
    }
  for(int i=0;i<input_len*2;i++){
    cin>>temp;
    if(i<input_len){
      process_time_arr[i] = temp;
    }
  }

 cout<<"Waiting Time\n";

 for (int i = 0 ;i<input_len; i++){
    temp = 0;
    for (int j = 0; j<i ; j++){
   
        temp += process_time_arr[j];
   
    }
     cout<<"Time Taken for "<<name_arr[i]<<"="<<temp<<endl;

   waiting_time += temp;
 }
  printf("Average Waiting Time=%0.6f",waiting_time/(float)input_len);

  cout<<"\nTurnAround Time\n";

  for (int i = 0;i<input_len;i++){
    temp = 0;
     for (int j = 0; j<=i ; j++){
   
        temp += process_time_arr[j];
   
     }
    turn_time += temp;
   
     cout<<"Time Taken for "<<name_arr[i]<<"="<<temp<<endl;
 
  }
  printf("Average TurnAround Time=%0.6f",turn_time/(float)input_len);

 return 0;
}
