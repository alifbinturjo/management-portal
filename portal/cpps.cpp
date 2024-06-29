#include<iostream>
#include<stdlib.h>
#include"headers.h"
#include"login.h"
#include"uni.h"
#include"admin.h"
using namespace std;

void run(){
    performLogin();
}
void performLogin(){
        Login login;

        if(login.getUser()){

            cout<<endl<<"Login successful"<<endl;
            system("PAUSE");

            string userName=login.getUserName();
            int loginType=login.getLoginType();
            goToMenu(userName,loginType);
        }

}
void goToMenu(string &userName,int &loginType){
    switch(loginType){
        case 1:
             cout<<0<<endl;
             break;
        case 2:
             cout<<0<<endl;
             break;
        case 3:
             cout<<0<<endl;
             break;
        case 4:{
             Admin admin(userName);
             break;
        }
        case 5:{
             Uni uni(userName);
             break;
        }
    }
}
