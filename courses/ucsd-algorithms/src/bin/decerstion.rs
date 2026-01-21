//Rewrite the INSERTION-SORT procedure to sort into monotonically
//decreasing instead of monotonically increasing order.


fn decerstion(arr: &mut [i32]) -> &mut [i32] {
    for i in 1..arr.len() {
        let key = arr[i];
        let mut j = i;
        while j > 0 && arr[j - 1] < key {
            arr[j] = arr[j - 1];
            j -= 1;
        }
        arr[j] = key;
    }
    arr
}

fn main() {
    let mut nums = [7, 5, 9, 8, 2];
    let decreasing_sorted = decerstion(&mut nums[..]);
    println!("{:?}", decreasing_sorted);
}
