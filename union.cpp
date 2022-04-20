#include<iostream>
using namespace std;


typedef union myun
{
    /* data */
    int favnum;
    char car;
    float amount;

}myuni;

int main(){
    myuni diksha;
    diksha.favnum=8;
    diksha.car='L';
    diksha.amount=90.77;

    // cout<<diksha.favnum<<endl;
    // cout<<diksha.car<<endl;
    // cout<<diksha.amount<<endl;



// Enum 
 enum meal{breakfast , lunch, dinner};
 meal m1=lunch;
 meal m2=breakfast;
 meal m3=dinner;
 cout<<breakfast<<endl;
  cout<<lunch<<endl;
   cout<<dinner<<endl;
   cout<<m1<<endl;
   cout<<m2<<endl;
   cout<<(m2==3)<<endl;

    return 0;
}