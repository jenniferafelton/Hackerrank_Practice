#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    int rowsData = 0;
    int dataQueries = 0;
    int numofColumns;
    
    cin >> rowsData >> dataQueries ;

    int **mainArray = new int*[rowsData];
    int ** queries = new int*[dataQueries];

    for (int i = 0; i < rowsData; i++){
        cin >> numofColumns;

        
        mainArray[i]=new int[numofColumns];
        for (int j = 0; j < numofColumns; j++){
                cin >> mainArray[i][j];
        }
    }

    for (int i = 0; i < dataQueries; i++){
        queries[i] = new int[2];
    }

    for (int i = 0; i < dataQueries; i++){
        cin >> queries[i][0] >> queries[i][1] ;
    }

    for (int i = 0; i < dataQueries; i++){
        cout << mainArray[queries[i][0] ] [queries [i][1]]<< endl;
    }

    return 0;
}
