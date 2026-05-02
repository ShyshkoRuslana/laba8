#include <iostream>
#include "array.h"
#include "vector.h"
#include "deque.h"
using namespace std;
int main (){
    cout << "--Зсув елементів--" << endl;
    array<int,6> arr = {1,2,3,4,5,6};
    shift(arr,3);
    print(arr);

    cout << "--Вставка одного вектора в інший--" << endl;
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {9,9,9};
    insert(v1,v2,1);
    print(v1);

    cout << "--Видалення середнього елмента--" << endl;
    cout << "Парна кількість" << endl;
    deque<int> d1 = {1, 2, 3, 4, 5, 6, 7, 8};
    print(d1);
    remove(d1);
    print(d1);
    cout << "Непарна кількість" << endl;
    deque<int> d2 = {1,2,3,4,5};
    print(d2);
    remove(d2);
    print(d2);

    return 0;

}