// cppreference link https://en.cppreference.com/w/cpp/container/map/size
#include <iostream>
#include <map>

int main()
{
    std::map<int, char> nums { { 1, 'a' }, { 3, 'b' }, { 5, 'c' }, { 7, 'd' } };

    std::cout << "nums contains " << nums.size() << " elements.\n";
}
