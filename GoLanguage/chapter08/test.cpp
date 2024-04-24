#include <iostream>

extern "C" {
    double average(double, double);
}

int main() {
    std::cout << "average of 3.0 and 27.0: " << average(3.0, 27.0) << std::endl;
}
