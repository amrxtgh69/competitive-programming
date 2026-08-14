fn stack_empty(top: &mut usize) -> bool {
    *top == 0
}

fn stack_push(s: &mut [i32], x: i32, top: &mut usize) {
    if *top >= s.len() {
        eprintln!("Stack overflow");
    } else {
        s[*top] = x;
        *top += 1;
    }
}
fn stack_pop(s: &mut [i32], top: &mut usize) -> Option<i32> {
    if stack_empty(top) {
        eprintln!("Stack underflow");
        None
    } else {
        *top -= 1;
        Some(s[*top])
    }
}

fn main() {
    let mut arr = [0; 10];
    let mut top: usize = 0;

    stack_push(&mut arr, 10, &mut top);
    println!("Pushed 10, top = {}", top);
    if let Some(value) = stack_pop(&mut arr, &mut top) {
        println!("Popped: {}, top = {}", value, top);
    }

    for i in 0..12 {
        stack_push(&mut arr, i, &mut top);
    }
    println!("Tried to push 12 items into a size-10 stack, top = {}", top);

    while !stack_empty(&mut top) {
        stack_pop(&mut arr, &mut top);
    }
    println!("Emptied the stack, top = {}", top);
    stack_pop(&mut arr, &mut top); // prints underflow message
    println!("stack_empty after emptying = {}", stack_empty(&mut top));
}
