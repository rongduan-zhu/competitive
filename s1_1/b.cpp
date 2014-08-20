/*
ID: rongduan
LANG: C++
PROG: ride
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define M 64
#define L 6
#define MOD 47

int main() {
    ifstream fin("ride.in");
    ofstream fout("ride.out");

    string i1, i2;
    int m1, m2, sum = 1;

    getline(fin, i1);
    getline(fin, i2);

    int ml1 = i1.size(),
        ml2 = i2.size();

    for (int i = 0; i < ml1; ++i) {
        sum *= ((int) i1[i] - M);
        // cout << (int) i1[i] - M << " " << sum << endl;
    }

    m1 = sum % MOD;
    sum = 1;

    for (int i = 0; i < ml2; ++i) {
        sum *= ((int) i2[i] - M);
        // cout << (int) i2[i] - M << " " << sum << endl;
    }
    m2 = sum % MOD;

    fout << (m1 == m2 ? "GO" : "STAY") << endl;

    return 0;
}
