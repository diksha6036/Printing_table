#include <iostream>
using namespace std;

int main()
{
    int i, marks[] = {45, 78, 99, 43};
    /* int phymarks[4];
     phymarks[0] = 45;
     phymarks[1] = 66;
     phymarks[2] = 45;
     cout << marks[0] << endl;
     cout << marks[1] << endl;
     cout << marks[2] << endl;
     cout << marks[3] << endl;
     // cout<<marks[4]<<endl;
     cout << phymarks[2] << endl;
     marks[2] = 89;
     cout << marks[2] << endl;


     USING FOR LOOP:-
     for (int i=0; i<4;i++){
         cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
     }

     Using while loop :-
     while (i<4){
         cout<<marks[i]<<endl;
         i++;
     }


     Using Do-while loop:-

      do{
         cout<<"marks are:"<<marks[i]<<endl;
        i++;
     }
     while(i<4); */

    // Pointers and arrays:-
    int *p = marks;
    // cout << "The value of marks[0] is: " << *p << endl;
    // cout << "The value of marks[1] is: " << *(p + 1) << endl;
    // cout << "The value of marks[2] is: " << *(p + 2) << endl;
    // cout << "The value of marks[3] is: " << *(p + 3) << endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    return 0;
}