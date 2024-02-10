#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct ComplexInfo
{
    int real;
    int imaginary;

    // SETTERS
    void setReal(int real)
    {
        this->real = real;
    }
    void setImaginary(int img)
    {
        this->imaginary = img;
    }

    // getters
    int getReal()
    {
        return this->real;
    }
    int getImaginary()
    {
        return this->imaginary;
    }

    // default
    ComplexInfo()
    {
        this->real = 0;
        this->imaginary = 0;
    }
    // parameterized
    ComplexInfo(int real, int img)
    {
        this->real = real;
        this->imaginary = img;
    }

    void display()
    {
        printf("\n\nDisplay");
        printf("\nReal      = %d", this->real);
        printf("\nImaginary = %di", this->imaginary);
    }
};
int main()
{
    ComplexInfo c1, c2, c3(20, 5);

    c1.setReal(10);
    c1.setImaginary(9);

    printf("\nC1");
    printf("\nReal      = %d", c1.getReal());
    printf("\nImaginary = %di", c1.getImaginary());

    printf("\nC2");
    printf("\nReal      = %d", c2.getReal());
    printf("\nImaginary = %di", c2.getImaginary());

    printf("\nC3");
    printf("\nReal      = %d", c3.getReal());
    printf("\nImaginary = %di", c3.getImaginary());

    c1.display();
    c2.display();
    c3.display();
}