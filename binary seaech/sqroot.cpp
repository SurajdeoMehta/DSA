https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
         int start=0;
         int end=x;
        while(start<=end)
        {
            long int mid=(start+end)/2;
            if(mid*mid==x)
            return mid;
            else if(mid*mid<x)
            start=mid+1;
            else
            end=mid-1;

        }
        return start-1;
    }
};
