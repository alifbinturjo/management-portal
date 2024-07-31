#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"fac.h"
using namespace std;

Fac::Fac(string &userName){
    this->userName=userName;
    showMenu();
}
void Fac::showMenu(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;
    cout<<"1. CGPA modification"<<endl;
    cout<<"2. Mails"<<endl;
    cout<<"3. Mail to Admins"<<endl;
    cout<<"4. Check department"<<endl;
    cout<<"5. Logout"<<endl<<endl;

    cout<<"Enter an option: ";
    cin>>opt;
    system("CLS");
    menuWorker();
}
void Fac::menuWorker(){
    switch(opt){
    case 1:
        cgpaMod();
        break;
    case 2:
        mails();
        break;
    case 3:
        mailTo();
        break;
    case 4:
        checkDept();
        break;
    case 5:
        performLogin();
        break;
    default:
        showMenu();

    }

}
void Fac::cgpaMod(){

}
void Fac::mails(){

}
void Fac::mailTo(){

}
void Fac::checkDept(){

}
