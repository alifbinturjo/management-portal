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
    string userName;
    int opt;
};

#endif // STUDENT_H
