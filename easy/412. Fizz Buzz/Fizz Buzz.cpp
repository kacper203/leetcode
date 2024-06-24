#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> result(n);
        for (int i = 1; i <= n; ++i)
        {
            if(i % 3 == 0 && i % 5 == 0){
                result[i-1] = "FizzBuzz";
            } else if(i % 3 == 0){
                result[i-1] = "Fizz";
            } else if(i % 5 == 0){
                result[i-1] = "Buzz";
            } else {
                result[i-1] = std::to_string(i);
            }
        }
        return result;
    }
};

int main(){
    int n = 5;
    std::vector<std::string> result = Solution().fizzBuzz(n);
    for (int i = 0; i < result.size(); ++i)
    {   
        if(i == 0){
            std::cout << "[\""<< result[i] << "\",\"";
        } else if (i == result.size() - 1){
            std::cout << result[i] << "\"]";
        } else {
            std::cout << result[i] << "\", \"";
        }
    }
    
    return 0;
}