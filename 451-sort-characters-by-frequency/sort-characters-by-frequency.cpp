class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> ans;
        unordered_map<char, int> mp;
        for(char c : s){
            mp[c]++;
        }
        for(auto x : mp){
            ans.push_back({x.first, x.second});
        }
        sort(ans.begin(), ans.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });

        string result = "";

        for (auto x : ans) {
            for (int i = 0; i < x.second; i++) {
                result += x.first;
            }
        }

        return result;
    }
};