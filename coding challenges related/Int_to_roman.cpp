#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };

        string result = "";

        for (auto &p : romanMap) {
            while (num >= p.first) {
                result += p.second;
                num -= p.first;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.intToRoman(3749) << endl; 
    return 0;
}
