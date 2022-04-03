#include <iostream>
using namespace std;

int increment(int &num){
    return num++;
}
int change(int &num){
    return -num;
}
int main(void){
    int num = 100;
    int &ref = num;
    
    cout<<increment(ref)<<endl;
    cout<<change(ref)<<endl;
    return 0;
}
