#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;

class Student{
public:
    Student(string &userName);
private:
    void showMenu();
    string userName;
};

#endif // STUDENT_H
