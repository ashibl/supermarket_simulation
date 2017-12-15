#include "Admin.h"

Admin::Admin()
{

}

void Admin:: setMyStock(Stock x)
{
    myStock=x;
}
Stock Stock::getMyStock()
{
    return myStock;
}
void Stock:: setTotalRevnue(int y)
{
    totalRevnue=y;
}
int getTotalRevenue()
{
    return totalRevnue;
}
