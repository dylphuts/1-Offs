#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std; 

void generateData(string name);

int main(){
    cout<<"Generating numbers:"<<endl;
    generateData("testData");
}

void generateData(string name){
    ofstream fileName(name + ".txt");
    int size = 100;

    for(int i=0; i<size; i++ ){
        int random = rand() % 101;
        fileName<<random<<endl;
    }
    cout<<"data loaded"<<endl;
}