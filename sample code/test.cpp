#include <iostream>

int main() {
    std::cout << "Using endl:" << std::endl;  // Insert newline and flush immediately.
    std::cout << "This will appear immediately." << std::endl;

    std::cout << "Using \"\\n\":" << "\n";  // Insert newline without immediate flush.
    std::cout << "This may not appear immediately." << "\n";

    return 0;
}