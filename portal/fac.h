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
    void checkDept();
    string userName;
    int opt;
};
#endif // FAC_H
