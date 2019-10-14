#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int>  holder;
    int i;
    char c;
    stringstream ss(str);
    while (ss >> i) { holder.push_back(i);  ss >> c; }
    return holder;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    
    
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
