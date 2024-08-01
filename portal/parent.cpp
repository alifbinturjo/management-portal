#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<sstream>
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

    ifstream file("announcementdata/parent.txt");
    while(getline(file,mailing)){
        cout<<mailing<<endl<<endl;
    }
    file.close();
    cout<<"Enter delete to delete or anything else to logout: ";
    cin>>choice;
    if(choice=="delete"){
        ofstream file("announcementdata/parent.txt");
        file.close();
        cout<<endl<<"Deleted"<<endl;
        system("PAUSE");
        performLogin();
    }
    else{
        performLogin();
    }
}
