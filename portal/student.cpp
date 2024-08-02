#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<sstream>
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
    cout<<"3. Parent register"<<endl;
    cout<<"4. Logout"<<endl;

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
        parentReg();
        break;
    case 4:
        performLogin();
        break;
    default:
        showMenu();
    }
}
void Student::myDetail(){
    system("CLS");
    ifstream file("generaldata/allstudents.txt");
    while(getline(file,line)){
        stringstream ss(line);
        ss>>getName>>name>>major>>cgpa;

        if(getName==userName){
            cout<<name<<endl<<endl;
            cout<<major<<endl<<endl;
            cout<<cgpa<<endl<<endl;
            break;

        }

    }
    file.close();
    system("PAUSE");
    showMenu();
}
void Student::mails(){
    system("CLS");
    ifstream file("announcementdata/student.txt");
    while(getline(file,mailing)){
        cout<<mailing<<endl<<endl;
    }
    file.close();
    cout<<"Enter delete to delete or anything else to go back: ";
    cin>>choice;
    if(choice=="delete"){
        ofstream file("announcementdata/student.txt");
        file.close();
        cout<<endl<<"Deleted"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        showMenu();
    }
}
void Student::parentReg(){
    system("CLS");
    cout<<"Register parent username: ";
    cin>>parentUser;
    cout<<endl<<"Password: ";
    cin>>parentPass;
    ofstream file;
    file.open("logindata/parents.txt",ios::app);
    file<<parentUser<<" "<<parentPass<<endl;
    file.close();
    cout<<endl<<"Registered"<<endl;
    system("PAUSE");
    showMenu();
}
