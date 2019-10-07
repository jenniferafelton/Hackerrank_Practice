#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int w, int x, int y, int z);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four (int w, int x, int y, int z){
    int biggest =0;
    if ( w > x && w > y && w > z) {
        biggest = w;
    } else if ( x > w && x > y && x > z){
        biggest = x;
    } else if (y > w && y > x && y > z){
        biggest = y;
    } else if ( z > w && z > x && z > y){
        biggest = z;
    } else {
        cout << "not working"<< endl; 
    }


    return biggest;
}
