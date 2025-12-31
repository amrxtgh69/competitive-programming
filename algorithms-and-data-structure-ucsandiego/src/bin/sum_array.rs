fn sum_array(arr: &[i32]) -> i32 {
    let mut sum = 0;
    for i in 0..arr.len() {
        sum += arr[i];
    }
    sum
}

fn main() {
    let nums = [9, 5, 3, 1, 2];
    println!("The sum of arrays is {:?}", sum_array(&nums));
}   
