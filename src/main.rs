#[link_args="src/ZZX.h"]
#[link_args="src/wrapper.h"]

pub struct ZZZx;

extern "C" {
    fn ZZZx_create(x:cty::c_int, y:cty::c_int) -> ZZZx;
}

fn main() {
    println!("Hello, world!");
}
