const a = Number(prompt("Nhập số nguyên a:"));
const b = Number(prompt("Nhập số nguyên b:"));
if (isNaN(a) || isNaN(b)) {
    console.log("Vui lòng nhập vào hai số nguyên.");
} else {
    let result = Math.pow(a, b);
    console.log(`Kết quả của biểu thức ${a}^${b} là ${result}`);
}