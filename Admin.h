#ifndef ADMIN_H
#define ADMIN_H
#include "Stock.h"
#include "Customer.h"

class Admin
{   private:
    Stock myStock;
    int totalRevnue;
    Customer Array[10];
    public:
        Admin();
};

#endif // ADMIN_H