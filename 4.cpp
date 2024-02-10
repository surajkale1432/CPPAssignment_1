#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct HRInfo
{
    int HRId;
    char  HRName[20];
    double HRSalary;
    double HRCommision;

    void setHRId(int id)
    {
        this->HRId = id;
    }
    void setHRName(const char *name)
    {
        strcpy(this->HRName,name);
    }
    void setHRSalary(double sal)
    {
        this->HRSalary = sal;
    }
    void setHRCommision(double com)
    {
        this->HRCommision = com;
    }

    int getHRId()
    {
        return this->HRId;
    }
    char *getHRName()
    {
        return this->HRName;
    }
    double getHRSalary()
    {
        return this->HRSalary;
    }
    double getHRCommision()
    {
        return this->HRCommision;
    }

    HRInfo()
    {
        this->HRId = 0;
        strcpy(this->HRName, "NULL");
        this->HRSalary = 0;
        this->HRCommision = 0;
    }
    HRInfo(int id,const char *name, double sal,
           double com)
    {
        this->HRId = id;
        strcpy(this->HRName, name);
        this->HRSalary = sal;
        this->HRCommision = com;
    }
    void display()
    {
        printf("\nDisplay");
        printf("\nHR Id     = %d",this->HRId);
        printf("\nHR Name   = %s",this->HRName);
        printf("\nHR Salary = %.1lf", this->HRSalary);
        printf("\nHR Comm   = %.1lf",this->HRCommision);
    }
};
int main()
{
    HRInfo h1, h2, h3(30, "Suraj", 40000, 5000);

    h1.setHRId(10);
    h1.setHRName("Tiger");
    h1.setHRSalary(35000);
    h1.setHRCommision(2500);

    printf("\nHR1 Info");
    printf("\nHR Id     = %d", h1.getHRId());
    printf("\nHR Name   = %s", h1.getHRName());
    printf("\nHR Salary = %.1lf", h1.getHRSalary());
    printf("\nHR Comm   = %.1lf", h1.getHRCommision());

    printf("\n\nHR2 Info");
    printf("\nHR Id     = %d", h2.getHRId());
    printf("\nHR Name   = %s", h2.getHRName());
    printf("\nHR Salary = %.1lf", h2.getHRSalary());
    printf("\nHR Comm   = %.1lf", h2.getHRCommision());

    printf("\n\nHR3 Info");
    printf("\nHR Id     = %d", h3.getHRId());
    printf("\nHR Name   = %s", h3.getHRName());
    printf("\nHR Salary = %.1lf", h3.getHRSalary());
    printf("\nHR Comm   = %.1lf", h3.getHRCommision());
}