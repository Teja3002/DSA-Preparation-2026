/*
 * Problem: Pattern 6
 * Difficulty: Easy
 * Topic: Fundamentals Of Programming
 * Platform: TUF+ (takeuforward.org)
 * Date: 2026-05-16
 */

class Solution {
public:
    void pattern6(int n) {
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout<<j;
    }
    cout<<endl;
}

    }
};