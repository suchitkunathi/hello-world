#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a, b, sum, diff;
    
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    sum = add(a, b);
    diff = sub(a, b);
    
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Difference = " << diff << std::endl;
    
    return 0;
}
