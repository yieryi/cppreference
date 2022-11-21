// cppreference link https://en.cppreference.com/w/cpp/iterator/front_inserter
#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <vector>
int main()
{
    std::vector<int> v { 1, 2, 3, 4, 5 };
    std::deque<int> d;
    std::copy(v.begin(), v.end(), std::front_inserter(d));
    for (int n : d)
        std::cout << n << ' ';
}
