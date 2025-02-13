/* Patrón Numérico
*
* Descripción:
* Dado un número entero n, imprime un patrón en forma de diamante.
*
* Formato de salida:
* Las filas deben estar centradas con espacios en blanco a la izquierda para formar el diamante.
*
* Ejemplo 1:
* Para n = 3, la salida debería ser:
*       *
*     * * *
*   * * * * *
*     * * *
*       *
* */

use std::io::{self, Write};

fn print_diamond(n: i32) {
    for i in 1..=n {
        let spaces = " ".repeat((2 * (n - i) + 2) as usize);
        let stars = vec!["*"; (2 * i - 1) as usize].join(" ");
        println!("{}{}", spaces, stars);
    }
    for i in (1..n).rev() {
        let spaces = " ".repeat((2 * (n - i) + 2) as usize);
        let stars = vec!["*"; (2 * i - 1) as usize].join(" ");
        println!("{}{}", spaces, stars);
    }
}

fn main() {
    let mut input = String::new();
    print!("Reading n format pattern: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input).unwrap();
    let n: i32 = input.trim().parse().unwrap();
    print_diamond(n);
}
