#include <iostream>

using namespace std;
void add_one(int& num){ num++; }
void change_sign(int& num){ num = (-num); }
int main()
{
    int num;
    cin>>num;
    add_one(num);
    cout<<num<<endl;
    change_sign(num);
    cout<<num<<endl;

    return 0;
}
