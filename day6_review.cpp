#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int numTestCases = 0 ;
cin>>numTestCases;

string words[numTestCases];
  for (int i = 0; i < numTestCases; i++){
        cin>>words[i];
  }

string splitWords, wordOne, wordTwo; 

for (int i = 0; i < numTestCases; i ++){
     splitWords=words[i];
        for (int j=0; j<splitWords.length(); j++){
              if (j%2==0){
              wordOne += splitWords[j];
              }
              if (j%2 !=0 ){
              wordTwo += splitWords[j];
              }   
        }    
    cout<<wordOne<<" "<<wordTwo<<endl;  
    wordOne = "";
    wordTwo = "";
 }
    

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
