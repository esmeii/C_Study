#include <iostream>
using namespace std;
int BoxVolume(int x, int y, int z){ return x*y*z;}
int BoxVolume(int x, int y) { return x*y*1; }
int BoxVolume(int x) { return x*1*1; }
int BoxVoluem(){ return 1*1*1; }
int main(){
  cout<<"[3,3,3]"<<BoxVolume(3,3,3)<<endl;
  cout<<"[5,5,D]"<<BoxVolume(5,5)<<endl;
  cout<<"[7,D,D]"<<BoxVolume(7)<<endl;
  cout<<"[D,D,D]"<<BoxVolume()<<endl;
  return 0;
}
