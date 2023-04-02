// Simple Account 
#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &account);
public:
    virtual ~I_Printable();
    virtual void print(std::ostream &) const = 0;
};
#endif