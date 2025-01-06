#include <iostream>
#include <string>
using namespace std;

bool findSubstring(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();
    
    if (m > n) {
        return false; 
    }
    
    // Sliding window
    for (int i = 0; i <= n - m; i++) {
        string window = text.substr(i, m);
        if (window == pattern) {
            cout << "Substring found at index: " << i << endl;
            return true;
        }
    }
    
    cout << "Substring not found" << endl;
    return false;
}

int main() {
    string text, pattern;
    cout << "Enter the main string: ";
    cin >> text;
    cout << "Enter the substring to find: ";
    cin >> pattern;
    
    findSubstring(text, pattern);
    return 0;
}
