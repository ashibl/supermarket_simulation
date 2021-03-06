#ifndef ADMIN_H
#define ADMIN_H
#include "Stock.h"
#include "Customer.h"

class Admin
{
private:
    Stock myStock;
    int totalRevnue;
    Customer Array[10];
public:
    Admin();
    void setMyStock(Stock x);
    Stock getMyStock();
    void setTotalRevnue(int y);
    int getTotalRevenue();
    void reportAvailableItems();
    void addNewItem();
    void updateExistingItem();
    void displayTotalCustomers();
    void displayMaxReciept();

};

#endif // ADMIN_H
