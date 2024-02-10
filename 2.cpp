#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<cstdio>
struct EmployeeInfo {
    int empId;
    char empName[20];
    double empSalary;


    //setters
    setempId(int id) {
        this->empId=id;
    }
    setempName(char* name) {
        strcpy(this->empName,name);
    }
    setempSalary(int sal) {
        this->empSalary=sal;
    }

//	    getters
    int getempId() {
        return this->empId;
    }
    char* getempName() {
        return this->empName;
    }
    double getempSalary() {
        return this->empSalary;
    }

    //default constructor
    EmployeeInfo() {
        printf("\ndefault");
        this->empId=0;
        strcpy(this->empName,"NULL");
        this->empSalary=0;
    }

    //parameterized constructor
    EmployeeInfo(int id,char* name, double sal) {
        printf("\nPara");
        this->empId=id;
        strcpy(this->empName,name);
        this->empSalary=sal;
    }

    void display() {
        printf("\nDisplay");
        printf("\nId     = %d",this->empId);
        printf("\nName   = %s",this->empName);
        printf("\nSalary = %.1lf",this->empSalary);
    }

};

int main() {
    EmployeeInfo e1,e2,e3(30,"vishankh",45000);

    e1.setempId(10);
    e1.setempName("Shekhar");
    e1.setempSalary(30000);

    printf("\ne1 values");
    printf("\nId     = %d",e1.getempId());
    printf("\nName   = %s",e1.getempName());
    printf("\nSalary = %.1lf",e1.getempSalary());

    printf("\n\ne2 values");
    printf("\nId     = %d",e2.getempId());
    printf("\nName   = %s",e2.getempName());
    printf("\nSalary = %.1lf",e2.getempSalary());

    printf("\n\ne3 values");
    printf("\nId      = %d",e3.getempId());
    printf("\nName    = %s",e3.getempName());
    printf("\nSalary  = %.1lf",e3.getempSalary());

    e1.display();
    e2.display();
    e3.display();

}

