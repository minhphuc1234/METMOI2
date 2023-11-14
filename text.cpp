#include <iostream>
#include <cmath>

bool isPerfectSquare(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}

bool isPerfectNumber(int number) {
    if (number <= 1) {
        return false;
    }

    int sum = 1; // Bắt đầu từ 1 vì 1 là ước số của tất cả các số
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}

int main() {
    // Sử dụng hàm để kiểm tra số hoàn thiện
    int testNumber = 28; // Thay đổi số cần kiểm tra ở đây

    if (isPerfectNumber(testNumber)) {
        std::cout << testNumber << " là số hoàn thiện." << std::endl;
    } else {
        std::cout << testNumber << " không phải là số hoàn thiện." << std::endl;
    }

    // Sử dụng hàm để kiểm tra số chính phương
    int testNumber = 16; // Thay đổi số cần kiểm tra ở đây

    if (isPerfectSquare(testNumber)) {
        std::cout << testNumber << " là số chính phương." << std::endl;
    } else {
        std::cout << testNumber << " không phải là số chính phương." << std::endl;
    }

    return 0;
}