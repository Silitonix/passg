#include <iostream>

namespace Console {
  void Write(const std::string& text) {
    std::cout << text;
  }

  void WriteLine(const std::string& text = "") {
    std::cout << text << '\n';
  }
}