#include <iostream>
#include <string>
#include <deque>
#include <utility>
std::deque<std::pair<std::string, std::string>> SortWorks(const std::deque<std::pair<std::string, std::string>>& pairs) {
    std::deque<std::pair<std::string, std::string>> sorted_works;
    for (const auto& iter : pairs) {
        if (iter.second == "top") {
            sorted_works.push_front(iter);
        }
        else {
            sorted_works.push_back(iter);
        }
    }
    return sorted_works;
}
int main() {
    std::deque<std::pair<std::string, std::string>> works;
    int N;
    std::cin >> N;
    while (N != 0) {
        std::pair<std::string, std::string> pair;
        std::cin >> pair.first >> pair.second;
        works.push_back(pair);
        N--;

    }
    size_t volume;
    std::cin >> volume;
    std::deque<size_t> numbers;
    for (size_t i = 0; i < volume; i++) {
        size_t num;
        std::cin >> num;
        numbers.push_back(num);
    }
    std::deque<std::pair<std::string, std::string>> sorted_works = SortWorks(works);
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << sorted_works[numbers[i] - 1].first << std::endl;
    }
}