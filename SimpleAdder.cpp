#include <iostream>
//열혈 c++의 예제
// std out과 std in 예제
int main(){
  int val1;
  std::cout<<"첫번째 숫자입력: ";
  std::cin>>val1;
  
  int val2;
  std::cout<<"두번째 숫자입력: ";
  std::cin>>val2;
  
  int result=val1+val2;
  std::cout<<"덧셈 결과: "<<result<<std::endl;
  
  return 0;
  
}
