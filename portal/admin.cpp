#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"admin.h"
using namespace std;

Admin::Admin(string &userName){
    this->userName=userName;
    showMenu();
}
void Admin::showMenu(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;
    cout<<"1. Register a student"<<endl;
    cout<<"2. Remove a student"<<endl;
    cout<<"3. Register a faculty member"<<endl;
    cout<<"4. Remove a faculty member"<<endl;
    cout<<"5. Announcement for students"<<endl;
    cout<<"6. Announcement for faculties"<<endl;
    cout<<"7. Announcement for parents"<<endl;
    cout<<"8. Mails"<<endl;
    cout<<"9. Mail to University"<<endl;
    cout<<"10. Logout"<<endl<<endl;

    cout<<"Enter an option: ";
    cin>>opt;
    system("CLS");
    menuWorker();
}
void Admin::menuWorker(){
    switch(opt){
    case 1:
        registerStudent();
        break;
    case 2:
        removeStudent();
        break;
    case 3:
        registerFaculty();
    case 4:
        removeFaculty();
        break;
    case 5:
        announcementStudnet();
        break;
    case 6:
        announcementFaculty();
        break;
    case 7:
        announcementParent();
        break;
    case 8:
        mails();
        break;
    case 9:
        mailTo();
        break;
    case 10:
        performLogin();
        break;
    default:
        showMenu();
    }
}
void Admin::registerStudent(){
}
void Admin::removeStudent(){
}
void Admin::registerFaculty(){
}
void Admin::removeFaculty(){
}
void Admin::announcementStudnet(){
}
void Admin::announcementFaculty(){
}
void Admin::announcementParent(){
}
void Admin::mails(){

}
void Admin::mailTo(){

}
