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

        cout << "Guess was incorrect" << endl;
        cout << "Attempts left: " << attempts << endl;

        if (attempts > 0) {
            cout << "Try Again" << endl;
            cin >> guess;
        }

    }

        

    return 0;
}