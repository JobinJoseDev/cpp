import std;

int main() {

    double val1 = -1, val2 = -1;

    std::cout << "Enter two numbers: ";
    std::cin >> val1 >> val2;

    if (val1 > val2) {
        std::cout << val1 << " is greater than " << val2 << std::endl;
    }
    else {
        std::cout << val2 << " is greater than " << val1 << std::endl;
    }

    std::cout << "The sum of the two numbers is " << val1+val2 << std::endl;

    std::cout << "The difference of the two numbers is " << val1-val2 << std::endl;

    std::cout << "The product of the two numbers is " << val1*val2 << std::endl;

    if (val2 == 0) {
        std::cout << "Cannot divide by 0!" << std::endl;
    }
    else{
        std::cout << "The ratio of the two numbers is " << val1/val2 << std::endl;
    }
}