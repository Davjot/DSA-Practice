// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int start = 0;
        long int end = n;
        long int res = 0;

        while(start <= end){
            int mid = (start + end) / 2;
            if(isBadVersion(mid) == 1){
                res = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return res;
    }
};
