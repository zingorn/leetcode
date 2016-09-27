#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	 	for (int i = 0; i < nums.size(); i++) {
    		for (int k = nums.size() - 1; k != i; k--) {
    			if (nums[k] + nums[i] == target) {
    				return vector<int> {i, k};
    			}
    		}
    	}
        return nums;
    }
};

int main(int argc, char const *argv[])
{
	std::vector<int> v {-1, -2, -3, -4, -5}, f;
	Solution s = Solution();
	f = s.twoSum(v, -8);
	for (int i = 0; i < f.size(); i++) {
		cout << f[i] << " ";
	}
	
	return 0;
}