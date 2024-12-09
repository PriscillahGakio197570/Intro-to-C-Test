#include <iostream>
using namespace std;

int main()
{
    double buyingPrice, sellingPrice;
    cout << "Please input buying price and selling price respectively" <<endl;
    cin >> buyingPrice >> sellingPrice; 
    double profit = sellingPrice-buyingPrice;
    cout << "This is the profit made: " <<profit <<endl;
    return 0;
}