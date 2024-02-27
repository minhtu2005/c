var a=Number(prompt("Nhập số nguyên dương a"));
var b=Number(prompt("Nhập số nguyên dương b"));
var soChan = 0;
var soLe = 0;
for (let i = a; i <= b; i++) {
    if (i % 2 === 0) {
        sochan += i;
    } else {
        sole += i;
    }
}

console.log("Tổng các số chẵn:", soChan);
console.log("Tổng các số lẻ:", soLe);