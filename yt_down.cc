#include <cstdio>
#include <string>

#if __cplusplus < 201703L
# error "C++17 not supported!"
#endif

int main() {
    constexpr std::string_view dir_path = "/path/to/dir/";
    constexpr std::string_view file_path = "/path/to/file/list.txt";
    constexpr std::string_view script_path = "/path/to/dir/script";
    constexpr std::string_view script_name = "ytdown.py";

    auto cmd = std::string{"python3 "} + script_path.data() + script_name.data() + " -d " + dir_path.data()
               + " " + file_path.data();

    system(cmd.data());
    std::printf("Done!");
}