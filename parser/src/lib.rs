#[derive(Debug, PartialEq)]
#[repr(C)]
pub enum Weapon {
    Fist,
    Equipment { name: String, damage: i32 },
}

#[derive(Debug, PartialEq)]
#[repr(C)]
pub struct Color(u8, u8, u8, u8);

#[derive(Debug, PartialEq)]
#[repr(C)]
pub struct Monster {
    hp: u32,
    mana: i32,
    enraged: bool,
    weapons_ptr: *const Weapon,
    weapons_len: usize,
    color: Color,
    position: [f64; 3],
    velocity: [f64; 3],
    coins_ptr: *const u32,
    coins_len: usize,
}

#[unsafe(no_mangle)]
pub extern "C" fn get_buffer() {
    println!("Hello from Rust!");
}
