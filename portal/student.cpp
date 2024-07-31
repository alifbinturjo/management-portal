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
    cout<<"1. My details"<<endl;
    cout<<"2. Mails"<<endl;
    cout<<"3. Logout"<<endl;

    cout<<"Enter an option: ";
    cin>>opt;
    system("CLS");
    menuWorker();
}
void Student::menuWorker(){
    switch(opt){
    case 1:
        myDetail();
        break;
    case 2:
        mails();
        break;
    case 3:
        performLogin();
        break;
    default:
        showMenu();
    }
}
void Student::myDetail(){

}
void Student::mails(){

}
