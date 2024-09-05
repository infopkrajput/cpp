// User function Template for C++

#include <vector>
#include <unordered_map>
#include <climits>

class Solution {
public:
    int findDuplicate(const std::vector<int>& arr, int k) {
        std::unordered_map<int, int> freqMap;

        // Step 1: Count the frequency of each element
        for (int num : arr) {
            freqMap[num]++;
        }

        // Step 2: Find the smallest element with exactly 'k' repetitions
        int smallest = INT_MAX;
        for (const auto& entry : freqMap) {
            if (entry.second == k) {
                smallest = std::min(smallest, entry.first);
            }
        }

        // Step 3: If no element is found with exactly 'k' repetitions, return -1
        return (smallest == INT_MAX) ? -1 : smallest;
    }
};