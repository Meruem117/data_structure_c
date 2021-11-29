#include <iostream>
#include "src/list.h"
#include "src/search.h"
#include "src/sort.h"

using namespace std;

void testSearch() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    List list{};
    List listWithHead{};

    initList(list);
    setList(list, a, 10);
    printList(list, false);
    initList(listWithHead);
    setList(listWithHead, a, 9);
    printList(listWithHead, true);

    cout << seqSearch(list, key) << endl;
    cout << seqSearchWithSentry(listWithHead, key) << endl;
    cout << binSearch(list, key) << endl;
}

void testSort() {
    int a[10] = {2, 1, 3, 4, 5, 0, 6, 8, 9, 7};
    insertSort(a, 10);
}

int main() {
    testSort();
    return 0;
}
