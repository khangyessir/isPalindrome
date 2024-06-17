#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x){
        if(x < 0){
            return false;
        }
        long long ans = x;
        long long reversedNumber = 0;
        while(x != 0){
            int digit = x % 10;
            reversedNumber = reversedNumber * 10 + digit;
            x /= 10;
        }
        return ans == reversedNumber;
    }
};

int main()  {
    Solution sol;
    int x; cin >> x;
    if(sol.isPalindrome(x)) cout << "true";
    else cout << "false";
    return 0;
}