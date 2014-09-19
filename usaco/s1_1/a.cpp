/*
ID: rongduan
LANG: C++
TASK: test
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream ifile("test.in");
    ofstream ofile("test.out");

    int a, b;

    ifile >> a >> b;
    ofile << a + b << endl;

    ifile.close();
    ofile.close();
    return 0;
}
