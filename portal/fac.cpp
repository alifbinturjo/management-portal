#include<iostream>
#include<string>
#include<stdlib.h>
#include"headers.h"
#include"fac.h"
using namespace std;

Fac::Fac(string &userName){
    this->userName=userName;
    showMenu();
}
void Fac::showMenu(){
    system("CLS");
    cout<<"Welcome "<<userName<<endl<<endl;

}
