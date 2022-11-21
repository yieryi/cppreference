// cppreference link https://en.cppreference.com/w/cpp/container/multiset/contains
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> example = { 1, 2, 3, 4 };

    for (int x : { 2, 5 }) {
        if (example.contains(x)) {
            std::cout << x << ": Found\n";
        } else {
            std::cout << x << ": Not found\n";
        }
    }
}
