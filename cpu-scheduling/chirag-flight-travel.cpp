#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int serv[n], pos[100];
  
  //Input arrival times in arr[]
  for(int i=0; i<n; i++) {
    cin>>serv[i];
    pos[serv[i]] = i+1;
  }
    
  //Sort arr
  for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
      if(serv[i]>serv[j]) {
        int temp = serv[i];
        serv[i] = serv[j];
        serv[j] = temp;
      }
  
  //Declare wait[], turn[], serv[] 
  int wait[n], turn[n];
  wait[0] = 0;
  turn[0] = serv[0];
  
  //Initialise sum turnaround and sum wait
  int sumTurn = turn[0], sumWait=0;
  
  //Compute waiting and turnaround time
  for(int i=1; i<n; i++) {
    wait[i] = serv[i-1]+wait[i-1];
    turn[i] = serv[i]+turn[i-1];
    sumTurn += turn[i];
    sumWait+=wait[i];
  }
  
  //Print
  cout<<"Gnatt Chart for Waiting time=";
  for(int i=1; i<n; i++) cout<<wait[i]<<" ";
  cout<<"\nAverage WT="<<sumWait/n;
  cout<<"\nGnatt Chart for Turn Around Time=";
  for(int i=0; i<n; i++) cout<<turn[i]<<" ";
  cout<<"\nAverage TAT="<<sumTurn<<"\n";
  
  for(int i=0; i<n; i++) {
    cout<<"P"<<pos[serv[i]]<<" "<<serv[i]<<" "<<wait[i]<<" "<<turn[i]<<"\n";
  }
    
 return 0;

}
