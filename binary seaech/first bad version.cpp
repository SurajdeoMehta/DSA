https://leetcode.com/problems/first-bad-version/submissions/865217559/

class Solution {
public:
    int firstBadVersion(int n) {
     
           long int start = 1;
            long int end = n;
            while (start < end)
            {
               long int mid = (start +end) / 2;
                if (isBadVersion(mid))
                    end = mid-1;
                else
                    start = mid+ 1;
                    if(isBadVersion(mid)&& !(isBadVersion(mid-1)))
                    return mid;
            }
            return end;   
    }
};
