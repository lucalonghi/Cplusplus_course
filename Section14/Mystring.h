#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    friend std::ostream & operator<<(std::ostream &, const Mystring &);
    friend std::istream & operator>>(std::istream &, Mystring &);
private:
    char * str;
public:
    Mystring();
    Mystring(const char * );
    Mystring(const Mystring &);
    Mystring(Mystring &&);
    ~Mystring();

    Mystring & operator=(const Mystring &);
    Mystring & operator=(Mystring &&);

    Mystring operator-() const;
    bool operator==(const Mystring &) const;
    bool operator!=(const Mystring &) const;
    bool operator<(const Mystring &) const;
    bool operator>(const Mystring &) const;
    Mystring operator+(const Mystring &) const;
    Mystring & operator+=(const Mystring &);
    Mystring operator*(const int) const;
    Mystring & operator*=(const int);
    Mystring & operator++();    //preincrement
    Mystring operator++(int);    //postincrement
};

#endif