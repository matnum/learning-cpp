#include <iostream>

using namespace std;

int main(){
    
    cout << "How many small rooms would you like cleaned? ";
    int num_srooms {0}; // Number of small rooms
    cin >> num_srooms;

    cout << "How many large rooms would you like cleaned? ";
    int num_lrooms {0}; // Number of large rooms
    cin >> num_lrooms;
    
    const double price_sroom {25.0}; // Price of a small room
    const double price_lroom {35.0}; // Price of a large room
    
    const double sales_tax {0.06};
    const double estimate_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << num_srooms << endl;
    cout << "Number of large rooms: " << num_lrooms << endl;
    cout << "Price per small room: " << price_sroom << endl;
    cout << "Price per large room: " << price_lroom << endl;
    cout << "Cost: $" << (price_sroom * num_srooms) + (price_lroom * num_lrooms) << endl;
    cout << "Tax: $" << ((price_sroom * num_srooms) + (price_lroom * num_lrooms)) * sales_tax << endl;
    cout << "==========================================" << endl;
    cout << "Total estimate: $" 
        << ((price_sroom * num_srooms) + (price_lroom * num_lrooms)) + 
            ((price_sroom * num_srooms) + (price_lroom * num_lrooms)) * sales_tax 
        << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}