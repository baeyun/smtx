extern crate serde;
#[macro_use]
extern crate serde_derive;
use serde::Serialize;

#[derive(Debug, PartialEq, Serialize)]
enum Weapon {
    Fist,
    Equipment { name: String, damage: i32 },
}

#[derive(Debug, PartialEq, Serialize)]
struct Color(u8, u8, u8, u8);

#[derive(Debug, PartialEq, Serialize)]
struct Monster {
    hp: u32,
    mana: i32,
    enraged: bool,
    weapons: Vec<Weapon>,
    color: Color,
    position: [f64; 3],
    velocity: [f64; 3],
    coins: Vec<u32>,
}

#[repr(C)]
pub struct BufferResult {
    pub len: usize,
    pub ptr: *const u8,
}

#[unsafe(no_mangle)]
pub extern "C" fn get_buffer() -> BufferResult {
    let monster = Monster {
        hp: 80,
        mana: 200,
        enraged: true,
        color: Color(255, 255, 255, 255),
        position: [0.0; 3],
        velocity: [1.0, 0.0, 0.0],
        weapons: vec![
            Weapon::Fist,
            Weapon::Equipment {
                name: "great axe".to_string(),
                damage: 15,
            },
            Weapon::Equipment {
                name: "hammer".to_string(),
                damage: 5,
            },
        ],
        coins: vec![5, 10, 25, 25, 25, 100],
    };
    let s = serde_cbor::to_vec(&monster).expect("Failed to serialize data");

    println!("{:?}", s.as_ptr());
    println!("{:?}", s.len());

    BufferResult {
        len: s.len(),
        ptr: s.as_ptr(),
    }
}
