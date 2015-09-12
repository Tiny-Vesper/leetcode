#include "iostream"
#include "string"
#include "map"
#include "cstring"
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int locs[256];//保存字符上一次出现的位置
        memset(locs, -1, sizeof(locs));
        int idx = -1, max = 0;//idx为当前子串的开始位置-1
        for (int i = 0; i < s.size(); i++)
        {
            if (locs[s[i]] > idx)//如果当前字符出现过，那么当前子串的起始位置为这个字符上一次出现的位置+1
            {
                idx = locs[s[i]];
            }

            if (i - idx > max)
            {
                max = i - idx;
            }

            locs[s[i]] = i;
        }
        return max;
    	/*map<char, int> maps;
    	int index = 0;
    	int temlen = 0;
    	int len = 0;
    	for (int i = 0; i < s.size(); ++i) {
    		if (maps.find(s[i]) == maps.end() ) {
    			maps[s[i]] = i;
    			temlen++;
    		}
    		else {
    			index = (index > maps[s[i]] ? index : maps[s[i]] );
    			temlen = i - index;
    			maps[s[i]] = i;
    		}
    		len = (len > temlen ? len : temlen);
    	}
    	return len;*/
    }
};

int main() {
	string s = "aab";
	Solution solve;
	cout << solve.lengthOfLongestSubstring(s);
	return 0;
}