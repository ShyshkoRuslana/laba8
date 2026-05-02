#ifndef LABA8_VECTOR_H
#define LABA8_VECTOR_H
using namespace std;
#include <vector>

template<typename T>
void insert(vector<T>& v1,vector<T>& v2, int pos){
    auto itpos = v1.begin();
    for (int i = 0; i < pos; i++) {
        ++itpos;
    }
    for (auto it = v2.begin(); it != v2.end() ; it++) {
        itpos = v1.insert(itpos,*it);
        ++itpos;
    }

};


#endif
