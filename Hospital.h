#ifndef HOSPITAL_H
#define HOSPITAL_H
#include"Patient.h"
#include<vector>
using namespace std;

class Hospital{
private:
    vector<Patient> patients;
    int patientCounter;
public:
    Hospital(){patientCounter=1;}
    void addPatient();
    void displayAll();
    void displayByDepartment(const string &d);
    Patient* searchById(int id);
};

#endif
