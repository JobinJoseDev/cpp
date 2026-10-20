import std;

int main() {

	std::string first_name = "???";

	std::cout << "Enter the name of the person you want to write to: ";
	std::cin >> first_name;
	
	std::cout << "Dear " << first_name << "," << std::endl;
	std::cout << "\t How are you? I am fine. I miss you.\n";

	std::cout << "Who was that friend of yours?: ";
	std::string friend_name = "???";
	std::cin >> friend_name;
	std::cout << "\nHave you seen " << friend_name << " recently?\n";
	
	std::cout << "Enter the age of the recipient?  ";
	int age = -1;
	std::cin >> age;

	int i = -1;

	while(i != 0) {
		if (age <= 0 || age >= 110) {
			std::cout << "you're kidding!\nTry age again: ";
			std::cin >> age;
			i = -1;
		}
		else {
			std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
			i = 0;
		}
	}

	if (age < 12) {
		std::cout << "Next year you will be " << age+1 << std::endl;
	}
	else if(age == 17) {
		std::cout << "Next year you will be able to vote." << std::endl;
	}
	else if(age > 70) {
		std::cout << "Are you retired?" << std::endl;
	}
	else {
		std::cout << "" << std::endl;
	}

	std::cout << "Your's sincerely,\n\n";

	std::cout << "my_name\n";

}
