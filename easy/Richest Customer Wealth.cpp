#include <iostream>
#include <vector>
#include <functional>
#include <algorithm> 

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        std::vector<int> biggest_wealth(accounts.size(), 0);
        for(int i = 0; i < accounts.size(); ++i){
            for(int j = 0; j < accounts[i].size(); ++j){
                biggest_wealth[i] += accounts[i][j];
            }
        }
        std::sort(biggest_wealth.begin(), biggest_wealth.end(), std::greater<int>());
        return biggest_wealth[0];
    }
};

int main(){
    std::vector<std::vector<int>> accounts = {{1,2,3},{3,2,1}};
    std::cout << "Output: " << Solution().maximumWealth(accounts);

    return 0;
}