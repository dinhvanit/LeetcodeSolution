class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map <int, int> freq;
        vector <int> duplicates;
        for (int i=0; i<nums.size() ; i++) {
            freq[nums[i]]++;
        }
        for (auto p : freq) {
            if(p.second == 2){
                duplicates.push_back(p.first);
            }
        }
        return duplicates;
    }
};