#include "Customer.h"
#include "Stock.h"
#include <iostream>


Customer::Customer()
{

}
void Customer::setID(int Id)
{
    ID = Id;
}
int Customer::getID()
{
    return ID;
}
void Customer::setArraivalTime(Time arrivalTime)
{
    this->arrivalTime = arrivalTime;
}
Time Customer::getArraivalTime()
{
    return arrivalTime;
}
void Customer::setCheckOutTime(Time checkOutTime)
{
    this->checkOutTime = checkOutTime;
}
Time Customer::getCheckOutTime()
{
    return checkOutTime;
}

void Customer::setShoppingDuration(Time shoppingDurationTime)
{
    shoppingDuration = shoppingDurationTime;
}

Time Customer::getShoppingDuration()
{
    return shoppingDuration;
}

void Customer::buyItem(string item, int amount)
{
    cout << "Customer Bought "<< item << " and the amount is " << amount<< endl;
}
