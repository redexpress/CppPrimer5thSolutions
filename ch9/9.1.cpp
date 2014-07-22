#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::set;
using std::vector;
using std::list;
using std::deque;
using std::sort;

void taskA();
void taskAUsingVector();
void taskB();
void taskBUsingVector();
void taskBUsingDeque();
void taskBUsingList();
void taskC();
void taskCUsingVector();
void taskCUsingDeque();
void taskCUsingList();
typedef enum{
	OrderedAscending = -1,
	OrderedSame,
	OrderedDescending
} ComparisonResult;

ComparisonResult compare(const string &s1, const string &s2);

set<string> words;

int main(){
	words.insert("The");
	words.insert("Quick");
	words.insert("Brown");
	words.insert("Fox");
	words.insert("jumps");
	words.insert("over");
	words.insert("the");

	taskA();
	taskB();
	taskC();
	return 0;
}

//order like this: ABC abc by
ComparisonResult compare(const string &s1, const string &s2){
	if (s1.empty() && s2.empty()){
		return OrderedSame;
	} else if (s1.empty()){
		return OrderedAscending;
	} else if(s2.empty()){
		return OrderedDescending;
	}
	if ((isupper(s1[0]) && isupper(s2[0]))
		||(islower(s1[0] && islower(s2[0])))){
		int result = s1.compare(s2);
		if (result < 0){
			return OrderedAscending;
		} else if(result > 0){
			return OrderedDescending;
		} else {
			return OrderedSame;
		}
	} else {
		if (toupper(s1[0]) == toupper(s2[0])){
			if (isupper(s1[0])){
				return OrderedAscending;
			} else {
				return OrderedDescending;
			}
		} else if (toupper(s1[0]) > toupper(s2[0])){
			return OrderedDescending;
		} else {
			return OrderedAscending;
		}
	}
	return OrderedSame;
}

void taskA(){
	taskAUsingVector();
}

void taskAUsingVector(){
	vector<string> dict;
	for(auto data : words){
        if (dict.empty()) {
            dict.push_back(data);
        } else {
            auto iter = dict.begin();
            while (compare(data, *iter) == OrderedDescending && iter < dict.end()) {
                iter++;
            }
            dict.insert(iter, data);
        }
	}
}

void taskB(){
    taskBUsingVector();
}

void taskC(){
    taskCUsingList();
}

void taskBUsingVector(){
    vector<string> vec;
	for(auto data : words){
        vec.push_back(data);
	}
    while (!vec.empty()) {
        auto iter = vec.begin();
        vec.erase(iter);
    }
}

void taskBUsingDeque(){
    deque<string> lst;
	for(auto data : words){
        lst.push_back(data);
	}
    while (!lst.empty()) {
        lst.pop_front();
    }
}

void taskBUsingList(){
    list<string> lst;
	for(auto data : words){
        lst.push_back(data);
	}
    while (!lst.empty()) {
        lst.pop_front();
    }
}

void taskCUsingVector(){
    vector<string> vec;
	for(auto data : words){
        vec.push_back(data);
	}
    sort(vec.begin(), vec.end(), [](const string &a, const string &b){ return a.compare(b) < 0;});
}

void taskCUsingDeque(){
    deque<string> lst;
	for(auto data : words){
        lst.push_back(data);
	}
    sort(lst.begin(), lst.end(), [](const string &a, const string &b){ return a.compare(b) < 0;});
}

void taskCUsingList(){
    list<string> lst;
	for(auto data : words){
        lst.push_back(data);
	}
    lst.sort([](const string &a, const string &b){ return a.compare(b) < 0;});
}

