#include <stdio.h>
#include <stdlib.h>
#include<cstring>
#include<string.h>
struct StudentInfo {
    int rollNo;
    char studName[20];
    int marks;

    //default constructor definiton
    StudentInfo() {
        this->rollNo=0;
        strcpy(this->studName,"NULL");
        this->marks=0;
    }

    //parameterized constructor definition
    StudentInfo(int roll,const char* name,int marks) {
        this->rollNo=roll;
        strcpy(this->studName,name);
        this->marks=marks;
    }

    //setters definition
    void setRollNo(int roll) {
        this->rollNo=roll;
    }
    void setStudName(const char* name) {
        strcpy(this->studName,name);
    }
    void setMarks(int marks) {
        this->marks=marks;
    }

    //getters
    int getRollNo() {
        return this->rollNo;
    }

    char* getStudName() {
        return this->studName;
    }
    int getMarks() {
        return this->marks;
    }

    void display() {

        printf("\nDisplay function");
        printf("\nRollNo   = %d",this->rollNo);
        printf("\nStudName = %s",this->studName);
        printf("\nMarks    = %d",this->marks);

    }

};
int main() {
    //Object creation
    StudentInfo s1,s2,s3(30,"Arnav",
                         95);       //default constructors called for s1,s2 for s3 parameterized called

    //setters
    s1.setRollNo(10);
    s1.setStudName("Suraj");
    s1.setMarks(80);

    //getters
    printf("\ns1 values using setters");
    printf("\nRollNo   = %d",s1.getRollNo());
    printf("\nStudName = %s",s1.getStudName());
    printf("\nMarks    = %d",s1.getMarks());

    //defaultconstructor values
    printf("\n\ns2 values using default constructor");
    printf("\nRollNo   = %d",s2.getRollNo());
    printf("\nStudName = %s",s2.getStudName());
    printf("\nMarks    = %d",s2.getMarks());

    //parameterized constructor values
    printf("\n\ns3 values using parameterized constructor");
    printf("\nRollNo   = %d",s3.getRollNo());
    printf("\nStudName = %s",s3.getStudName());
    printf("\nMarks    = %d",s3.getMarks());

    s1.display();
    s2.display();
    s3.display();
}
