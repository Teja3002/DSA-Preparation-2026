/*
 * Problem: Pattern 8
 * Difficulty: Easy
 * Topic: Fundamentals Of Programming
 * Platform: TUF+ (takeuforward.org)
 * Date: 2026-05-16
 */

class Solution {
public:
    void pattern8(int n) {
for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
    cout<<" ";}
    for(int j=1;j<=2*(n-i)+1;j++){
    cout<<"*";
    }
    cout<<endl;
}
    }
};