#include <iostream>
#include <string>
using namespace std;

void swapCharacters(string &str, int pos1, int pos2) {
    // Check if the positions are valid
    if (pos1 >= 0 && pos1 < str.length() && pos2 >= 0 && pos2 < str.length()) {
        // Swap the characters at pos1 and pos2
        char temp = str[pos1];
        str[pos1] = str[pos2];
        str[pos2] = temp;
    } else {
        cout << "Invalid positions!" << endl;
    }
}

int main() {
    string str;
    int pos1, pos2;

   
    cout << "Enter a string: ";
    cin >> str;

    // Input positions to swap
    cout << "Enter the first position to swap (0-based index): ";
    cin >> pos1;
    cout << "Enter the second position to swap (0-based index): ";
    cin >> pos2;

    // Perform the swap
    swapCharacters(str, pos1, pos2);

    // Output the modified string
    cout << "String after swapping: " << str << endl;

    return 0;
}

