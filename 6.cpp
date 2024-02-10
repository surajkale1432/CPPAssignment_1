#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct DateInfo
{
    int day;
    int month;
    int year;

    // setters
    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }

    // getters
    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }

    // default
    DateInfo()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    DateInfo(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void display()
    {
        printf("\nDisplay");
        printf("\nDay   = %d", this->day);
        printf("\nMonth = %d", this->month);
        printf("\nYear  = %d", this->year);
    }
};
int main()
{
    DateInfo d1, d2, d3(25, 10, 2023);

    d1.setDay(22);
    d1.setMonth(1);
    d1.setYear(1994);

    printf("\nDate 1 Info");
    printf("\nDay   = %d", d1.getDay());
    printf("\nMonth = %d", d1.getMonth());
    printf("\nYear  = %d", d1.getYear());

    printf("\nDate 2 Info");
    printf("\nDay   = %d", d2.getDay());
    printf("\nMonth = %d", d2.getMonth());
    printf("\nYear  = %d", d2.getYear());

    printf("\nDate 3 Info");
    printf("\nDay   = %d", d3.getDay());
    printf("\nMonth = %d", d3.getMonth());
    printf("\nYear  = %d", d3.getYear());

    d1.display();
    d2.display();
    d3.display();
}