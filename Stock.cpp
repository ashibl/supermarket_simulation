#include "Stock.h"
#include "Item.h"
#include <fstream>
#include "Customer.h"

Stock::Stock()
{
    //ctor
}
void Stock :: loadStock()
{
    fstream myFile;
    myFile.open("stock.txt",ios::in);
    while(!myFile.eof())
    {
        for(int i=0; i<3; i++)
        {
        string name= "",type;
        int id,amount,price;
        myFile >> id>>name>>type>>amount>>price;
        A[i].setID(id);
        A[i].setName(name);
        A[i].setType(type);
        A[i].setAvailAmount(amount);
        A[i].setPrice(price);
        n=id;
        }
    }
    myFile.close();
  //cout << A[0].getID();

}
void Stock:: addnew()
{
    fstream myFile;
    myFile.open("stock.txt",ios::app);

        string name,type;
        int amount,price;
        cin>>name>>type>>amount>>price;
        myFile << endl<<++n<<" "<<name<<" "<<type<<" "<<amount<<" "<<price;
        myFile.close();
}
void Stock:: UpdateExistingItem()
{
    int newprice,newamount,id;
    cin>>id;
    cin>>newamount>>newprice;
    A[id-1].setAvailAmount(newamount);
    A[id-1].setPrice(newprice);
    fstream myFile;
    myFile.open("stock.txt",ios::app);
    while(!myFile.eof())
    {
        for(int i=0; i<3; i++)
            {
                if((i+1)==id)
                {
                    myFile << A[id-1].getAvailAmount();
                    myFile << A[id-1].getPrice();
                }
                else
            break;
            }
    }
    myFile.close();
}
/*void ReportTotalRevenue()
{
    int sum=0;

    sum+=ob.GetTotal();

}*/
