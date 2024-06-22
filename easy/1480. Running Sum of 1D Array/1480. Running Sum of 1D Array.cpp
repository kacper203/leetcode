#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> result(nums.size(), 0);
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            result[i] = result[i-1] + nums[i];
        }
        return result;
    }
};

int main(){
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> result = Solution().runningSum(nums);
    for(int i = 0; i < result.size(); ++i){
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
