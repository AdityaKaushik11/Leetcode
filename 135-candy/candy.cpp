class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> min(n,1);

        

        for(int i = 1; i<n; i++){
            if(ratings[i] > ratings[i-1]){
                min[i] = min[i-1]+1;
            }
        }

        for(int i = n-2; i>=0; i--){
            if(ratings[i] > ratings[i+1]){
                min[i] = max(min[i], min[i+1]+1);
            }
        }

        int cnt = 0;
        for(int i =0;i < n; i++){
            cnt += min[i];
        }
        return cnt;

    }
};