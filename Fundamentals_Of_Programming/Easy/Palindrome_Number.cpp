class Solution {
public:
    bool isPalindrome(int n) {
int revnum=0;
int num;
int v1=n;
while(n>0){
int lastnum=n % 10;

revnum=(revnum*10)+lastnum;
n=n / 10;