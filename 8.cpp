#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct DistanceInfo
{
    int feet;
    int inch;

    // setters
    void setFeet(int f)
    {
        this->feet = f;
    }
    void setInch(int i)
    {
        this->inch = i;
    }

    // getters
    int getFeet()
    {
        return this->feet;
    }
    int getInch()
    {
        return this->inch;
    }

    DistanceInfo()
    {
        this->feet = 0;
        this->inch = 0;
    }

    DistanceInfo(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    void display()
    {
        printf("\nDisplay");
        printf("\nFeet = %d", this->feet);
        printf("\nInch = %d", this->inch);
    }
};
int main()
{
    DistanceInfo d1, d2, d3(10, 20);

    d1.setFeet(9);
    d1.setInch(22);

    printf("\nDistance 1 Info");
    printf("\nFeet = %d", d1.getFeet());
    printf("\nIncg = %d", d1.getInch());

    printf("\nDistance 2 Info");
    printf("\nFeet = %d", d2.getFeet());
    printf("\nIncg = %d", d2.getInch());

    printf("\nDistance 3 Info");
    printf("\nFeet = %d", d3.getFeet());
    printf("\nIncg = %d", d3.getInch());

    d1.display();
    d2.display();
    d3.display();
}