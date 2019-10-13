#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string inputOne, inputTwo;

  cin >> inputOne;
  cin >> inputTwo;

    int lengthOne = inputOne.size();
    int lengthTwo = inputTwo.size();

    cout << lengthOne << ' ' << lengthTwo << endl;
    cout << inputOne + inputTwo << endl;

    char swapOne = inputOne[0];
    char swapTwo = inputTwo[0];

    inputTwo[0] = swapOne ;
    inputOne[0] = swapTwo;

    cout << inputOne <<' '<< inputTwo << endl;
    

    return 0;
}

