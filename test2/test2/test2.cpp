#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>

// Шаблонная функция для печати любого контейнера
template <typename Container>
void print_container(const Container& container) {
    bool first = true;

    for (const auto& element : container) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << element;
        first = false;
    }
    std::cout << std::endl;
}

int main() {
    // Пример с set (будет отсортирован)
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    std::cout << "Set: ";
    print_container(test_set);
    // Вывод: four, one, three, two

    // Пример с list (порядок вставки)
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::cout << "List: ";
    print_container(test_list);
    // Вывод: one, two, three, four

    // Пример с vector (порядок вставки)
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    std::cout << "Vector: ";
    print_container(test_vector);
    // Вывод: one, two, three, four

    return 0;
}