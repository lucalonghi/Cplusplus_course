#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, num_withdraw{0} {
}

bool Trust_Account::deposit(double amount) {
    double temp = amount;
    while(temp >= 5000.0){
        amount += 50.0;
        temp -= 5000.0;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if(num_withdraw<max_withdrawals && amount < balance*0.2){
        num_withdraw++;
        return Savings_Account::withdraw(amount);
    }
    else{
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.num_withdraw << ", " << account.int_rate << "%]";
    return os;
}

