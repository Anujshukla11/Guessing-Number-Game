#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random, guess;
    int no_of_attempt = 0;

    srand((time(nullptr)));
    random = rand() % 100 + 1;

    do {
        cout << "Enter your guess (1 to 100): ";
        cin >> guess;
        no_of_attempt++;

        if (guess > random) {
            cout << "Guess a smaller number\n";
        } else if (guess < random) {
            cout << "Guess a larger number\n";
        } else {
            cout << "Congratulations!!! You have guessed the number in " << no_of_attempt << " attempts.\n";
        }
    } while (guess != random);

    cout << "Developed By: Anuj Shukla\n";
    return 0;
}
