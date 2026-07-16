class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int elm;

        for(int i =0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                elm = nums[i];
            }
            else if(nums[i] == elm){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return elm;
    }
};