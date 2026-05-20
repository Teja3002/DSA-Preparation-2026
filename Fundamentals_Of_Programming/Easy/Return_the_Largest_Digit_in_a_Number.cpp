class Solution {
public:
    int largestDigit(int n) {
 
int lagrgestnum=0;
while(n>0){
int lastnum=n % 10;

 n=n/10;
 if(lastnum>lagrgestnum){
lagrgestnum=lastnum;
    }
}

return lagrgestnum;