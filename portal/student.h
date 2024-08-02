#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student{
public:
    Student(string &userName);
private:
    void showMenu();
    void menuWorker();
    void myDetail();
    void mails();
    void parentReg();
    string userName;
    int opt;
    string line;
    string name;
    string major;
    string cgpa;
    string mailing;
    string choice;
    string parentUser;
    string parentPass;
    string getName;
};

#endif // STUDENT_H
