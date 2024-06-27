#ifndef LOGIN_H
#define LOGIN_H
#include<string>
using namespace std;

class Login{
public:
    Login(const int &loginType,const string &userName,const string &password);
    bool validate() const;
private:
    int loginType;
    string userName;
    string password;
    string fileName;
    bool checkValidity() const;
};

#endif // LOGIN_H
