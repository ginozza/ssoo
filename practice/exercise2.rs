use std::io::{self, Write};

fn print_square_sequence(n: i32) {
    let size: i32 = (2 * n) - 1;

    for i in 1..=size {
        for j in 1..=size {
            let mut min: i32 = i - 1;
            if j - 1 < min {
                min = j - 1;
            }
            if size - i < min {
                min = size - i;
            }
            if size - j < min {
                min = size - j; 
            }
            print!("{} ", n - min);
        }
        println!();
    }
}

fn main() {
    let mut input = String::new();
    print!("Reading n format pattern: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();
    print_square_sequence(n);
}
