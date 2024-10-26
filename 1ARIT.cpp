#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, o, p, q, b, t;
    string z, y, w, v;
    char u, j[100], qr[100];
    long f, g;
   
    //------------------------------------------------------------------------------------------------------------------
    //• To test if a number n is even.DONE
    cout << "Enter a value: " << endl;
    cin >> n;
    
   z = (n%2)?"Odd number":"Even number";
    cin.ignore();
    cout << n << " is an " << z << endl;
    //------------------------------------------------------------------------------------------------------------------
    //• To test if a character c is a digit.DONE
    //• To test if a character c is a letter.DONE
    cout << endl << "Enter a digit or letter (1): " << endl;
        cin >> u;
        
    y = (u>=0 && u<=9)?"a Digit":"an Letter";
    cin.ignore();
        cout << "input is " << y << endl;
    //------------------------------------------------------------------------------------------------------------------
    // Test if n is odd and positive or n is even and negative.DONE
    cout << endl << "Enter another value for o (to check odd + or even -): " << endl;
        cin >> o;

    if (o%2!=0 && o>0) {
            w = "an odd positive";
        } else if (o%2 == 0&& o<0) {
            w = "an even negative";
        } else {
            w = "not an odd positive or an even negative";
        }
        cout << "Input is " << w << endl;
    //------------------------------------------------------------------------------------------------------------------
    //• To set the n-th bit of a long integer  f  to 1.DONE
    cout << endl << "Enter long integer: " << endl;
    cin >> f;
    cout << "Set n-th bit value: ";
    cin >> p;
    f = f | (1 << p);
    cout << "value of long interger f " << p << "th bit to 1: " << f << endl;
    //------------------------------------------------------------------------------------------------------------------
    //• To reset the n-th bit of a long integer  g  to 0.DONE
    cout << endl << "Enter long integer: " << endl;
    cin >> g;
    cout << "Set n-th bit value: ";
    cin >> q;
    g = g | (0 << q);
    cout << "value of long interger g " << q << "th bit to 0: " << g << endl;
    //------------------------------------------------------------------------------------------------------------------
    //• To give the absolute value of a number n.DONE
    cout << endl << "Enter a value: " << endl;
        cin >> b;

    if (b<0) {
            t = b*-1;
    } else {
        t = b;
        }
        cout << "absolute value is: " << t << endl;
    
    //------------------------------------------------------------------------------------------------------------------
    //• To give the number of characters in a null-terminated string literal s.DONE
    cout << endl << "Enter characters: " << endl;
    cin >> j;
    cin.getline(j, 100);
    
    strcpy(qr, j);
    
    cout << "number of characters: " << strlen(qr) << endl;
    //------------------------------------------------------------------------------------------------------------------
    return 0;
}
