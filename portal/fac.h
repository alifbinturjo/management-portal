#ifndef FAC_H
#define FAC_H
#include<string>
using namespace std;

class Fac{
public:
    Fac(string &userName);
private:
    void showMenu();
    void menuWorker();
    void cgpaMod();
    void mails();
    void mailTo();
    void myDetails();
    string userName;
    int opt;
    string stuUser;
    string tempUsername;
    string nickname;
    string major;
    string cgpa;
    string anoName;
    string anoMaj;
    string newCG;
    bool found;
    string line;
    string mailing;
    string choice;
    string writeM;
    string dept;
};
#endif // FAC_H
