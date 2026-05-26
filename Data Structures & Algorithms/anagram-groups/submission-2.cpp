class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for (auto& s : strs) {
            vector<int> cnt(26, 0);
            for(auto ch : s){
                cnt[ch - 'a']++;
            }

            string key = to_string(cnt[0]);
            for(int  i=1; i< 26; i++){
                key += ',' + to_string(cnt[i]);
            }
            ans[key].push_back(s);
        }
        vector<vector<string>> answer;
        for(auto& k : ans){
            answer.push_back(k.second);
        }
        return answer;
    }
};