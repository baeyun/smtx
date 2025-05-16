#[unsafe(no_mangle)]
pub extern "C" fn greet() {
    println!("Hello from Rust!");
}

#[unsafe(no_mangle)]
pub extern "C" fn add(left: u64, right: u64) -> u64 {
    left + right
}

#[unsafe(no_mangle)]
pub extern "C" fn fib(n: u64) -> u64 {
    if n <= 1 {
        return n;
    }
    let mut a = 0;
    let mut b = 1;
    for _ in 2..=n {
        let temp = a + b;
        a = b;
        b = temp;
    }
    b
}

#[repr(C)]
pub struct Animal {
    name: *mut String,
    age: u8,
}

#[unsafe(no_mangle)]
pub extern "C" fn create_animal() -> *const Animal {
    let name = Box::into_raw(Box::new("Goat".to_owned()));
    let animal = Animal { name, age: 25 };
    Box::into_raw(Box::new(animal))
}
