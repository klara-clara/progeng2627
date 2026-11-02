#include <iostream>
#include <vector>

bool digits_in_base(int num, int base, std::vector<int>& digits) {
    if (base < 2) return false;
    if (num < 0) return false; // optional: handle negatives separately

    digits.clear();

    if (num == 0) {
        digits.push_back(0);
        return true;
    }

    while (num > 0) {
        digits.push_back(num % base); // least-significant digit first
        num /= base;
    }

    return true;
}

void print_digits_as_number(int base, const std::vector<int>& digits) {
    const char* symbols = "0123456789ABCDEF"; // up to base 16

    // print from back to front (since digits were stored reversed)
    for (int i = static_cast<int>(digits.size()) - 1; i >= 0; --i) {
        int d = digits[i];
        if (d < 16) std::cout << symbols[d];
        else std::cout << d;
    }
    std::cout << '\n';
}

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(base, digits); // prints FA
    } else {
        std::cout << "Invalid base";
    }

    return 0;
}

