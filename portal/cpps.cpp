#include"headers.h"
#include"login.h"
#include<iostream>
using namespace std;

void getUser(int &loginType,string &userName,string &password){

    cout<<"1. Student"<<endl;
    cout<<"2. Faculty member"<<endl;
    cout<<"3. Parent"<<endl;
    cout<<"4. Admin"<<endl;
    cout<<"5. Univesity"<<endl<<endl;
    cout<<"Enter login type: ";
    cin>>loginType;
    cout<<endl;
    cout<<"Username: ";
    cin>>userName;
    cout<<"Password: ";
    cin>>password;
}
void performLogin(){

    cout<<"Login"<<endl<<endl;
    int loginType;
    string userName;
    string password;
    getUser(loginType,userName,password);

    Login login(loginType,userName,password);
}
