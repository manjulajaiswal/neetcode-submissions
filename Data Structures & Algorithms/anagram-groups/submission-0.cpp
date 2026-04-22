class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for (auto& s : strs) {
            string sortS = s;
            sort(sortS.begin(), sortS.end());
            ans[sortS].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : ans) {
            result.push_back(pair.second);
        }
        return result;
    }
};