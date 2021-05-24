use std::io;

fn print_values(r1: f64, r2: f64) -> () {
    println!("R1 = {:5}", r1);
    println!("R2 = {:5}", r2);
}

fn delta(a: f64, b: f64, c: f64) -> f64 {
    (b * b) - 4.0 * a * c
}

fn bhasckara(a: f64, b: f64, delta: f64) -> (f64, f64) {
    (
        (-b + delta.sqrt()) / (2.0 * a),
        ((-b - delta.sqrt()) / (2.0 * a)),
    )
}

fn main() {
    let mut buf = String::new();
    io::stdin().read_line(&mut buf).unwrap();

    let (a, b, c): (f64, f64, f64) = buf.trim().parse().unwrap();
    // println!("{}", buf.trim().parse().unwrap());

    // let delta: f64 = delta(a, b, c);
    // if delta > 0.0 && a != 0.0 {
    //     let (r1, r2) = bhasckara(a, b, delta);
    //     print_values(r1, r2);
    // } else {
    //     println!("Impossivel calcular");
    // }
}
