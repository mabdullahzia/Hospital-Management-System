#ifndef PATIENT_H
#define PATIENT_H
#include<string>
using namespace std;

class Patient{
private:
    int id;
    string name;
    int age;
    string dept;
    string disease;
public:
    Patient(int i,string n,int a,string d,string dis);
    void display() const;

    int getId() const{return id;}
    string getDept() const{return dept;}
};

#endif
