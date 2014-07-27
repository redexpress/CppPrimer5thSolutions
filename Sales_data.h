//
//  Sales_data.h
//
//  Created by Gavin Yang on 14-7-26.
//  Copyright (c) 2014年 redexpress.github.com. All rights reserved.
//

#ifndef __Sales_data__
#define __Sales_data__

#include <iostream>

class Sales_data{
    friend std::istream& operator>> (std::istream&, Sales_data&);
    friend std::ostream& operator<< (std::ostream&, const Sales_data&);
    friend std::istream& read (std::istream&, Sales_data&);
    friend std::ostream& print (std::ostream&, const Sales_data&);
    friend bool operator== (const Sales_data&, const Sales_data&);
public:
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s){}
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n){}
    Sales_data(std::istream &);
    std::string isbn() const { return bookNo; }
    double avg_price() const;
    Sales_data& combine (const Sales_data&);
    Sales_data& operator+= (const Sales_data&);
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(Sales_data &lhs, Sales_data &rhs);

#endif