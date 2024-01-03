#include <algorithm>

int main () {
    vector<int> v = {4,3,2,1};
    std::sort(v.begin(), v.end());
    for (auto i : v) { cout << i << " "; }
} 