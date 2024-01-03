#include <set>
using namespace std;

int main () {
    set<int> marks;
    marks.insert(10); marks.insert(20); marks.insert(30);
    marks.insert(100); marks.insert(100);

    for (auto elem : marks) { cout << elem << " "; }

    return 0;
}