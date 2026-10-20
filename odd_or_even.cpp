import std;

int main() {

    int number = -1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The value " << number << " is an even number.\n";
    }
    else {
        std::cout << "The value " << number << " is not an even number.\n";
    }
}