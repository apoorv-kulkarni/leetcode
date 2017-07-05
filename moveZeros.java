/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

*/


public class Solution {
    public void moveZeroes(int[] num) {

        int start = 0;
        int tail = 0;
        while (start < num.length) {
            if (num[start] == 0) {
                ++start;
            } else {
                if (num[tail] == 0) {
                    num[tail] = num[start];
                    num[start] = 0;
                }
                ++tail;
                ++start;
            }
        }
    }
}