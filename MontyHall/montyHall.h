#ifndef MONTYHALL_H
#define MONTYHALL_H

#include <string>
using namespace std;

class montyHall{
 private:
  string door1="G";
  string door2="G";
  string door3="G";
  string selected="";
  double wins=0;
  double loses=0;

 public:
  int cycles=0;
  double average;
  int randomize();
  void assignDoor(int num);
  void revealDoor();
  void selectDoor();
  void promtSwitch();
  void switchDoor();
  void showDoors();
  void check();
  void loop();
  montyHall();
};

#endif 
