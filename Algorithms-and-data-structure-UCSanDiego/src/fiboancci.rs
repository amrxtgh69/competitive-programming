impl Solution {
    pub fn fib(n: i32) -> i32 {
        if n <= 1 {
            return n;
        }
        let mut a: i32 = 0;
        let mut b: i32 = 1;

        for _ in 2..=n {
            let sum = a + b;
            a = b;
            b = sum;
        }
        return b;
    }
}
