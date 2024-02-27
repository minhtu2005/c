let a = Number(prompt("Nhập số nguyên dương a: "));
let b = Number(prompt("Nhập số nguyên dương b: "));

let s = 0;
if (isNaN(number) || number <= 0) {
    console.log("Vui lòng nhập một số nguyên dương.");
} else {
    let sum = 0;

    for (let i = 2; ; i += 2) {
        const m= i * i;
        if (sum + m >= number) {
            break;
        }
        console.log(m);
        sum += m;
    }

    console.log("Tổng các số đã in ra: " + sum);
}