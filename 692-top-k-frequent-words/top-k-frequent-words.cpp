class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        for(string s : words){
            mp[s]++;
        }
        vector<pair<string, int>> arr;
        for(auto x : mp){
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end(), [](pair<string, int>a, pair<string, int>b){
            if(a.second != b.second){
                return a.second > b.second;
            }
            return a.first < b.first;
        });

        vector<string> ans;

        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};