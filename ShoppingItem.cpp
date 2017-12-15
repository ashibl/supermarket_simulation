#include "ShoppingItem.h"
ShoppingItem::ShoppingItem()
{

}

ShoppingItem::ShoppingItem(string x, int y)
{
item=x;
amount=y;
}

void ShoppingItem::setItem(string x){
    item = x;
}
string ShoppingItem::getItem(){
    return item;
}
void ShoppingItem::setAmount(int y){
    amount = y;
}
int ShoppingItem::getAmount(){
    return amount;
}
