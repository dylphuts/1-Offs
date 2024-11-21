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
  string revealedDoor="";
  string switchAnswer="";
  double wins=0;
  double loses=0;

 public:
  int cycles=0;
  double average;
  int randomize();
  void assignDoor(int num);
  void selectDoor();
  void promtSwitch();
  void revealGoat();
  void switchDoor(string ans);
  void showDoors();
  void check();
  void loop();
  montyHall();
};

#endif 
