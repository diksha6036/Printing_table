#include<iostream>
using namespace std;

int main(){
     int a = 4;
     int* b=&a;

     // & --> Address of variable
     cout<<"The address of a is "<<&a<<endl;
     cout<<"The address of a is "<<b<<endl;

    // * --> Value at address (Derefrence Operator)
    cout<<"The value at address b is "<<*b<<endl;

    // Pointers to pointers 
    int **c=&b;
    cout <<"The address of b is "<<&b<<endl;
    cout <<"The address of b is "<<c<<endl;
    cout<< "The value at adress c is "<<*c<<endl;
    cout <<"The value at address value is "<<**c<<endl;
    return 0;
}

// ek baar defreference kiya b milgya jo address h a ka  ,,,, and 2nd baar dereference kiya a milgya jo value h 4 