import std;

int main() {

    double miles = -1;
    double kilo_meters = -1;

    std::cout << "Enter the distance in Miles: ";
    std::cin >> miles;

    kilo_meters = 1.609 * miles;

    std::cout << "The same distance in Kilometers is: "  << kilo_meters << " km\n";

}