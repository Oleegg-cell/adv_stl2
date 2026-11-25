#include <iostream>
#include <vector>
#include <set>

std::vector<int> unique_sorted(const std::vector<int>& v) {
    std::set<int> s(v.begin(), v.end());      // set автоматически убирает дубликаты и сортирует
    return std::vector<int>(s.begin(), s.end());
}

int main() {
    std::vector<int> input = { 1, 1, 2, 5, 6, 1, 2, 4 };
    auto result = unique_sorted(input);

    for (int x : result) {
        std::cout << x << " ";
    }
    return 0;
}