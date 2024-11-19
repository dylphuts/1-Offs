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
  if(num==1 && door1!="R"){
    door1="C";
  }
  else if(num==2 && door2!="R"){
    door2="C";
  }
  else if (num==3 && door3!="R"){
    door3="C";
  }
  else {
    cout<<"Error";
  }
  selectDoor();
  revealDoor();
  //cout<<num<<endl;
}

void montyHall::selectDoor(){
  cout<<"Please select a door via its number: ";
  cin>>selected;
  if(selected=="1"){
    selected="door1";
  }
  else if(selected=="2"){
    selected="door2";
  }
  else if(selected=="3"){
    selected="door3";
  }
  else{
    cout<<"Not a door"<<endl;
    selectDoor();
  }
}

void montyHall::promtSwitch(){
  string answer="";
  cout<<"Would you like to switch or stay with the door you selected? y/n ";
  cin>>answer;
  if(answer=="y"||answer=="yes"){
    switchDoor();
  }
  else if(answer=="n"||answer=="no"){
    cout<<"you are staying with your original door."<<endl;
  }
  else {
    cout<<"answer unclear please try again"<<endl;
    promtSwitch();
  }
  cout<<endl;
  cout<<"lets see the results."<<endl;
  showDoors();
}

void montyHall::switchDoor(){
  if(door1=="R" && selected=="door2"){
    selected="door3";
  }
  else if (door1=="R" && selected=="door3"){
    selected="door2";
  }
  else if(door2=="R" && selected=="door1"){
    selected="door3";
  }
  else if (door2=="R" && selected=="door3"){
    selected="door1";
  }
  else if(door3=="R" && selected=="door1"){
    selected="door2";
  }
  else if(door3=="R" && selected=="door2"){
    selected="door1";
  }
  cout<<"your door has been switched"<<endl;
}

void montyHall::revealDoor(){
  int random;
  while (true) {
   random = (rand() % 3) + 1; 
    if (random == 1 && door1 != "C" && selected!="door1") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [G] [2] [3]" << endl;
      door1 = "R";
      break;
    } 
    else if (random == 2 && door2 != "C"&& selected!="door2") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [1] [G] [3]" << endl;
      door2 = "R";
      break;
    } 
    else if (random == 3 && door3 != "C"&& selected!="door3") {
      cout << "Let's reveal one of our doors." << endl;
      cout << "       [1] [2] [G]" << endl;
      door3 = "R";
      break;
    }
  }
  promtSwitch();
}

void montyHall::showDoors(){
  cout << "       ["<<door1<<"] ["<<door2<<"] ["<<door3<<"] "<< endl;
  x
}
