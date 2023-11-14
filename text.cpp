#include <iostream>
#include <cmath>

bool isPerfectSquare(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}

int main() {
    // Sử dụng hàm để kiểm tra số chính phương
    int testNumber = 16; // Thay đổi số cần kiểm tra ở đây

    if (isPerfectSquare(testNumber)) {
        std::cout << testNumber << " là số chính phương." << std::endl;
    } else {
        std::cout << testNumber << " không phải là số chính phương." << std::endl;
    }

    return 0;
}