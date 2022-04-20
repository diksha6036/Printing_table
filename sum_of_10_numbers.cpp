# include <iostream>
using namespace std;

int main(){
    int a,sum,n;
    cout<<"Enter the number upto which you want to print the sum:";
    cin>>n;
    a=1;
    sum=0;
    while(a<=n){
        sum=sum+a;
        a++;

    }
    cout<<sum<<endl;
    return 0;
}