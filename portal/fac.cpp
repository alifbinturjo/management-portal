#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<vector>
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
    cout<<"4. My details"<<endl;
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
        myDetails();
        break;
    case 5:
        performLogin();
        break;
    default:
        showMenu();

    }

}
void Fac::cgpaMod(){
    system("CLS");
    cout<<"Username to change: ";
    cin>>stuUser;
    vector<string>temp;
    ifstream file("generaldata/allstudents.txt");

    found=false;
    while(getline(file,line)){
        stringstream ss(line);
        ss>>tempUsername>>nickname>>major>>cgpa;

        if(tempUsername!=stuUser) temp.push_back(line);
        else found=true, anoName=nickname,anoMaj=major;
    }
    file.close();
    if(found){
        cout<<"Enter new CGPA: ";
        cin>>newCG;
        ofstream file("generaldata/allstudents.txt");
        for(auto it:temp){
            file<<it<<endl;
        }
        file<<stuUser<<" "<<anoName<<" "<<anoMaj<<" "<<newCG<<endl;
        file.close();
        cout<<endl<<"Changed"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        cout<<endl<<"Not found"<<endl;
        system("PAUSE");
        showMenu();
    }

}
void Fac::mails(){
    system("CLS");
    ifstream file("announcementdata/faculty.txt");
    while(getline(file,mailing)){
        cout<<mailing<<endl<<endl;
    }
    file.close();
    cout<<"Enter delete to delete or anything else to go back: ";
    cin>>choice;
    if(choice=="delete"){
        ofstream file("announcementdata/faculty.txt");
        file.close();
        cout<<endl<<"Deleted"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        showMenu();
    }
}
void Fac::mailTo(){
    system("CLS");
    cout<<"Write in a single line: "<<endl<<endl;
    cin.ignore();
    getline(cin,writeM);

        ofstream file;
        file.open("announcementdata/factoad.txt",ios::app);
        file<<writeM<<endl;
        file.close();
        cout<<endl<<"Successful"<<endl;
        system("PAUSE");
        showMenu();
}
void Fac::myDetails(){
    system("CLS");
    ifstream file("generaldata/allfaculties.txt");
    while(getline(file,line)){
        stringstream ss(line);
        ss>>tempUsername>>nickname>>dept;

        if(tempUsername==userName){
            cout<<nickname<<endl<<endl;
            cout<<dept<<endl<<endl;
            break;

        }

    }
    file.close();
    system("PAUSE");
    showMenu();
}
