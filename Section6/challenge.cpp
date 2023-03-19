
#include <iostream>

using namespace std;

int main(){
    int small_rooms, large_rooms;
    int price_small{25}, price_large{35};
    int cost;
    double tax{6.6}, total;

    cout << "Hello welcome Luca's Carpet Cleaning Service" << endl << endl;
    cout << "how many small rooms would you like cleaned? " << endl;
    cin >> small_rooms;
    cout << "how many large rooms would you like cleaned? " << endl;
    cin >> large_rooms;

    cout << endl << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_small << endl;
    cout << "Price per large room: $" << price_large << endl;

    cost = small_rooms*price_small + large_rooms*price_large;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "===========================" << endl;

    total = cost + tax;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for 30 days" << endl;


    return 0;
}