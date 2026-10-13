import std;

int main() {

    std::string name = "???";
    int age = -1;

    std::cout<<"Enter your name and age: ";
    std::cin>>name>>age;

    std::cout<<"Hello "<< name <<", you are "<<age<< " years old!\n";      // Example output: "Hello Achsa, you are 18 years old!"
}