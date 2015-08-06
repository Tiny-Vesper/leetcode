#include "iostream"
#include "vector"
#include <tr1/unordered_map>
using namespace std;

class Solution{
public:
	vector<int> twoSum(vector<int> &numbers, int target){
		vector<int> ret;
		if (numbers.size() <= 1)
			return ret;
		tr1::unordered_map<int, int> myMap;
		for (int i = 0; i < numbers.size(); ++i)
			myMap[numbers[i]] = i; //numbers[i]是键值，i是元素   {2=0,7=1,11=2,15=3}
		for (int i = 0; i < numbers.size(); ++i){
			int rest_val = target - numbers[i];   //i = 0:rest_val=9-2=7
			if (myMap.find(rest_val) != myMap.end()){ // find()访问包含特定键的元素 myMap.find(rest_val) = 1
				int index = myMap[rest_val]; //index = 1
				if (index == i) //本身不会取，不可能一个元素加两次
					continue;
				if (index < i){ //找出来的元素小就放前面，i放后面`
					ret.push_back(index + 1);
					ret.push_back(i + 1);
					return ret;
				}
				else{  // index = 1 > i = 0
					ret.push_back(i + 1); //ret中添加元素 1 
					ret.push_back(index + 1); //ret中添加元素2(题目说了只有一组结果)
					return ret;
				}
			}
		}
	}
};

int main(){
	Solution s1;
	vector<int> numbers;
	vector<int> ret;
	numbers.clear();
	numbers.push_back(0);
	numbers.push_back(7);
	numbers.push_back(11);
	numbers.push_back(0);
	int target = 0;
	ret = s1.twoSum(numbers, target);
	for (int i = 0; i < ret.size(); ++i){
		cout << ret[i] << ' ';
	}
	return 0;
}