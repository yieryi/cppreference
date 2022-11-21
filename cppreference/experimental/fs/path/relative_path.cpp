// cppreference link https://en.cppreference.com/w/cpp/experimental/fs/path/relative_path
#include <experimental/filesystem>
#include <iostream>
namespace fs = std::experimental::filesystem;

int main()
{
    fs::path p = fs::current_path();

    std::cout << "The current path " << p << " decomposes into:\n"
              << "root-path " << p.root_path() << '\n'
              << "relative path " << p.relative_path() << '\n';
}
