#include "StringUtils.h"

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    
    ssize_t len = str.length();

    // To handle negative indices
    if (start < 0) start += len;
    if (end <= 0) end += len;
    // Performs bounds checking
    if (start < 0) start = 0;
    if (end > len) end = len;
    if (start >= end) return "";

    return str.substr(start, end - start);
}

std::string Capitalize(const std::string &str) noexcept{

    // Gets the result of the string 
    std::string result = str;
    // Capitalizes first letter of the string using built in c++ function
    result[0] = std::toupper(result[0]);
    // Loops through the rest of the letters, making sure that they're lowercase, again using built in c++ function
    for (size_t i = 1; i < result.length(); i++) {
        result[i] = std::tolower(result[i]);
    }
}

std::string Upper(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Lower(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string LStrip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Strip(const std::string &str) noexcept{
    // Replace code here
    return "";
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};