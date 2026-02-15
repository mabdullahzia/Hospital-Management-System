#include<iostream>
#include"Hospital.h"
using namespace std;

int main(){
    Hospital h;
    int choice;
    do{
        cout<<"1.Add 2.DisplayAll 3.ByDept 4.SearchID 0.Exit:";cin>>choice;
        switch(choice){
            case 1:h.addPatient();break;
            case 2:h.displayAll();break;
            case 3:{
                string d;cin.ignore();
                cout<<"Department:";getline(cin,d);
                h.displayByDepartment(d);
                break;
            }
            case 4:{
                int id;cout<<"Enter ID:";cin>>id;
                Patient *p=h.searchById(id);
                if(p) p->display();
                else cout<<"Patient not found\n";
                break;
            }
        }
    }while(choice!=0);
}
