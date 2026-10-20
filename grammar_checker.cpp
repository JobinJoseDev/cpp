import std;

int main() {

	std::string previous;
	std::string current;

	while (std::cin >> current) {						// takes continuous string input until terminated with Ctrl+D on Linux

		if (previous == current) 
			std::cout << "repeated word: " << current << '\n';		// sample output: "repeated word: name"

		previous = current;						// updates the previous to the current word, for checking te next word

	}
}
