#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    srand(time(0));

    int guess;

    int num = (rand() % 100) + 1;
    cout << "The random number was " << num << endl;

    int attempts;

    cout << "You have 5 attempts" << endl;
    cout << "Enter your guess here: ";
    cin >> guess;

    for (attempts = 4; attempts >= 0; attempts--){

        if (guess == num)  {
            cout << "Guess was correct" << endl;
            cout << "The random number was " << num;
            return 0;
        }

        cout << "Attempts left: " << attempts << endl;

        if (attempts > 0) {
            cout << "Try Again" << endl;
            cout << "Enter here: ";
            cin >> guess;
        }

        if (attempts == 3) {
            cout << "Guess was incorrect" << endl;
            cout << "The number is between " << num - 10 << " and " << num + 10 << endl;
        }

        if (attempts == 2) {
            cout << "Guess was incorrect" << endl;
            cout << "The number is between " << num - 5 << " and " << num + 5 << endl;
        }

    }

        

    return 0;
}