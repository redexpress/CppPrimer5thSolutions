#include <iostream>

int get_size(){
    static int i = 0;
    if (i == -3) {
        return 1;
    }
    return --i;
}

int main(){
//begin:
//    int sz = get_size();
//    cout << sz << endl;
//    if (sz <= 0) {
//        goto begin;
//    }
    int size = 0;
    do {
        int sz = get_size();
        size = sz;
    } while (size <= 0);
    return 0;
}
