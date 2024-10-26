#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n = 1,p = 2,q = 3;
    
    //2. Add extra brackets to the following expressions to explicitly show the order in which the operators are evaluated:
    int r1 = ((((n <= (p + q)) && (n >= (p - q))) || (n == 0)) ? 1 : 0) * ((++n) * (q--) / (++p) - q);
    int r2 = (n | (p & (q ^ (p << (2 + q)))));
    int r3 = (p < q ? (n < p ? ((q * n) - 2) : ((q / n) + 1)) : (q - n));
    
    cout << endl << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    
    return 0;
}
