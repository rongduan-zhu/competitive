#include <iostream>
#include <stdio.h>

#define N 12

using namespace std;

int main() {
    double sum = 0, buf;

    for (int i = 0; i < N; ++i) {
        cin >> buf;
        sum += buf;
    }

    printf("$%.2lf\n", sum / 12.0);
}
