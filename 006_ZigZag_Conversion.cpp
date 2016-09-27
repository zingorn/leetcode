#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
    	vector<string> out;
    	int row = 0, col =0,  i = 0;
        while (i < s.length()) {
        	if (row < numRows) {
        		out[row][col] = s[i];
        		row++;
        	} else {
        		do {
        			col++;
        			row--;
        			out[row][col] = s[i];
        		} while (row == 0);
        	}
        }

        string result;
        for (auto const& s : out) { result
         += s; }
        return s;
    }
};

int main(int argc, char const *argv[])
{
	Solution s = Solution();
	cout << s.convert("PAYPALISHIRING", 3)<< endl;
	return 0;
}