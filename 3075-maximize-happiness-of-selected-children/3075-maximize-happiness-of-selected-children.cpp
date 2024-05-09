class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        std::sort(happiness.begin(), happiness.end(), std::greater<int>());
        
        long long minus = 0;
        long long sum = 0;
        for(long long i=0; i<k; i++) {
            auto value = happiness[i] - minus;
            if(value <= 0) value = 0;
            sum += value;
            minus++;
        }
        return sum;
    }
};