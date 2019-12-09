#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    map <string, int> directory;
    map <string, int>:: iterator it;

    string name="";
    int number=0;

    int numEntries = 0;
    cin >> numEntries;

    for (int i = 0; i < numEntries; i++){
        cin >> name; 
        cin >> number;
        directory.insert({name, number});
    }

    
    string nameSearched;
    
    while (cin >> nameSearched){

        it = directory.find(nameSearched);

        if(it != directory.end()){
            cout << it->first << "=" << it->second << endl;
        } else {
            cout << "Not found"<<endl; 
        }
    }
    return 0;
}
