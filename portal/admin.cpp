#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<sstream>
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
    system("CLS");
    cout<<"Register student username: ";
    cin>>stuUser;
    cout<<"Password: ";
    cin>>stuPass;
    ofstream file;
    file.open("logindata/students.txt",ios::app);
    file<<stuUser<<" "<<stuPass<<endl;
    file.close();
    cout<<endl<<"Registered"<<endl<<endl;
    cout<<"Student nickname: ";
    cin>>nickname;
    cout<<"Major: ";
    cin>>major;
    cout<<"CGPA: ";
    cin>>cgpa;

    file.open("generaldata/allstudents.txt",ios::app);
    file<<stuUser<<" "<<nickname<<" "<<major<<" "<<cgpa<<endl;
    file.close();
    cout<<endl<<"Successful"<<endl;
    system("PAUSE");
    showMenu();
}
void Admin::removeStudent(){
    system("CLS");
    cout<<"Username to remove: ";
    cin>>stuUser;
    vector<string>temp;
    ifstream file("logindata/students.txt");

    found=false;
    while(getline(file,line)){
        stringstream ss(line);
        ss>>tempUsername>>tempPass;

        if(tempUsername!=stuUser) temp.push_back(line);
        else found=true;
    }
    file.close();
    if(found){
        ofstream file("logindata/students.txt");
        for(auto it:temp){
            file<<it<<endl;
        }
        file.close();
        vector<string>temp2;
        ifstream file2("generaldata/allstudents.txt");
        while(getline(file2,line)){
            stringstream ss(line);
            ss>>tempUsername>>major>>cgpa;

            if(tempUsername!=stuUser) temp2.push_back(line);
        }
        file2.close();
        ofstream file3("generaldata/allstudents.txt");
        for(auto it:temp2){
            file3<<it<<endl;
        }
        file3.close();
        cout<<endl<<"Removed"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        cout<<endl<<"Not found"<<endl;
        system("PAUSE");
        showMenu();
    }
}
void Admin::registerFaculty(){
    system("CLS");
    cout<<"Register faculty member username: ";
    cin>>facUser;
    cout<<"Password: ";
    cin>>facPass;
    ofstream file;
    file.open("logindata/faculty.txt",ios::app);
    file<<facUser<<" "<<facPass<<endl;
    file.close();
    cout<<endl<<"Registered"<<endl<<endl;
    cout<<"Faculty member nickname: ";
    cin>>nickname;
    cout<<"Department: ";
    cin>>dept;

    file.open("generaldata/allfaculties.txt",ios::app);
    file<<facUser<<" "<<nickname<<" "<<dept<<endl;
    file.close();
    cout<<endl<<"Successful"<<endl;
    system("PAUSE");
    showMenu();
}
void Admin::removeFaculty(){
    system("CLS");
    cout<<"Username to remove: ";
    cin>>facUser;
    vector<string>temp;
    ifstream file("logindata/faculty.txt");

    found=false;
    while(getline(file,line)){
        stringstream ss(line);
        ss>>tempUsername>>tempPass;

        if(tempUsername!=facUser) temp.push_back(line);
        else found=true;
    }
    file.close();
    if(found){
        ofstream file("logindata/faculty.txt");
        for(auto it:temp){
            file<<it<<endl;
        }
        file.close();
        vector<string>temp2;
        ifstream file2("generaldata/allfaculties.txt");
        while(getline(file2,line)){
            stringstream ss(line);
            ss>>tempUsername>>dept;

            if(tempUsername!=facUser) temp2.push_back(line);
        }
        file2.close();
        ofstream file3("generaldata/allfaculties.txt");
        for(auto it:temp2){
            file3<<it<<endl;
        }
        file3.close();
        cout<<endl<<"Removed"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        cout<<endl<<"Not found"<<endl;
        system("PAUSE");
        showMenu();
    }
}

void Admin::announcementStudnet(){
    fileName="announcementdata/student.txt";
    funcAnnouncement();
}
void Admin::announcementFaculty(){
    fileName="announcementdata/faculty.txt";
    funcAnnouncement();
}
void Admin::announcementParent(){
    fileName="announcementdata/parent.txt";
    funcAnnouncement();
}
void Admin::mails(){
    system("CLS");
    ifstream file("announcementdata/university.txt");
    while(getline(file,mailing)){
        cout<<mailing<<endl<<endl;
    }
    file.close();
    cout<<"Enter delete to delete or anything else to go back: ";
    cin>>choice;
    if(choice=="delete"){
        ofstream file("announcementdata/university.txt");
        file.close();
        cout<<endl<<"Deleted"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        showMenu();
    }
}
void Admin::mailTo(){
    fileName="announcementdata/admin.txt";
    funcAnnouncement();
}
void Admin::funcAnnouncement(){
    system("CLS");
    cout<<"Write in a single line: "<<endl<<endl;
    cin.ignore();
    getline(cin,announce);

        ofstream file;
        file.open(fileName,ios::app);
        file<<announce<<endl;
        file.close();
        cout<<endl<<"Successful"<<endl;
        system("PAUSE");
        showMenu();
}
