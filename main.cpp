#include <iostream>
#include <fstream>
#include <vector>
#include "convstuff.h"

void print_vector(const std::vector<double>& v) {
    for (double x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<double> f1 {0, 1, 2, 3, 2, 1};
    std::vector<double> f2 {-2, -2, -2, -2, -2, -2, -2};
    std::vector<double> f3 {1, -1, 1, -1};
    std::vector<double> f4 {0, 0, 0, -3, -3};

    std::cout << "f1 * f1 = ";
    print_vector(conv(f1, f1));

    std::cout << "f1 * f2 = ";
    print_vector(conv(f1, f2));

    std::cout << "f1 * f3 = ";
    print_vector(conv(f1, f3));

    std::cout << "f2 * f3 = ";
    print_vector(conv(f2, f3));

    std::cout << "f1 * f4 = ";
    print_vector(conv(f1, f4));


    std::ofstream out("tomatos.txt");

    out << "tomato " << "5.55 " << "5";
    out.close();

    return 0;
}

