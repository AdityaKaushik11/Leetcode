class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;
        }
        vector<pair<int, int>> arr;
        for(pair<int, int> x : mp){
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end(), [](pair<int, int>a, pair<int, int>b){
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};