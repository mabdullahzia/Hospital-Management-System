#include"Hospital.h"
#include<iostream>
using namespace std;


Patient::Patient(int i,string n,int a,string d,string dis){
    id=i;name=n;age=a;dept=d;disease=dis;
}

void Patient::display() const{
    cout<<"ID:"<<id<<" Name:"<<name<<" Age:"<<age
        <<" Dept:"<<dept<<" Disease:"<<disease<<"\n";
}


void Hospital::addPatient(){
    string n,dpt,dis; int a;
    cin.ignore();
    cout<<"Name:";getline(cin,n);
    cout<<"Age:";cin>>a;cin.ignore();
    cout<<"Department:";getline(cin,dpt);
    cout<<"Disease:";getline(cin,dis);
    Patient p(patientCounter++,n,a,dpt,dis);
    patients.push_back(p);
}

void Hospital::displayAll(){
    for(auto &p:patients) p.display();
}

void Hospital::displayByDepartment(const string &d){
    for(auto &p:patients) if(p.getDept()==d) p.display();
}

Patient* Hospital::searchById(int id){
    for(auto &p:patients) if(p.getId()==id) return &p;
    return nullptr;
}
