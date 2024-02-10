#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
struct ProductInfo
{
    int productId;
    char productName[20];
    int productQty;
    double productPrice;

    // setters
    void setProductId(int id)
    {
        this->productId = id;
    }
    void setProductName(const char *name)
    {
        strcpy(this->productName, name);
    }
    void setProductQty(int qty)
    {
        this->productQty = qty;
    }
    void setProductPrice(double price)
    {
        this->productPrice = price;
    }

    // getters
    int getProductId()
    {
        return this->productId;
    }
    char *getProductName()
    {
        return this->productName;
    }
    int getProductQty()
    {
        return this->productQty;
    }
    double getProductPrice()
    {
        return this->productPrice;
    }

    // default
    ProductInfo()
    {
        this->productId = 0;
        strcpy(this->productName,"NULL");
        this->productQty = 0;
        this->productPrice = 0;
    }

    // parameterized
    ProductInfo(int id,const char *name, int qty, double price)
    {
        this->productId = id;
        strcpy(this->productName, name);
        this->productQty = qty;
        this->productPrice = price;
    }

    void display()
    {
        printf("\n\nDisplay");
        printf("\nProductId    = %d", this->productId);
        printf("\nProductName  = %s", this->productName);
        printf("\nProductQty   = %d", this->productQty);
        printf("\nProductPrice = %1lf", this->productPrice);
    }
};
int main()
{
    ProductInfo p1, p2, p3(30, "Television", 1, 45000);

    p1.setProductId(10);
    p1.setProductName("mobile");
    p1.setProductQty(2);
    p1.setProductPrice(80000);

    printf("\nP1");
    printf("\nProductId    = %d", p1.getProductId());
    printf("\nProductName  = %s", p1.getProductName());
    printf("\nProductQty   = %d", p1.getProductQty());
    printf("\nProductPrice = %1lf", p1.getProductPrice());

    printf("\n\nP2");
    printf("\nProductId    = %d", p2.getProductId());
    printf("\nProductName  = %s", p2.getProductName());
    printf("\nProductQty   = %d", p2.getProductQty());
    printf("\nProductPrice = %1lf", p2.getProductPrice());

    printf("\n\nP3");
    printf("\nProductId    = %d", p3.getProductId());
    printf("\nProductName  = %s", p3.getProductName());
    printf("\nProductQty   = %d", p3.getProductQty());
    printf("\nProductPrice = %1lf", p3.getProductPrice());

    p1.display();
    p2.display();
    p3.display();
}