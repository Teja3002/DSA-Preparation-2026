/*
 * Problem: Pattern 11
 * Difficulty: Easy
 * Topic: Fundamentals Of Programming
 * Platform: TUF+ (takeuforward.org)
 * Date: 2026-05-16
 */

class Solution {
   public:
    void pattern11(int n) {
        for (int i = 1; i <= n; i++) {
            int value;

            if (i % 2 == 1) {
                value = 1;
            } else {
                value = 0;
            }

            for (int j = 1; j <= i; j++) {
                cout << value << " ";
                value = 1 - value;
            }

            cout << endl;
        }
    }
};