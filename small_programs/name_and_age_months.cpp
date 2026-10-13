import std;

int main() {

    std::string name = "???";
    double age = -1.0;

    std::cout << "What is your name and age? ";
    std::cin >> name >> age;

    age *= 12;

    std::cout << "Hello " << name << ", you are " << age << " months old!\n";       // Example output: "Hello Alex, you are 20 years old!"
}