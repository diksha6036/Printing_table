// #include <iostream>
// using namespace std;

// int main(){
//     // cout<<"Control statements"<<endl;
//     int age;
//     cout<<"Enter your age:";
//     cin>>age;
//     if (age<10){
//         cout<<"You r not eligible for programming"<<endl;
//     }
//     else if (age==15){
//         cout<<"you can do coding if you want";
//     }
//     else {
//         cout<<"done\n";
//     }
//     return 0;

// }
//Switch case statements 
#include <iostream>
using namespace std;
 int main(){
     int age;
     cout<<"Enter your currnet age: ";
     cin>>age;
switch (age)
{
case 18:
    /* code */
    cout<<"you are 18"<<endl;

    break;
case 7:
cout<<"Your r seven"<<endl;
 break;

default :
cout<<"default excuted"<<endl;
    break;
}
return 0;
}