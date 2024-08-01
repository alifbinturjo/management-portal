#ifndef UNI_H
#define UNI_H
#include<string>

using namespace std;

class Uni{
public:
    Uni(string &userName);

private:
    void showMenu();
    void menuWorker();
    void registerAdmin();
    void removeAdmin();
    void announcement();
    void mails();
    string userName;
    int opt;
    string adminUsername;
    string adminPass;
    string line;
    bool found;
    string tempUsername;
    string tempPass;
    string announce;
    string mailing;
    string choice;
};

#endif // UNI_H
