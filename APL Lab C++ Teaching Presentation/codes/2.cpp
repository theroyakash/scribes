int main () {
    std::vector<int> v1; // start empty vector
    v1.push_back(11);
    v1.push_back(12);
    v1.pop_back();
    std::cout << v1.back() << std::endl;
}