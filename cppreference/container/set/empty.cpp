// cppreference link https://en.cppreference.com/w/cpp/container/set/empty
#include <iostream>
#include <set>

int main()
{
    std::set<int> numbers;
    std::cout << std::boolalpha;
    std::cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';

    numbers.insert(42);
    numbers.insert(13317);
    std::cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';
}
