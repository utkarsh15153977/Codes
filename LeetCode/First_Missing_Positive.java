/*

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:

Input: nums = [1,2,0]
Output: 3
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
 

Constraints:

1 <= nums.length <= 5 * 105
-231 <= nums[i] <= 231 - 1


Space Time Complexity
S(n)=S(0)
T(n)=T(0)
*/

class Solution {
    public int firstMissingPositive(int[] nums) {
        boolean isOnePresent = false;
        
        int n = nums.length;
        
//      Check   IsOnePresent  
// If not in range, change to 1    
        for(int i=0; i<nums.length; i++){
            if(nums[i] == 1){
                isOnePresent = true;
            }
            
            if(nums[i] < 1 || nums[i] > n){
                nums[i] = 1;
            }
        }

// if one not present 
        if(!isOnePresent)return 1;
        
// mark the attendence
        for(int val: nums){
            int copy = Math.abs(val);
            if(nums[copy-1] > 0){
                nums[copy-1] = -nums[copy-1];
            }
        }
        
        
// find the absent element
        for(int i = 0; i< nums.length; i++){
            if(nums[i] > 0){
                return i+1;
            }
        }
        
        return n+1;

    }
}
