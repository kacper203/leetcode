#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> ransomMap;
        for (char letter : magazine) {
            ransomMap[letter]++;
        }

        for (char letter : ransomNote) {
            if (ransomMap[letter] > 0) {
                ransomMap[letter]--;
            } else {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    std::string ransomNote = "aa", magazine = "aa";

    bool result = solution.canConstruct(ransomNote, magazine);
    std::cout << result << "\n";

    return 0;
}
