#ifndef ADMIN_H
#define ADMIN_H
#include<string>
using namespace std;

class Admin{
public:
    Admin(string &userName);
private:
    void showMenu();
    void menuWorker();
    void registerStudent();
    void removeStudent();
    void registerFaculty();
    void removeFaculty();
    void announcementStudnet();
    void announcementFaculty();
    void announcementParent();
    void mails();
    void mailTo();
    string userName;
    int opt;
};
#endif // ADMIN_H
