#include "I_Printable.h"

I_Printable::~I_Printable(){}

std::ostream &operator<<(std::ostream &os, const I_Printable &printable) {
    printable.print(os);
    return os;
}
