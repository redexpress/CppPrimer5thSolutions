
#include <iostream>

void swap(int *p, int *q){
    int t = *p;
    *p = *q;
    *q = t;
}

int main(){
    int a = 3, b = 5;
    swap(&a, &b);
    std::cout << a << ' ' << b << '\n';
    return 0;
}
