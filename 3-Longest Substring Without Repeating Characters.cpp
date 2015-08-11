#include "iostream"
#include "string"
#include "map"
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	map<char, int> maps;
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
    	return len;
    }
};

int main() {
	string s = "aab";
	Solution solve;
	cout << solve.lengthOfLongestSubstring(s);
	return 0;
}