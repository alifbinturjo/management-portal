#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"student.h"
using namespace std;

Student::Student(string &userName){
    this->userName=userName;
    showMenu();
}
void Student::showMenu(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;
}
