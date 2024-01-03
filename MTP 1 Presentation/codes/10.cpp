int main() {
    vector<pair<int, int>> v = {{1,2}, {-3,4}, {-12, 12}};
    sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a.first < b.first;
    });
}