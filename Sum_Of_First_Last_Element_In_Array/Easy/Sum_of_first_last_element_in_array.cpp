/*
 * Problem: Sum of first last element in array
 * Difficulty: Easy
 * Topic: Sum Of First Last Element In Array
 * Platform: TUF+ (takeuforward.org)
 * Date: 2026-05-16
 */

class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
if(nums.empty())
 {
    return 0;
 }   int first=nums[0];
 int last=nums[nums.size()-1];
 return first+last;
 }
};