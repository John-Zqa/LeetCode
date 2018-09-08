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

// Using int[128]
class Solution2 {
public:
    int lengthOfLongestSubstring(string s) {
        int maxL = 0, curL = 0, cIndex[128] = {0};
        for (int i = 0, flag = 0; i < s.length(); i++) {
            char curC = s[i];
            if (cIndex[curC] > flag) {
                flag = cIndex[curC];
            }
            curL = i - flag + 1;
            if (curL > maxL) {
                maxL = curL;
            }
            cIndex[curC] = i + 1;
        }
        return maxL;
    }
};