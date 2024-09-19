#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

// Function prototypes-- most probably u will learn about this later on in your course. 
void challengeForLoopForest();
void challengeWhileLoopWasteland();
void challengeDoWhileLoopDungeon();

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator, just generating a random number

    // Game introduction
    cout << "Welcome to Loop Adventure!, the most basic loop learner in C++\n";
    cout << "Your goal is to navigate through challenges using C++ loops.\n";
    cout << "You will face 3 challenges: a forest, a wasteland, and a dungeon.\n\n";

    // Play challenges
    challengeForLoopForest();
    challengeWhileLoopWasteland();
    challengeDoWhileLoopDungeon();

    // Game conclusion
    cout << "\nCongratulations! You've completed Loop Adventure.\n";
    cout << "You have learned how to use for loops, while loops, and do-while loops in C++.\n";

    return 0;
}

// Challenge 1: For Loop Forest
void challengeForLoopForest() {
    cout << "Challenge 1: The For Loop Forest\n";
    cout << "You need to collect 5 magical stones to escape the forest.\n";

    int stonesCollected = 0;

    int x = 0;

    cout << "Press 1 for collection and press 2 for no collection" << endl;
    cout << "Notice that this will run for five times, I will print this as well" << endl;

    // Use a for loop to simulate collecting 5 stones
    for (int i = 1; i <= 5; ++i) {
        cout << "Your Turn is right now :" << i;
        cout << "Enter your choice (1 or 2) :" << endl;
        cin >> x;
        if (x == 1)
        {
            cout << "Collecting stone " << i << "...\n";
            stonesCollected++;
        }
        else
        { 
            cout << "Not Collecting stone " << i << "...\n";
        }
        
    }

    // After the loop ends
    if (stonesCollected == 5) {
        cout << "You collected all 5 magical stones and escaped the forest!\n\n";
    }
    else {
        cout << "You failed to collect all the stones. Try again.\n";
    }
}

// Challenge 2: While Loop Wasteland
void challengeWhileLoopWasteland() {
    cout << "Challenge 2: The While Loop Wasteland\n";
    cout << "You are walking through the wasteland, but you can only cross when it's safe.\n";
    cout << "The wasteland is dangerous! You need to take 10 safe steps to cross.\n\n";

    int safeSteps = 0;
    char action;

    // While loop to simulate crossing the wasteland
    while (safeSteps < 10) { // till this doesnt reach 10, it wont exit!! try it yourself
        cout << "Press 'S' to step forward safely: ";
        cin >> action;

        if (action == 'S' || action == 's') {
            safeSteps++;
            cout << "You took a safe step! (" << safeSteps << "/10 steps)\n";
        }
        else {
            cout << "Oops! That's not a safe step. Try again.\n";
        }
    }

    cout << "You successfully crossed the wasteland with 10 safe steps!\n\n";
}

// Challenge 3: Do-While Loop Dungeon
void challengeDoWhileLoopDungeon() {
    cout << "Challenge 3: The Do-While Loop Dungeon\n";
    cout << "You are in a dark dungeon and must choose the correct door to escape.\n";
    cout << "You must choose between door 1 and door 2.\n";

    int choice;

    // Do-while loop to simulate choosing the correct door
    do {
        cout << "Which door will you choose? (1 or 2): ";
        cin >> choice;

        if (choice == 1) {
            cout << "You chose door 1... It's a trap! Try again.\n";
        }
        else if (choice == 2) {
            cout << "You chose door 2... You found the way out of the dungeon!\n";
        }
        else {
            cout << "Invalid choice. Please select door 1 or 2.\n";
        }
    } while (choice != 2);

    cout << "You escaped the dungeon!\n\n";
}
