class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        int minLength = INT_MAX;

        unordered_map<char, int> required;
        unordered_map<char, int> window;

        for(char c : t){
            required[c]++;
        }

        int left = 0;
        int count = 0;
        int start = 0;

        for(int right = 0; right<m; right++){
            if(required.find(s[right]) != required.end()){
                window[s[right]]++;

                if(window[s[right]] <= required[s[right]]){
                    count++;
                }
            }

            while(count == n){
                if(right-left+1 < minLength){
                    minLength = right - left +1;
                    start = left;
                }

                if(required.find(s[left]) != required.end()){
                    window[s[left]]--;

                    if(window[s[left]] < required[s[left]]){
                       count--;
                    }
                    
                }
                left++;

                
                
            }
        }

        if (minLength == INT_MAX) {
            return "";
        }
                
        return s.substr(start, minLength);


    }
};