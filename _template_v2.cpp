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

    // Check solution. Score must be between 0.0 and 1.0 (including)
    double score = 0.0

    // Output score in first line
    checkerOutput << score << endl;

    // Output anything else in other lines. This will be shown to user.
    checkerOutput << "Example message." << endl;

    outFile.close();
    solFile.close();
    inFile.close();
    checkerOutput.close();
    
    // Checker must return 0!
    return 0;
}
