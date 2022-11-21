// cppreference link https://en.cppreference.com/w/cpp/container/multimap/erase_if
#include <iostream>
#include <map>

template <typename Os, typename Container>
inline Os& operator<<(Os& os, Container const& cont)
{
    os << "{";
    for (const auto& item : cont) {
        os << "{" << item.first << ", " << item.second << "}";
    }
    return os << "}";
}

int main()
{
    std::multimap<int, char> data { { 1, 'a' }, { 2, 'b' }, { 3, 'c' }, { 4, 'd' },
        { 5, 'e' }, { 4, 'f' }, { 5, 'g' }, { 5, 'g' } };
    std::cout << "Original:\n"
              << data << '\n';

    const auto count = std::erase_if(data, [](const auto& item) {
        auto const& [key, value] = item;
        return (key & 1) == 1;
    });

    std::cout << "Erase items with odd keys:\n"
              << data << '\n'
              << count << " items removed.\n";
}
