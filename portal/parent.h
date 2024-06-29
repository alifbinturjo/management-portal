#ifndef PARENT_H
#define PARENT_H
#include<string>
using namespace std;

class Parent{
public:
    Parent(string &userName);
private:
    void mails();
    string userName;
};

#endif // PARENT_H
