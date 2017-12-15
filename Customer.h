#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "ShoppingItem.h"
#include "Time.h"

class Customer
{   private:
    int ID;
    Time arrivalTime;
    Time checkOutTime;
    Time shoppingDuration;
    ShoppingItem *ShoppingList= new ShoppingItem[2];
    public:
        Customer();
        void setID(int Id);
        int getID();
        void setArraivalTime (Time arrivalTime);
        Time getArraivalTime ();
        void setShoppingDuration (Time shoppingDurationTime);
        Time getShoppingDuration ();
        void buyItem(string item, int amount);
};

#endif // CUSTOMER_H
