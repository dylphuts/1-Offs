#include "montyHall.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

montyHall::montyHall(){
  srand(static_cast<unsigned>(time(0)));
  door1="G";
  door2="G";
  door3="G";
  cycles=0;
}

void montyHall::loop(){
  cout<<"Running all other tests"<<endl;
  for(int i=0; i<cycles;i++){
    assignDoor(randomize());
    revealGoat();
    switchDoor(switchAnswer);
    check();
  }
  cout<<"Complete"<<endl;
  cout<<"Wins: "<<wins<<endl;
  cout<<"Loses: "<<loses<<endl;
  average=wins/cycles;
  cout<<"Average: "<<fixed<<setprecision(3)<<average<<endl;
  cout<<"Percentage: "<<fixed<<setprecision(1)<<average*100<<"%"<<endl;
}

void montyHall::check(){
  if(selected=="door1"&&door1=="C"){
    wins++;
  }
  else if(selected=="door2" &&door2=="C"){
    wins++;
  }
  else if(selected=="door3" && door3=="C"){
    wins++;
  }
  else{
    loses++;
  }
}

int montyHall::randomize(){
  int randomNumber= (rand() %3)+1;
  return randomNumber;
}

void montyHall::assignDoor(int num){
  door1="G";
  door2="G";
  door3="G";
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
    cout<<"Error in assigndoor"<<endl;
  }
  //cout<<num<<endl;
}

void montyHall::switchDoor(string ans) {
  if(ans=="yes"){
    if (selected != "door1" && revealedDoor != "door1"){
      selected = "door1";
    }
    else if (selected != "door2" && revealedDoor != "door2"){
      selected = "door2";
    }
    else if (selected != "door3" && revealedDoor != "door3"){
      selected = "door3";
    }
   
  }
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
  revealGoat();
  cout<<"Would you like to switch or stay with the door you selected? y/n ";
  cin>>switchAnswer;
  if(switchAnswer=="y"||switchAnswer=="yes"){
    switchAnswer="yes";
    switchDoor(switchAnswer);
  }
  else if(switchAnswer=="n"||switchAnswer=="no"){
    switchAnswer="no";
    cout<<"you are staying with your original door."<<endl;
  }
  else {
    cout<<"answer unclear please try again"<<endl;
    promtSwitch();
  }
  cout<<endl;
  cout<<"lets see the results."<<endl;
}

void montyHall::revealGoat() {
  if (selected != "door1" && door1 == "G"){

    revealedDoor = "door1";
  }
  else if (selected != "door2" && door2 == "G"){
    revealedDoor = "door2";
  }
  else if (selected != "door3" && door3 == "G"){
    revealedDoor = "door3";
  }
}
