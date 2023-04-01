#include <iostream>
#include <cstring>
#include "Mystring.h"

std::ostream & operator<<(std::ostream &os, const Mystring &s){
    os << s.str;
    return os;
}
std::istream & operator>>(std::istream &is, Mystring &s){
    is >> s.str;
    return is;
}

Mystring::Mystring()
    : str{nullptr}{
    str = new char[1];
    str[0] = '\0'; 
}
Mystring::Mystring(const char * strval)
    : str{nullptr}{
    if(strval != nullptr){
        str = new char[strlen(strval)+1];
        strcpy(str, strval);
    }else{
        str = new char[1];
        str[0] = '\0'; 
    }
}
Mystring::Mystring(const Mystring &s)
    : str{nullptr}{
    str = new char[strlen(s.str)+1];
    strcpy(str, s.str);
}
Mystring::Mystring(Mystring &&s)
    : str{s.str}{
    s.str = nullptr;
}
Mystring::~Mystring(){
    delete [] str;
}

Mystring & Mystring::operator=(const Mystring &s){
    if(this == &s){
       return *this;
    }

    delete [] str;
    str = new char[strlen(s.str)+1];
    strcpy(str, s.str);
    
    return *this;
}

Mystring & Mystring::operator=(Mystring &&s){
    if(this == &s){
       return *this;
    }

    delete [] str;
    str = s.str;
    s.str = nullptr;

    return *this;
}

Mystring Mystring::operator-() const{
    char * temp = new char[strlen(str)+1];
    strcpy(temp, str);
    for(int i=0; i<strlen(temp); i++){
        temp[i]=tolower(temp[i]);
    }
    Mystring s{temp};
    delete [] temp;

    return s;
}

bool Mystring::operator==(const Mystring &s) const{
    if(this == &s){
        return true;
    }

    if(!strcmp(str, s.str)){
        return true;
    }
        
    return false;
}

bool Mystring::operator!=(const Mystring &s) const{
    if(this == &s){
        return false;
    }

    if(!strcmp(str, s.str)){
        return false;
    }
        
    return true;
}

bool Mystring::operator<(const Mystring &s) const{
    if(this == &s){
        return false;
    }
    if(strcmp(str, s.str) < 0){
        return true;
    }

    return false;
}

bool Mystring::operator>(const Mystring &s) const{
    if(this == &s){
        return false;
    }
    if(strcmp(str, s.str) > 0){
        return true;
    }

    return false;
}

Mystring Mystring::operator+(const Mystring &s) const{
    char * temp = new char[strlen(str)+strlen(s.str)+1];
    strcpy(temp, str);
    strcat(temp, s.str);

    Mystring new_str{temp};
    delete [] temp;

    return new_str;
}

Mystring & Mystring::operator+=(const Mystring &s){
    *this = *this + s;

    return *this;
}

Mystring Mystring::operator*(const int n) const{
    /*
    char * temp = new char[(strlen(str)*n)+1];
    strcpy(temp, str);
    for(int i=0; i<n-1; i++){
        strcat(temp, str);
    }
    Mystring s{temp};
    delete [] temp;
    */
    Mystring s;
    for(int i=0; i<n; i++){
        s += *this; 
    }

    return s;
}

Mystring & Mystring::operator*=(const int n){
    *this = *this * n;

    return *this;
}

Mystring & Mystring::operator++(){
    char * temp = new char[strlen(str)+1];
    strcpy(temp, str);
    for(int i=0; i<strlen(temp); i++){
        temp[i]=toupper(temp[i]);
    }
    
    delete [] str;
    str = temp;
    return *this;
}

Mystring Mystring::operator++(int ){
    Mystring temp{*this};
    operator++();
    
    return temp;
}