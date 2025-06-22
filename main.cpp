#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    srand(time(0));
/*    const int minValue = 1;
    const int maxValue = 100;
*/
    int guess;
    //cout << "Enter your guess here: ";
    //cin >> guess;

    int num = (rand() % 100) + 1;
    //cout << "The random number was " << num << endl;

    int attempts;

    if (guess != num)
    {
        for (attempts = 4; attempts > -1; attempts--){
            if (attempts > -1){
                cout << "Enter your guess here: ";
                cin >> guess;
                cout << "Guess was incorrect" << endl;
                cout << "Attempts left: " << attempts << endl;
                cout << "Try Again" << endl;
            }
            else {
                cout << "Guess was incorrect" << endl;
                cout << "Attempts left: " << attempts << endl;
            }

            //cout << "The random number was " << num;
        }
    
        cout << "The random number was " << num;
    }
    else
    {

        cout << "Guess was correct" << endl;
    }

    return 0;
}