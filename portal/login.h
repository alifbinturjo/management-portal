#ifndef LOGIN_H
#define LOGIN_H
#include<string>
using namespace std;

class Login{
public:
    Login();
    bool getUser();
    string getUserName();
    int getLoginType();
private:
    bool validate();
    int loginType;
    string userName;
    string password;
    string fileName;
    string line;
    string storedUser;
    string storedPass;
    size_t pos;
    string uniUser;
    string uniPass;
    bool checkUni;
};

#endif // LOGIN_H
