#include <algorithm>
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        std::sort(happiness.begin(), happiness.end(), std::greater<int>());
        
        int minus = 0;
        long long sum = 0;
        for(long long i=0; i<k; i++) {
            sum += max(happiness[i] - minus, 0);
            minus++;
        }
        return sum;
    }
};