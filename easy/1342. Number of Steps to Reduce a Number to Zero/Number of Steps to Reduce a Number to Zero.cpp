#include <iostream>

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num != 0){
            if(num % 2 == 0){
                num = num / 2;
                steps++;
            } else if(num % 2 != 0){
                num -= 1;
                steps++;
            }
        }
        return steps;     
    }
};

int main(){
    int num = 14;
    std::cout << Solution().numberOfSteps(num);

    return 0;
}