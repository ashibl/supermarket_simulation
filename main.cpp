#include <iostream>
#include<string>
#include "Stock.h"
using namespace std;

int main()
{
    int userChoice = -1;
    while (userChoice != 0)
    {
        cout << "Press 1 to Enter as admin, 2 to Enter as customer, and 0 to end the program:" << endl;
        cin >> userChoice;

        if(userChoice == 1)
        {

        }
        else if(userChoice == 2)
        {
            int numberOfCustomers = 0;
            cout << "Please enter number of customers:" << endl;
            cin >> numberOfCustomers;

            Customer *customers = new Customer[numberOfCustomers];
            for (int i = 0; i < numberOfCustomers; i++)
            {
                    customers[i].setID(i);
                    cout<<"Customer "<<i<<" is created"<<endl;
            }
        }
        else
        {
            cout << "Incorrect choice, please try again" << endl;
        }
        //Stock n;
        // n.loadStock();
    }
    Customer X;
    cout << X.getID();
    return 0;
}
