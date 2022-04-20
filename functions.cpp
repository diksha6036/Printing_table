#include<iostream>
using namespace std;

// int sum(int a,int b){
//       int c=a+b ;
//       return c;
// }
 
int sum(int a , int b);
void greeting(void );
int main(){
    int num1 , num2 ;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"The sum of num1 and num2 is:"<<sum(num1,num2)<<endl;

     greeting();
    //  cout<<endl;

    return 0;
}
int sum(int a,int b){
      int c=a+b ;
      return c;
}

void greeting(){
    cout<<"Hey! Diksha\n";
}