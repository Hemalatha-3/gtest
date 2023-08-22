#include <string>

// Example function to test
std::string ReverseString(const std::string& str) {
    std::string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}
