#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 
    int attempt = 0;
    int random_no = rand() % 100 + 1; 
    int guess;
    
    std::cout << "Welcome to the Guess the Number game!" << std::endl;

    while (true) {
        std::cout << "Guess the number: ";
        std::cin >> guess;
        attempt++;

        if (guess < random_no) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > random_no) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << random_no << " in " << attempt << " attempts." << std::endl;
            break;
        }
        
    }

    return 0;
}
