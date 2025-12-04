fn insertion_sort(arr: &mut [i32]) {
    for j in 1..arr.len() {
        let key = arr[j];
        let mut i = j;
        while i > 0 && arr[i - 1] > key {
           arr[i] = arr[i - 1];
            i -= 1;
        }
        arr[i] = key;
    }
}
fn main() {
    let mut nums = [3, 2, 5, 6, 2, 9, 8];
    insertion_sort(&mut nums);
    println!("sorted array {:?}", nums);
}
