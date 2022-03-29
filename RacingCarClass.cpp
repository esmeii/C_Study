#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST{
  enum{
    ID_LEN = 20, MAX_SPD = 200, FUEL_STEP =2,
    ACC_STEP =10, BRK_STEP = 10
    };
}
class Car{
  private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int carSpeed;
  public:
    void InitMembers(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

vpod Car::InitMembers(char *ID, int fuel){
  strcpy(gamerID, ID);
  fuelGauge = fuel;
  carSpeed = 0;
}
void Car::ShowCarState(){
  cout<<"소유자ID : "<<gamerID<<endl;
  cout<<"연료량 : "<<fuelGauge<<"%"<<endl;
  cout<<"현재 속도 :"<<carSpeed<<"km/s"<<endl;
  
}
void Car::Accel(){
  if(fuelGauge <= 0) return;
  else fuelGauge -= CAR_CONST::FUEL_STEP;
  if((carSpeed+CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_STEP){
    carSpeed = CAR_CONST::MAX_STEP;
    return;
  }
  carSpeed+=CAR_CONST::MAX_STEP;
}
void Car::Break(){
  if(carSpeed < CAR_CONST::BRK_STEP) {
    carSpeed = 0;
    return;
  }
  carSpeed -= CAR_CONST::BRK_STEP;
}
int main(void){
  Car run0;
  run0.InitMembers("run0", 100);
  
  
}
  
  
  
  
  
  
  
  
