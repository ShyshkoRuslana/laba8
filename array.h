#ifndef LABA8_ARRAY_H
#define LABA8_ARRAY_H
#include <array>

using namespace std;

template<typename T,size_t N>
void shift(array<T,N>& arr,int k){
    k = k % N;
    for (int step = 0; step < k; step++) {
        T last = arr [N-1];
        for (int i = N-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0]=last;
    }
};
template <typename Container>
void print(Container& c) {
    for(auto it = c.begin(); it != c.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}



#endif
