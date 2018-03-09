/*
    Checker template.
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    // Example, but you don't have to use streams!
    ifstream outFile(argv[1]);        // User output
    ifstream solFile(argv[2]);        // Expected output
    ifstream inFile(argv[3]);         // Input
    ofstream checkerOutput(argv[4]);  // Checker's output
    
    // Check solution. Score must be between 0.0 and 1.0 (including).
    double score = 0.0
    
    // Checker must output first like in one of the following ways:

    // Option 1: Output OK and score
    checkerOutput << "OK" << " " << score << endl;
    
    // Option 2: Just output OK. Same as option 1 with score = 1
    checkerOutput << "OK" << endl;
    
    // Option 3: Output WA. Score is zero in this case.
    checkerOutput << "WA" << endl;

    // Output anything else in other lines. If exists, this will be shown to user.
    checkerOutput << "Example message." << endl;

    outFile.close();
    solFile.close();
    inFile.close();
    checkerOutput.close();
    
    // Checker must return 0! Anything else is considered as checker failed.
    return 0;
}
