#ifndef ITEM_H
#define ITEM_H
#include<string>
using namespace std;
class Item
{
    private:
        int ID;
        string name;
        string type;
        int availAmount;
        int price;
    public:
        Item();
        Item(string x, int y, string z, int w, int q);
        void setName(string x);
        string getName();
        void setID(int y);
        int getID();
        void setType(string z);
        string getType();
        void setAvailAmount(int w);
        int getAvailAmount();
        void setPrice(int q);
        int getPrice();
};

#endif // ITEM_H
