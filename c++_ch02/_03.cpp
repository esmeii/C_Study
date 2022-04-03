#include <iostream>
using namespace std;

void SwapPoint(int *ptr, int *ptr2){
    int &ref1 = *ptr;
    int &ref2 = *ptr2;
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
int main(void){
    int num =5;
    int *ptr = &num;
    int num2 = 10;
    int *ptr2 = &num2;
    SwapPoint(ptr, ptr2);
    cout<<*ptr<<" "<<*ptr2<<endl;
}
