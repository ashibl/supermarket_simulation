#include "Item.h"
#include<string>
Item::Item()
{

}
Item::Item(string x, int y, string z, int w, int q)
{
    name=x;
    ID=y;
    type=z;
    availAmount=w;
    price=q;
}
void Item::setName(string x){
    name = x;
}
string Item::getName(){
    return name;
}
void Item::setID(int y){
    ID = y;
}
int Item::getID(){
    return ID;
}
void Item::setType(string z){
    type = z;
}
string Item::getType(){
    return type;
}
void Item::setAvailAmount(int w){
    availAmount = w;
}
int Item::getAvailAmount(){
    return availAmount;
}
void Item::setPrice(int q){
    type =q;
}
int Item::getPrice(){
    return price;
}
