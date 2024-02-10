#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<cstdio>
struct AdminInfo {
    int adminId;
    char adminName[20];
    double adminSalary;
    double adminAllowance;


    void setAdminId(int id) {
        this->adminId=id;
    }
    void setAdminName(char* name) {
        strcpy(this->adminName,name);
    }
    void setAdminSalary(double sal) {
        this->adminSalary=sal;
    }
    void setAdminAllowance(double allow) {
        this->adminAllowance=allow;
    }

    int getAdminId() {
        return this->adminId;
    }
    char* getAdminName() {
        return this->adminName;
    }
    double getAdminSalary() {
        return this->adminSalary;
    }
    double getAdminAllowance() {
        return this->adminAllowance;
    }

    AdminInfo() {
        this->adminId=0;
        strcpy(this->adminName,"NULL");
        this->adminSalary=0;
        this->adminAllowance=0;
    }

    AdminInfo(int id,char* name,double sal,
              double allow) {
        this->adminId=id;
        strcpy(this->adminName,name);
        this->adminSalary=sal;
        this->adminAllowance=allow;
    }

    void display() {
        printf("\nDisplay");
        printf("\nAdmin Id     = %d",this->adminId);
        printf("\nAdmin Name   = %s",this->adminName);
        printf("\nAdmin Salary = %.1lf",
               this->adminSalary);
        printf("\nAllowance    = %.1lf",
               this->adminAllowance);

    }

};
int main() {
    AdminInfo ad1,ad2,ad3(30,"Nihal",45000,3000);

    ad1.setAdminId(10);
    ad1.setAdminName("Srikant");
    ad1.setAdminSalary(30000);
    ad1.setAdminAllowance(4000);

    printf("\nAdmin 1 info");
    printf("\nAdmin Id     = %d",ad1.getAdminId());
    printf("\nAdmin Name   = %s",ad1.getAdminName());
    printf("\nAdmin Salary = %.1lf",
           ad1.getAdminSalary());
    printf("\nAllowance    = %.1lf",
           ad1.getAdminAllowance());

    printf("\n\nAdmin 2 info");
    printf("\nAdmin Id     = %d",ad2.getAdminId());
    printf("\nAdmin Name   = %s",ad2.getAdminName());
    printf("\nAdmin Salary = %.1lf",
           ad2.getAdminSalary());
    printf("\nAllowance    = %.1lf",
           ad2.getAdminAllowance());

    printf("\n\nAdmin 3 info");
    printf("\nAdmin Id     = %d",ad3.getAdminId());
    printf("\nAdmin Name   = %ss",ad3.getAdminName());
    printf("\nAdmin Salary = %.1lf",
           ad3.getAdminSalary());
    printf("\nAllowance    = %.1lf",
           ad3.getAdminAllowance());
           
           ad1.display();
           ad2.display();
           ad3.display();
}
