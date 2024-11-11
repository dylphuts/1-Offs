#ifndef MONTYHALL_H
#define MONTYHALL_H

using namespace std;

class montyHall{
 private:
  bool door1=false;
  bool door2=false;
  bool door3=false;
  int cycles=0;

 public:
  int randomize();
  void assignDoor();

  montyHall();
};

#endif 
