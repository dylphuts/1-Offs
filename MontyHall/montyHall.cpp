#include "montyHall.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

montyHall::montyHall(){
  door1="G";
  door2="G";
  door3="G";
}

int montyHall::randomize(){
  srand(static_cast<unsigned>(time(0)));
  int randomNumber= (rand() %3)+1;
  return randomNumber;
}

void montyHall::assignDoor(int num){
  if(num==1){
    door1="C";
  }
  else if(num==2){
    door2="C";
  }
  else if (num==3){
    door3="C";
  }
  else {
    cout<<"Error";
  }
  revealDoor();
  //cout<<num<<endl;
}


void montyHall::revealDoor(){
  int random;
  while (true) {
   random = (rand() % 3) + 1; 
    if (random == 1 && door1 != "C") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [G] [2] [3]" << endl;
      door1 = "R";
      break;
    } 
    else if (random == 2 && door2 != "C") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [1] [G] [3]" << endl;
      door2 = "R";
      break;
    } 
    else if (random == 3 && door3 != "C") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [1] [2] [G]" << endl;
      door3 = "R";
      break;
    }

  }
}
