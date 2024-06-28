#ifndef LOGIN_H
#define LOGIN_H
#include<string>
using namespace std;

class Login{
public:
    Login();
    void getUser();
    bool validate();
private:
    int loginType;
    string userName;
    string password;
    string fileName;
    string line;
    string storedUser;
    string storedPass;
    size_t pos;
};

#endif // LOGIN_H
