class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        unsigned int i;
        for (i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            if (m.count(remain)) {
                return {m[remain],i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};