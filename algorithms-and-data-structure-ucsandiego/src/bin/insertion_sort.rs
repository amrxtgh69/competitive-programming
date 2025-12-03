fn insertion_sort(arr: &mut [i32; 7]) {
    for j in 2..arr.len() {
        let key = arr[j - 1];
        let mut i = j - 2;
        while i > 0 && arr[i] > key {
           arr[i + 1] = arr[i];
            i -= 1;
        }
        arr[i + 1] = key;
    }
}
fn main() {
    let mut nums: [i32; 7] = [3, 2, 5, 6, 2, 9, 8];
    println!("sorted array {:?}", insertion_sort(&mut nums));
}
