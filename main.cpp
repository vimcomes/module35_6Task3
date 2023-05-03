#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path path("D:\\Program Files");
    std::string extension = ".dll";
    auto recursiveGetFileNamesByExtension = [](const std::filesystem::path& path, const std::string& extension) {
        for(auto& tmp: std::filesystem::recursive_directory_iterator(path)) {
            if (!tmp.path().extension().compare(extension)) {
                    std::cout << tmp.path() << '\n';
            }
        }
    };
    recursiveGetFileNamesByExtension(path, extension);
    return 0;
}