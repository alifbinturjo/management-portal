#ifndef FAC_H
#define FAC_H
#include<string>
using namespace std;

class Fac{
public:
    Fac(string &userName);
private:
    void showMenu();
    string userName;
};
#endif // FAC_H
