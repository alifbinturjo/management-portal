#ifndef UNI_H
#define UNI_H
#include<string>
using namespace std;

class Uni{
public:
    Uni(string &userName);

private:
    void menuWorker();
    void showMenu();
    void registerAdmin();
    void removeAdmin();
    void announcement();
    void message();
    string userName;
    int opt;
};

#endif // UNI_H
