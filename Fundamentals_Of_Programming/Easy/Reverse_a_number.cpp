class Solution {
   public:
    int reverseNumber(int n) {
        int revnum=0;
        int num;
      while (n > 0) {
            int lastnum = n % 10;
            revnum = (revnum* 10) + lastnum;
             n = n / 10;
        }
        return revnum;
    }
};