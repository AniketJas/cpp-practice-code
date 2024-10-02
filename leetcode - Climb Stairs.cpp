//leetcode - Climb Stairs

//recursion
//dynamic programming

int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        int last = climbStairs(n-1);
        int secondlast = climbStairs(n-2);
        return last+secondlast;
}//tle

