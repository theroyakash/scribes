int main() {
    vector<int> v = {1,2,3,4};
    std::sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a > b;
    });
}