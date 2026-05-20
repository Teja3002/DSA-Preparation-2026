class Solution {
   public:
    int primeUptoN(int n) {
        int count = 0;
        for (int i = 2; i <= n; i++) {
            int num=0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    num++;
                }
            }
            if(num==2){
                count++;
            }