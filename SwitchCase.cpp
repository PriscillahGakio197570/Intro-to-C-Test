00.0#include <iostream>  
using namespace std; 
int main() 
{ 
    int choice; 
    double totalBill = 0.0; 
    cout << "Restaurant Menu" << endl; 
    cout << "1. Burger Combo - Sh. 500" <<endl; 
    cout << "2. Pizza Combo - Sh. 800" <<endl; 
    cout << "3. Pasta Combo - Sh. 600" <<endl; 
    cout << "4. Salad Combo - Sh. 300" <<endl; 
    cout << "5. Exit" << endl; 
    
    do {
        cout << "Enter your choice (1-5): "; 
        cin >> choice; 
        switch (choice) { 
            case 1: totalBill += 500; 
            cout << "Added Burger Combo to your order." <<endl; 
            break; 
            
            case 2: totalBill += 800; 
            cout << "Added Pizza Combo to your order." <<endl; 
            break; 
            
            case 3: totalBill += 600; 
            cout << "Added Pasta Combo to your order." <<endl; 
            break; 
            
            case 4: totalBill += 300; 
            cout << "Added Salad Combo to your order." <<endl; 
            break; 
            
            case 5: cout << "Exiting the menu..." <<endl; 
            break; 
            
            default: 
            cout << "Invalid choice. Please select a valid menu item." <<endl; 
            } 
        
        } while (choice != 5); 
     
        cout <<"Your total bill is: Sh. " <<totalBill << endl; 
        return 0; 
        
        }