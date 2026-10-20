import std;

int main() {

    std::string val1 = "???", val2 = "???", val3 = "???";

    std::cout << "Enter 3 names: ";
    std::cin >> val1 >> val2 >> val3;

    std::cout << "The names in alphabetic order are: ";                     // Steinbeck Hemingway Fitzgerald

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