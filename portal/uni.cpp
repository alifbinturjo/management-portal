#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<sstream>
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
    system("CLS");
    cout<<"Register admin username: ";
    cin>>adminUsername;
    cout<<endl<<"Password: ";
    cin>>adminPass;
    ofstream file;
    file.open("logindata/admins.txt",ios::app);
    file<<adminUsername<<" "<<adminPass<<endl;
    file.close();
    cout<<endl<<"Registered"<<endl;
    system("PAUSE");
    showMenu();

}
void Uni::removeAdmin(){
    system("CLS");
    cout<<"Username to remove: ";
    cin>>adminUsername;
    vector<string>temp;
    ifstream file("logindata/admins.txt");

    found=false;
    while(getline(file,line)){
        stringstream ss(line);
        ss>>tempUsername>>tempPass;

        if(tempUsername!=adminUsername) temp.push_back(line);
        else found=true;
    }
    file.close();
    if(found){
        ofstream file("logindata/admins.txt");
        for(auto it:temp){
            file<<it<<endl;
        }
        file.close();
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
void Uni::announcement(){
    system("CLS");
    cout<<"Write in a single line: "<<endl<<endl;
    cin.ignore();
    getline(cin,announce);

        ofstream file;
        file.open("announcementdata/university.txt",ios::app);
        file<<announce<<endl;
        file.close();
        cout<<endl<<"Successful"<<endl;
        system("PAUSE");
        showMenu();

}
void Uni::mails(){
    system("CLS");
    ifstream file("announcementdata/admin.txt");
    while(getline(file,mailing)){
        cout<<mailing<<endl<<endl;
    }
    file.close();
    cout<<"Enter delete to delete or anything else to go back: ";
    cin>>choice;
    if(choice=="delete"){
        ofstream file("announcementdata/admin.txt");
        file.close();
        cout<<endl<<"Deleted"<<endl;
        system("PAUSE");
        showMenu();
    }
    else{
        showMenu();
    }
}
