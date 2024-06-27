#include"login.h"
#include"headers.h"
#include<iostream>
using namespace std;

Login::Login(const int &loginType,const string &userName,const string &password){
    this->loginType=loginType;
    this->userName=userName;
    this->password=password;
    switch(loginType){
        case 1: fileName="students.txt"; break;
        case 2: fileName="faculty.txt"; break;
        case 3: fileName="parents.txt"; break;
        case 4: fileName="admins.txt"; break;
        case 5: fileName="university.txt"; break;
    }
}
bool Login::validate() const{
    return checkValidity();
}
bool Login::checkValidity() const{

}
