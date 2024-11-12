#include "montyHall.h"
#include <iostream>
#include <cstdlib>

using namespace std;

montyHall::montyHall(){
  door1=false;
  door2=false;
  door3=false;
}

int montyHall::randomize(){
  int randomNumber=1+ (rand() %3);
  return randomNumber;
}

void montyHall::assignDoor(int num){
  if(num==1){
    door1=true;
  }
  else if(num==2){
    door2=true;
  }
  else if (num==3){
    door3=true;
  }
  else {
    cout<<"Error";
  }
  cout<<num<<endl;
}
