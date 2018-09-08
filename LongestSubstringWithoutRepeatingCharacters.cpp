// Using Hash-map
class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {
        int maxL = 0;
        unordered_map<char, int> cMap;
        for (int i = 0, flag = 0; i < s.length(); i++) {
            char curC = s[i];
            if (cMap.count(curC)) {
                flag = max(flag, cMap[curC] + 1);
            }
            maxL = max(maxL, i - flag + 1);
            cMap[curC] = i;
        }
        return maxL;
    }
};