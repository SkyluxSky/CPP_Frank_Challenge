//Section 6
//Constants

/*
  Frank's Carpet Cleaning Service
    Charges: 
     * $25 per small room
     * $35 per large room
     Sales tax rate is 6%
      Estimates are valid for 30 days
       * 
    Prompt the user for the number of rooms they would like cleaned
     and provide an estimate such as:
       
     Estimate for carpet cleaning service:
      * Number of small rooms: 3
      * Number of large rooms: 1
      * Price per small room: $25
      * Price per large room: $35
      * Cost: $110
      * Tax: $6.6
      ================================
     Total estimate: $116.6
     This estimate is valid for 32.5 days
      
     Pseudocode: (Steps to solve the problem)
        Prompt the user to enter the number of rooms
        Display the number of rooms
        Display price per room
         * 
        Display Cost: (number of rooms * price per room)
        Display Tax:  (number of rooms * price per room * tax rate)
        Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
        Display Expiration Time
        */


#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Franks Carpet Cleaning Services " << endl;
    
    int number_of_rooms_small {0};
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> number_of_rooms_small;
    
    int number_of_rooms_large {0};
    cout << "\nHow many large rooms would you like cleaned? " << endl;
    cin >> number_of_rooms_large;
    cout << "===============================" << endl;
    const double price_of_small_room {25.0};
    const double price_of_large_room {35.0};
    
    const double sales_tax {0.06};
    const int days_till_expire {30};
    
    cout << "\nEstimates of carpet cleaning services " << endl;
    cout << "Number of small rooms: " << number_of_rooms_small << endl;
    cout << "Number of large rooms: " << number_of_rooms_large << endl;
    
    cout << "Price per small room: $" << price_of_small_room << endl;
    cout << "Price per large room: $" << price_of_large_room << endl;
    cout << "Cost: $" 
            << (number_of_rooms_small * price_of_small_room) + (number_of_rooms_large * price_of_large_room) << endl;
            
    cout << "Tax: $" 
            << ((number_of_rooms_small * price_of_small_room) + (number_of_rooms_large * price_of_large_room)) * sales_tax << endl;
    cout << "===============================" << endl;
    
    cout << "Total estimate: $" 
            << ((number_of_rooms_small * price_of_small_room) + (number_of_rooms_large * price_of_large_room)) + 
                  (((number_of_rooms_small * price_of_small_room) + (number_of_rooms_large * price_of_large_room)) * sales_tax) << endl;
                  
    cout << "This estimate is valid for " << days_till_expire << " days"<< endl;
    
    cout << endl;
    
    return 0;
}