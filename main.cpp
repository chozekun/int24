#include "int24.h"

#include <unistd.h>
#include <iomanip>
#include <iostream>

using namespace std;

//TEST
int main()
{
    uint24_t testA(2);
    uint24_t testB(1);

    uint24_t testSA;
    testSA = 1;
    uint24_t testSB(2);
    testA = testA;
    testA = -testA;

    cout << "sizeof(uint24_t) = " << sizeof(uint24_t) << endl;
    testA = testSB - testSA;
    cout << testSB << " - " << testSA << " is " << testA << endl;
    testA = testSB + testSA;
    cout << testSB << " + " << testSA << " is " << testA << endl;
    testA = testSB * testSA;
    cout << testSB << " * " << testSA << " is " << testA << endl;
    testA = testSB / testSA;
    cout << testSB << " / " << testSA << " is " << testA << endl;
    testA = testSB % testSA;
    cout << testSB << " % " << testSA << " is " << testA << endl;

    testA = testSB >> testSA;
    cout << testSB << " >> " << testSA << " is " << testA << endl;
    testA = testSB << testSA;
    cout << testSB << " << " << testSA << " is " << testA << endl;
    testA = testSB | testSA;
    cout << testSB << " | " << testSA << " is " << testA << endl;
    testA = testSB & testSA;
    cout << testSB << " & " << testSA << " is " << testA << endl;
    testA = testSB ^ testSA;
    cout << testSB << " ^ " << testSA << " is " << testA << endl;

    cout << testA << " += " << testSA;
    testA += testSA;
    cout << " is " << testA << endl;
    cout << testA << " -= " << testSA;
    testA -= testSA;
    cout << " is " << testA << endl;
    cout << testA << " *= " << testSA;
    testA *= testSA;
    cout << " is " << testA << endl;
    cout << testA << " /= " << testSA;
    testA /= testSA;
    cout << " is " << testA << endl;
    cout << testA << " %= " << testSA;
    testA %= testSA;
    cout << " is " << testA << endl;

    cout << testA << " >>= " << testSA;
    testA >>= testSA;
    cout << " is " << testA << endl;
    cout << testA << " <<= " << testSA;
    testA <<= testSA;
    cout << " is " << testA << endl;
    cout << testA << " |= " << testSA;
    testA |= testSA;
    cout << " is " << testA << endl;
    cout << testA << " &= " << testSA;
    testA &= testSA;
    cout << " is " << testA << endl;
    cout << testA << " ^= " << testSA;
    testA ^= testSA;
    cout << " is " << testA << endl;

    testA = testSB == testSA;
    cout << testSB << " == " << testSA << " is " << testA << endl;
    testA = testSB != testSA;
    cout << testSB << " != " << testSA << " is " << testA << endl;
    testA = testSB < testSA;
    cout << testSB << " < " << testSA << " is " << testA << endl;
    testA = testSB > testSA;
    cout << testSB << " > " << testSA << " is " << testA << endl;
    testA = testSB <= testSA;
    cout << testSB << " <= " << testSA << " is " << testA << endl;
    testA = testSB >= testSA;
    cout << testSB << " >= " << testSA << " is " << testA << endl;

    return 0;
}
