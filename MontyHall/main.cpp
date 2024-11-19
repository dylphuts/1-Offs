#include <iostream>
#include <cstdlib>
#include "montyHall.h"

using namespace std;

void drawDoors();

int main(){
  int cycles=0;
  montyHall test;
  cout<<"Welcome to the Monty Hall Paradox."<<endl;
  cout<<endl;
  cout<<"You are to choose one of the 3 doors and try to get the car hidden bedind the doors and to avoid the goats behind the other doors"<<endl;
  cout<<endl;
  cout<<"How many times should this be played?: ";
  cin>>cycles;
  test.cycles=cycles;
  cout<<endl;
  drawDoors();
  test.assignDoor(test.randomize());
  test.selectDoor();
  test.revealDoor();
  return 0;
}

void drawDoors(){
  cout<<"Here are your three doors:"<<endl;
  cout<<"       [1] [2] [3]"<<endl;
  cout<<endl;

}
