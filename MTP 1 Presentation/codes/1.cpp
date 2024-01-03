#include <iostream>
#include <vector>

using std::vector;

int main () {
    vector<int> v1; // start empty vector
    vector<int> v2(10, -1); // start 10 sized vector
    // create 10x10 vector filled with -1
    vector<vector<int>> v4(10, vector<int>(10, -1));
    return 0;
}