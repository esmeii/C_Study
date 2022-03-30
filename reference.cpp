#include<iostream>
using namespace std;

int main(void){
	int num1 = 1020;
    int &num2 = num1;
    
    num2 = 3040;
    cout<<"value "<<num1<<endl;
    cout<<"reference "<<num2<<endl;
    
    cout<<"value "<<&num1<<endl;
    cout<<"reference "<<&num2<<endl;
    
    return 0;
    }
