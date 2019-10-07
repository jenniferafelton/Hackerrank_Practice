#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.

int a, b;
cin >> a >> b;
string words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

for (a; a < b+1; a++){
    if (a < 10){
    cout << words[a-1]<<endl;
    } else if (a > 9){
        if (a%2 == 0){
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }


}
