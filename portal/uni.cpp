#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"uni.h"
using namespace std;

Uni::Uni(string &userName){
    this->userName=userName;
    showMenu();
}
void Uni::showMenu(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;
    cout<<"1. Register an admin"<<endl;
    cout<<"2. Remove an admin"<<endl;
    cout<<"3. Announcement for admins"<<endl;
    cout<<"4. Mails"<<endl;
    cout<<"5. Logout"<<endl<<endl;

        cout<<"Enter an option: ";
        cin>>opt;



    system("CLS");
    menuWorker();
}
void Uni::menuWorker(){
    switch(opt){
    case 1:
        registerAdmin();
        break;
    case 2:
        removeAdmin();
        break;
    case 3:
        announcement();
    case 4:
        mails();
        break;
    case 5:
        performLogin();
        break;
    default:
        showMenu();
    }
}
void Uni::registerAdmin(){

}
void Uni::removeAdmin(){

}
void Uni::announcement(){

}
void Uni::mails(){

}
