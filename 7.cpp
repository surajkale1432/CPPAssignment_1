#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct TimeInfo
{
    int hour;
    int minute;
    int seconds;

    // setters
    void setHour(int h)
    {
        this->hour = h;
    }
    void setMinute(int m)
    {
        this->minute = m;
    }
    void setSeconds(int s)
    {
        this->seconds = s;
    }

    // getters
    int getHour()
    {
        return this->hour;
    }
    int getMinute()
    {
        return this->minute;
    }
    int getSeconds()
    {
        return this->seconds;
    }

    // default
    TimeInfo()
    {
        this->hour = 0;
        this->minute = 0;
        this->seconds = 0;
    }

    // parameterized
    TimeInfo(int h, int m, int s)
    {
        this->hour = h;
        this->minute = m;
        this->seconds = s;
    }

    void display()
    {
        printf("\nDisplay");
        printf("\nHours   = %d", this->hour);
        printf("\nMinutes = %d", this->minute);
        printf("\nSeconds = %d", this->seconds);
    }
};
int main()
{
    TimeInfo t1, t2, t3(11, 23, 53);

    t1.setHour(10);
    t1.setMinute(20);
    t1.setSeconds(33);

    printf("\nT1 info");
    printf("\nHours   = %d",t1.getHour());
    printf("\nMinutes = %d",t1.getMinute());
    printf("\nSeconds = %d", t1.getSeconds());

    printf("\nT2 info");
    printf("\nHours   = %d",t2.getHour());
    printf("\nMinutes = %d",t2.getMinute());
    printf("\nSeconds = %d", t2.getSeconds());

    printf("\nT3 info");
    printf("\nHours   = %d",t3.getHour());
    printf("\nMinutes = %d",t3.getMinute());
    printf("\nSeconds = %d", t3.getSeconds());

    t1.display();
    t2.display();
    t3.display();
}