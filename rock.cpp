#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    // Array of choices
    string choices[] = {"rock", "paper", "scissors"};

    // Generate a random choice for the computer
    int computerChoiceIndex = rand() % 3;
    string computerChoice = choices[computerChoiceIndex];

    // Prompt the user to choose
    cout << "Enter your choice (rock, paper, or scissors): ";
    string userChoice;
    cin >> userChoice;

    // Convert user choice to lowercase for case-insensitive comparison
    for (char &c : userChoice) {
        c = tolower(c);
    }

    // Determine the winner
    if (userChoice == "rock" && computerChoice == "scissors" ||
        userChoice == "paper" && computerChoice == "rock" ||
        userChoice == "scissors" && computerChoice == "paper") {
        cout << "You win! Computer chose " << computerChoice << ".\n";
    } else if (userChoice == "rock" && computerChoice == "paper" ||
               userChoice == "paper" && computerChoice == "scissors" ||
               userChoice == "scissors" && computerChoice == "rock") {
        cout << "Computer wins! Computer chose " << computerChoice << ".\n";
    } else {
        cout << "It's a tie! Both chose " << computerChoice << ".\n";
    }

    return 0;
}