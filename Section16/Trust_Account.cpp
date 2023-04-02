#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}, num_withdrawals {0}  {
        
}

Trust_Account::~Trust_Account(){}

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account::deposit(amount);
}
    
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        return Savings_Account::withdraw(amount);
    }
}

void Trust_Account::print(std::ostream &os) const {
    os << "[Trust Account: " << name << ": " << balance << ", " << int_rate 
        << "%, withdrawals: " << num_withdrawals <<  "]";
}
