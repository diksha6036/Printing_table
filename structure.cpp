#include <iostream>
using namespace std;

 typedef struct structure
{
    /* data */
    int first;
    char second;
    bool third;
} mystr;

int main()
{

    mystr diksha;
    diksha.first = 1;
    diksha.second = 'd';
    diksha.third = true;

    cout<<"The value of first is "<<diksha.first<<endl;
    cout<<"The value of second is "<<diksha.second<<endl;
    cout<<"The value of third is "<<diksha.third<<endl;

    return 0;
}