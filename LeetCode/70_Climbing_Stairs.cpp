// this approach is bases upon recursion but it wil, take 2^n complexity... so we use better approach 
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1){
            return 1;
        }
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

// another approach : iteratively

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1){
            return 1;
        }

        int one_step = 1;
        int two_step = 1;
        for(int i = 0; i < n -1; i++){
            int temp = one_step;
            one_step += two_step;
            two_step = temp;
        }
        return one_step;
    }
};
