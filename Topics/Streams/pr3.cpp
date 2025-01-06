#include <iostream>
#include <string>

using namespace std;

// Implementing this function
bool containsGlitchPattern(const string& videoStream, const string& glitchPattern) {
    int n = videoStream.length();
    int m = glitchPattern.length();

    // Ensure the pattern can fit in the stream
    if (m > n) {
        return false;
    }

    // Sliding Window Technique
    for (int i = 0; i <= n - m; i++) {
        if (videoStream.substr(i, m) == glitchPattern) {
            return true;
        }
    }

    return false;
}

int main() {
    string videoStream, glitchPattern;
    cin >> videoStream;
    cin >> glitchPattern;

    // Please do not change the below code
    if (containsGlitchPattern(videoStream, glitchPattern)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
