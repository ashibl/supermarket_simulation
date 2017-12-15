#ifndef SHOPPINGITEM_H
#define SHOPPINGITEM_H
#include<string>
using namespace std;
class ShoppingItem
{   private:
    string item;
    int amount;
    public:
        ShoppingItem();
        ShoppingItem(string x, int y);
        void setItem(string x);
        string getItem();
        void setAmount(int y);
        int getAmount();

};

#endif // SHOPPINGITEM_H
