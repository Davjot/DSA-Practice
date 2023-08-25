// This approach is Recursive
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0){
            return false;
        }
        else if(n == 1){
            return true;
        }
        return n % 3 == 0 && isPowerOfThree(n / 3);
    }
};

// This approaach is Iterative
class Solution{
public:
    bool isPowerOfThree(int n){
        if(n == 0){
            return false;
        }
        while(n % 3 == 0){
            n = n / 3;
        }
        return n == 1;
    }
};
