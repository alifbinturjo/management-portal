#include"login.h"
#include<iostream>
#include<fstream>
using namespace std;

Login::Login(){

}
void Login::getUser(){

    cout<<"LOGIN"<<endl<<endl;
    cout<<"1. Student"<<endl;
    cout<<"2. Faculty member"<<endl;
    cout<<"3. Parent"<<endl;
    cout<<"4. Admin"<<endl;
    cout<<"5. Univesity"<<endl<<endl;
    while(true){
        cout<<"Enter login type: ";
        cin>>loginType;
        if(loginType>=1&&loginType<=5){
            break;
        }
    }
    cout<<endl;
    cout<<"Username: ";
    cin>>userName;
    cout<<"Password: ";
    cin>>password;
    switch(loginType){
        case 1: fileName="logindata/students.txt"; break;
        case 2: fileName="logindata/faculty.txt"; break;
        case 3: fileName="logindata/parents.txt"; break;
        case 4: fileName="logindata/admins.txt"; break;
        case 5: fileName="logindata/university.txt"; break;
    }
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
    return false;
}

