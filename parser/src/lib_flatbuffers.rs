extern crate flexbuffers;
extern crate serde;
#[macro_use]
extern crate serde_derive;
use serde::{Deserialize, Serialize};

#[derive(Debug, PartialEq, Serialize, Deserialize)]
enum Weapon {
    Fist,
    Equipment { name: String, damage: i32 },
}

#[derive(Debug, PartialEq, Serialize, Deserialize)]
struct Color(u8, u8, u8, u8);

#[derive(Debug, PartialEq, Serialize, Deserialize)]
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
pub struct FlexBufferResult {
    pub len: usize,
    pub ptr: *const u8,
}

#[unsafe(no_mangle)]
pub extern "C" fn get_flexbuffer() -> FlexBufferResult {
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
    let mut s = flexbuffers::FlexbufferSerializer::new();
    monster.serialize(&mut s).unwrap();
    
    // print s
    println!("{:?}", s.view());
    println!("{:?}", s.view().as_ptr());
    println!("{:?}", s.view().len());

    FlexBufferResult {
        len: s.view().len(),
        ptr: s.view().as_ptr(),
    }

    // let r = flexbuffers::Reader::get_root(s.view()).unwrap();

    // // Serialization is similar to JSON. Field names are stored in the buffer but are reused
    // // between all maps and structs.
    // println!("Monster stored in {:?} bytes.", s.view().len());
    // println!("{}", r);

    // let monster2 = Monster::deserialize(r).unwrap();

    // assert_eq!(monster, monster2);
}

// JUST MORE TESTS
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
