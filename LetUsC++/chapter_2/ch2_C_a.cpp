#include <iostream>
using namespace std;

// Function to simulate clearing the screen or a part of it
void cls(int startRow = 0, int endRow = 24, int startCol = 0, int endCol = 79);

int main()
{
    // Clear the entire screen
    cls();

    // Clear a part of the screen (rows 5 to 10 and columns 10 to 30)
    // cls(5, 10, 10, 30);

    return 0;
}

void cls(int startRow, int endRow, int startCol, int endCol)
{
    // Check bounds
    if (startRow < 0)
        startRow = 0;
    if (endRow > 24)
        endRow = 24;
    if (startCol < 0)
        startCol = 0;
    if (endCol > 79)
        endCol = 79;

    // Clear the specified part of the screen
    for (int i = startRow; i <= endRow; ++i)
    {
        for (int j = startCol; j <= endCol; ++j)
        {
            // cout << "\033[" << i + 1 << ";" << j + 1 << "H" << ' ';
            cout << " ";
        }
    }

    // Move cursor to the bottom to avoid overwriting the cleared part
    // cout << "\033[25;1H";
}
