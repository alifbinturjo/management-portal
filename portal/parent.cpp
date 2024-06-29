#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"parent.h"
using namespace std;

Parent::Parent(string &userName){
    this->userName=userName;
    mails();
}
void Parent::mails(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;

}
