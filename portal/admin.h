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
    void funcAnnouncement();
    string userName;
    int opt;
    string stuUser;
    string stuPass;
    string nickname;
    string major;
    string cgpa;
    bool found;
    string line;
    string tempUsername;
    string tempPass;
    string facUser;
    string facPass;
    string dept;
    string announce;
    string fileName;
    string mailing;
    string choice;
};
#endif // ADMIN_H
