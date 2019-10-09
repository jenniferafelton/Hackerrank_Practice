#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int numberGiven =0;
   cin >> numberGiven;
   int *numbers=new int[numberGiven];

    for (int i = 0; i<numberGiven; i++){
        cin >> numbers[i];
    }

   
         for (int i = numberGiven; i!=0; i--){
       cout << numbers[i-1] << " ";
   }
