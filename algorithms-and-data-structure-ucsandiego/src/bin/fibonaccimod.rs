use std::io::{self, Write};

fn main() {
    let mut a = String::new();
    let mut b = String::new();
    print!("enter n: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut a).unwrap();
    
    print!("enter m:");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut b).unwrap();

    let num1: u64 = a.trim().parse().unwrap();
    let num2: u64 = b.trim().parse().unwrap();

    let ans = fib(num1, num2);
    print!("Fib num1 mod num2 {}", ans);
}

pub fn fib(num1: u64, num2: u64) -> u64 {
    if num1 == 0 {return 0;}
    if num1 == 1 {return 1 % num2;}
    let mut x: u64 = 0;
    let mut y: u64 = 1;

    for _ in 2..=num1 {
        let sum = (x + y) % num2;
        x = y;
        y = sum;
    }
    y 
}
