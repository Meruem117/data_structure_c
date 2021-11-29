//
// Created by Meruem on 2021/11/29.
//

#include "utils.h"

void printArray(int a[], int len, bool hasHead) {
    if (len == 0) {
        cout << "empty array" << endl;
    } else if (hasHead) {
        for (int i = 0; i <= len; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    } else {
        for (int i = 0; i < len; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}
