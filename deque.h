#ifndef LABA8_DEQUE_H
#define LABA8_DEQUE_H
using namespace std;
#include <deque>

template<typename T>
void remove(deque<T>& d) {
    int n = d.size();
    if(n == 0) return;
    if(n % 2 == 1) {
        auto it = d.begin();
        for(int i = 0; i < n / 2; i++) ++it;
        d.erase(it);
    }
    else {
        auto it1 = d.begin();
        for(int i = 0; i < n / 2 - 1; i++) ++it1;
        auto it2 = it1;
        ++it2;
        d.erase(it2);
        d.erase(it1);
    }
};


#endif
