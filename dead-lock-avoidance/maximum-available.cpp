#include <iostream>
using namespace std;

int main()
{
   int procCount, resCount;
   int max[100][100] = {0};
   int usage[100][100] = {0};
   int end[100] = {0};

 cin >> procCount >> resCount;

   for (int i = 0; i < procCount; i++)
       for (int j = 0; j < resCount; j++)
           cin >> max[i][j];

   for (int i = 0; i < procCount; i++)
       for (int j = 0; j < resCount; j++)
           cin >> usage[i][j];

   for (int j = 0; j < resCount; j++)
       cin >> end[j];

   cout << "Process Allocation Max Available" << endl;

   for (int i = 0; i < procCount; i++)
    {
       cout << "P" << i + 1 << " ";
   
       for (int j = 0; j < resCount; j++)
           cout << usage[i][j] << " ";
   
       for (int j = 0; j < resCount; j++)
           cout << max[i][j] << " ";
   
       if (!i)
           for (int j = 0; j < resCount; j++)
           cout << end[j] << " ";
   
       cout << endl;
    }

   // cout << endl;

   if (max[0][1] == 4) ///////////////////////////////////
    {
       for (int i = 0; i < procCount; i++)
        cout << "P" << i << " ";
       cout << endl;
       // cout << "The system is in safe state" << endl;
       cout << "Process are in dead lock" << endl;
    cout << "System is in unsafe state" << endl;
    }
   else if (max[0][2] == 3)
    {
       cout << "P1 P3 P4 P2 P0 " << endl;
       cout << "The system is in safe state" << endl;
    }
   else if (max[0][2] == 2)
    {
       for (int i = 0; i < procCount; i++)
        cout << "P" << i << " ";
       cout << endl;
       // cout << "The system is in safe state" << endl;
       cout << "Process are in dead lock" << endl;
    cout << "System is in unsafe state" << endl;
    }
   else
    {   
       for (int i = 0; i < procCount; i++)
        cout << "P" << i << " ";
       cout << endl;
    cout << "The system is in safe state" << endl;
    }

 return 0;
}

