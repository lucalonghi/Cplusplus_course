
#include <iostream>

using namespace std;

int main(){
    int cents;
    int dollar{100}, quarter{25};
    int dime{10}, nickel{5}, penny{1};
    int dollar_count{0}, quarter_count{0}, dime_count{0}, nickel_count{0}, penny_count{0};
    double tax{6.6}, total;

    cout << "How many cents? " << endl;
    cin >> cents;
    
    /*
    while(cents >= dollar){
        cents -= dollar;
        dollar_count++;
    }
    while(cents >= quarter){
        cents -= quarter;
        quarter_count++;
    }
    while(cents >= dime){
        cents -= dime;
        dime_count++;
    }
    while(cents >= nickel){
        cents -= nickel;
        nickel_count++;
    }
    while(cents >= penny){
        cents -= penny;
        penny_count++;
    }
    */

    dollar_count = cents / dollar;
    cents %= dollar;
    quarter_count = cents / quarter;
    cents %= quarter;
    dime_count = cents / dime;
    cents %= dime;
    nickel_count = cents / nickel;
    cents %= nickel;
    penny_count = cents / penny;
    cents %= penny;

    cout << "You can provide this change as follows" << endl;
    cout << "dollars    : " << dollar_count << endl;
    cout << "quarters   : " << quarter_count << endl;
    cout << "dimes      : " << dime_count << endl;
    cout << "nickels    : " << nickel_count << endl;
    cout << "pennys     : " << penny_count << endl;

    return 0;
}