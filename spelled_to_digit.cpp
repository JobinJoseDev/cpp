import std;

int main() {

    std::string spelled_input = "???";
    int digit_output = -1;

    std::cout << "Spell a number: ";
    std::cin >> spelled_input;

    if (spelled_input == "zero") {
        std::cout << "0\n";
    }
    else if (spelled_input == "one") {
        std::cout << "1\n";
    }
    else if (spelled_input == "two") {
        std::cout << "2\n";
    }
    else if (spelled_input == "three") {
        std::cout << "3\n";
    }
    else if (spelled_input == "four") {
        std::cout << "4\n";
    }
    else {
        std::cout << "not a number I know\n";
    }
}