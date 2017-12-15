#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include "Item.h"
#include "Customer.h"

class Stock
{   private:
    int n;
    Item *A = new Item [n] ;
    public:
        Stock();
        void loadStock();
        void addnew();
        void UpdateExistingItem();
        void ReportTotalRevenue();

};

#endif // STOCK_H
