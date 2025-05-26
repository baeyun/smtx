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
pub extern "C" fn get_buffer() -> Monster {
    // Store the vectors in static variables to keep them alive for FFI
    static mut WEAPONS: Option<Vec<Weapon>> = None;
    static mut COINS: Option<Vec<u32>> = None;

    unsafe {
        WEAPONS = Some(vec![
            Weapon::Fist,
            Weapon::Equipment {
                name: "great axe".to_string(),
                damage: 15,
            },
            Weapon::Equipment {
                name: "hammer".to_string(),
                damage: 5,
            },
        ]);
        COINS = Some(vec![5, 10, 25, 25, 25, 100]);

        let weapons_ref = WEAPONS.as_ref().unwrap();
        let coins_ref = COINS.as_ref().unwrap();

        Monster {
            hp: 80,
            mana: 200,
            enraged: true,
            color: Color(255, 255, 255, 255),
            position: [0.0; 3],
            velocity: [1.0, 0.0, 0.0],
            weapons_ptr: weapons_ref.as_ptr(),
            weapons_len: weapons_ref.len(),
            coins_ptr: coins_ref.as_ptr(),
            coins_len: coins_ref.len(),
        }
    }
}
