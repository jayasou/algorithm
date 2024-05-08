class Solution {
    set<pair<int,int>> matrix_;
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int i = 0;
        for(auto &s: score) {
            matrix_.insert({s, i++});
        }
        
        int last = score.size();
        vector<string> result( last );
        for(auto &pair: matrix_) {
            if(last == 3) result[ pair.second ] = "Bronze Medal";
            else if(last == 2) result[ pair.second ] = "Silver Medal";
            else if(last == 1) result[ pair.second ] = "Gold Medal";
            else result[ pair.second ] = std::to_string(last);
            last--;
        }
        return result;
    }
};