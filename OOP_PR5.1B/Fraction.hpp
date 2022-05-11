#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include "Exception.h"
#include "MyException.h"
using namespace std;

//#pragma pack(push)  /* push current alignment to stack */
//#pragma pack(1)

class Fraction
{
private:
    long int integer;
    unsigned short int fraction;
    
public:
    Fraction();
    Fraction(int i, int f);
    Fraction(const Fraction& f);
    Fraction& operator = (const Fraction&);
    
    operator string() const;
    friend ostream& operator << (ostream&, const Fraction&);
    friend istream& operator >> (istream&, Fraction&);
    
    friend Fraction operator + (Fraction&, Fraction&);
    friend Fraction operator * (Fraction&, Fraction&);
    
    friend void Read(Fraction&);
    friend void Display(Fraction&);
    
    long int get_integer() const {return integer;};
    unsigned short int get_fraction() const {return fraction;};
    void set_integer(long int value) { integer = value; };
    void set_fraction(int value);
    
    friend Fraction toFraction(double);
    friend double convertToDouble(Fraction&);
    friend double toNumber(string);
};

//#pragma pack(pop)   /* restore original alignment from stack */
