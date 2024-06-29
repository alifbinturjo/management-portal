#include<iostream>
#include<stdlib.h>
#include<fstream>
#include"headers.h"
#include"login.h"
using namespace std;

Login::Login(){
    checkUni=false;
    ifstream file("logindata/university.txt");
    getline(file,line);
    file.close();
    pos=line.find(',');
    if(pos==string::npos){
        checkUni=true;
        cout<<"No university registered"<<endl<<endl;
        cout<<"Register an username: ";
        cin>>uniUser;
        cout<<"Password: ";
        cin>>uniPass;
        ofstream file("logindata/university.txt");
        file<<uniUser<<","<<uniPass<<endl;
        file.close();
        cout<<endl<<"Registered"<<endl;
        system("PAUSE");
    }
}
bool Login::getUser(){
    system("CLS");
    if(checkUni){
        userName=uniUser;
        loginType=5;
        return true;
    }
    cout<<"LOGIN"<<endl<<endl;
    cout<<"1. Student"<<endl;
    cout<<"2. Faculty member"<<endl;
    cout<<"3. Parent"<<endl;
    cout<<"4. Admin"<<endl;
    cout<<"5. Univesity"<<endl<<endl;

        cout<<"Enter login type: ";
        cin>>loginType;


    cout<<endl;

    switch(loginType){
        case 1: fileName="logindata/students.txt"; break;
        case 2: fileName="logindata/faculty.txt"; break;
        case 3: fileName="logindata/parents.txt"; break;
        case 4: fileName="logindata/admins.txt"; break;
        case 5: fileName="logindata/university.txt"; break;
        default: getUser();
    }
    cout<<"Username: ";
    cin>>userName;
    cout<<"Password: ";
    cin>>password;
    return validate();
}
bool Login::validate(){
    ifstream loginFile(fileName);
    while(getline(loginFile,line)){
        pos=line.find(',');
        storedUser=line.substr(0,pos);
        storedPass=line.substr(pos+1);
        if(userName==storedUser&&password==storedPass){
            loginFile.close();
            return true;
        }
    }
    loginFile.close();
    getUser();
}
string Login::getUserName(){
    return userName;
}
int Login::getLoginType(){
    return loginType;
}
