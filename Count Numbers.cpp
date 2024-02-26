#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countNumbers(string line) {
    stringstream ss(line);
    int count = 0;
    string token;
    while (ss >> token) {
        count++;
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line);
        int numCount = countNumbers(line);
        cout << numCount << endl;
    }

    return 0;
}
