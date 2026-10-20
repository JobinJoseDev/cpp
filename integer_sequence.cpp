import std;

int main() {

    int val1 = -1, val2 = -1, val3 = -1;

    std::cout << "Enter 3 numbers: ";
    std::cin >> val1 >> val2 >> val3;

    std::cout << "\nThe numbers in sequence are: ";

    if (val1 <= val2 && val1 <= val3) {
        if (val2 <= val3) {
            std::cout << val1 << ", " << val2 << ", " << val3;
        }
        else {
            std::cout << val1 << ", " << val3 << ", " << val2;
        }
    }
    else if (val2 <= val1 && val2 <= val3) {
        if (val1 <= val3) {
            std::cout << val2 << ", " << val1 << ", " << val3;
        }
        else {
            std::cout << val2 << ", " << val3 << ", " << val1;
        }
    }
    else {                                              //  if (val2 <= val1 && val2 <= val3)
        if (val1 <= val2) {
            std::cout << val3 << ", " << val1 << ", " << val2;
        }
        else {
            std::cout << val3 << ", " << val2 << ", " << val1;
        }
    }

    std::cout << "\n";

}