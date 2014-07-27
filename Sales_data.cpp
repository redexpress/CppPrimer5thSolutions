//
//  Sales_data.cpp
//
//  Created by Gavin Yang on 14-7-26.
//  Copyright (c) 2014年 redexpress.github.com. All rights reserved.
//

#include "Sales_data.h"

using std::cout;
using std::cin;

std::istream& read(std::istream &in, Sales_data &s){
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    if (in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_data();  // input failed: reset object to default state
    return in;
}

std::ostream& print(std::ostream &out, const Sales_data &s){
    out << s.isbn() << ' ' << s.units_sold << ' ' << s.revenue << '\n';
    return out;
}

std::istream& operator>>(std::istream &in, Sales_data &s){
    return read(in, s);
}

std::ostream& operator<<(std::ostream &out, const Sales_data &s){
    return print(out, s);
}

bool operator== (const Sales_data &s1, const Sales_data &s2){
    return s1.isbn() == s2.isbn();
}

Sales_data::Sales_data(std::istream &is){
    read(is, *this);
}

Sales_data& Sales_data::combine (const Sales_data &s){
    units_sold += s.units_sold;
    revenue += s.revenue;
    return *this;
}


Sales_data& Sales_data::operator+= (const Sales_data &s){
    return combine(s);
}

double Sales_data::avg_price() const{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data add(Sales_data &lhs, Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}