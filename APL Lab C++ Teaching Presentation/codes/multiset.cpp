#include <set>

int main () {
    multiset<int, greater<int>> marks;
    marks.insert(100); marks.insert(100); marks.insert(100); 
    marks.insert(20); marks.insert(30); 

    // 100 100 100 30 20
    for(auto e : marks) cout << e << " ";

    return 0;
}