#include"headers.h"
#include"login.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

void performLogin(){

    while(true){
        Login login;
        login.getUser();
        if(login.validate()){
            cout<<endl<<"Login successful"<<endl;
            system("PAUSE");
            system("CLS");
            break;
        }
        else{
            system("CLS");
        }
    }


}
