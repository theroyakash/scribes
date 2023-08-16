int main() {
    vector<int> v;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

    for (int data : v) { cout << data << " "; }
    for (auto data : v) { cout << data << " "; }
}