fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        a
    } else {
        gcd(b, a%b)
    }
}

fn main() {
    gcd(890, 128);
}
