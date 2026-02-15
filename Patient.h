#ifndef PATIENT_H
#define PATIENT_H
#include <string>
using namespace std;

class Patient {
public:
    int id;
    string name;
    int age;
    string department;
    string disease;

    Patient(int i, string n, int a, string dpt, string dis);
};

#endif
