#include <iostream>

using namespace std;

int main()
{
    /*
        0
        1
        0101 0110
         
        126 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 6 * 10 ^ 0 = 100 + 20 + 6
         
        1 0 1 0 = 1 * 2 ^ 3 + 1 * 2 ^ 1 = 8 + 0 + 2 + 0 = 10
         
        1 0 1 1 0 0 = 2 ^ 2 + 2 ^ 3 + 2 ^ 5 = 4 + 8 + 32 = 44
    */
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR.
        0 0 0
        0 1 1
        1 0 1
        1 1 0
        Bitwise left shift <<
        Bitwise right shif >>
    */
    cout << (10 & 2) << endl;
    /*
        1 0 1 0
        0 0 1 0
        -------
        0 0 1 0
     */
    cout << (10 | 2) << endl;
    /*
        1 0 1 0
        0 0 1 0
        -------
        1 0 1 0
     */
    cout << (10 ^ 2) << endl;
     /*
         1 0 1 0
         0 0 1 0
         -------
         1 0 0 0
      */
    cout << (~10) << endl;
     /*
        000000000000000000000000 1 0 1 0
        111111111111111111111111 0 1 0 1
      */
    cout << (10 >> 1) << endl; //this thing means that we are multiplying 10 by 2 raised to  to the power of 3
    /*
       000000000000000000000000 0 1 0 1
       5
    */
}
