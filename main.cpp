#include<iostream>

int problem_1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    std::cout << "Problem 1  (10): " << problem_1(10) << std::endl;
    std::cout << "Problem 1 (100): " << problem_1(100) << std::endl;
}
