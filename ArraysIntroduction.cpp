#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int numberGiven =0;
   int i = 0;
    cin >> numberGiven;
    int *numbers=new int[numberGiven];

     while (cin >> numbers[i++] );

     while (cout << numbers[--numberGiven] << ' '&& numberGiven);
    
     delete[] numbers;
   
   
    return 0;
}
