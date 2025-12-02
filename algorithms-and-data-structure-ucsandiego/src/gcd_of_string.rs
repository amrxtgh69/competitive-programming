// 1979. Find Greatest Common Divisor of Array

// Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.
// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.




impl Solution {
    pub fn find_gcd(mut nums: Vec<i32>) -> i32 {
        nums.sort();
        let sorted = nums.clone();

        let mut a = *sorted.first().unwrap();
        let mut b = *sorted.last().unwrap();

        while ( b != 0) {
            let r = a % b;
            a = b;
            b = r;
        }
        a
    }
}