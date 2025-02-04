#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    int a, b, sum, diff, prod, quo;
    
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    sum = add(a, b);
    diff = sub(a, b);
    prod = mul(a,b);
    
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Difference = " << diff << std::endl;
    std::cout << "Multiplication = " << prod << std::endl;

    return 0;
}
