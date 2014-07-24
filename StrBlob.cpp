
#include "StrBlob.h"
#include <stdexcept>
using std::string;
using std::vector;

StrBlob::StrBlob():data(std::make_shared<vector<string>>()){}

StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<vector<string>>()){}

void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

std::string& StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::check(size_type i, const std::string &msg) const{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

