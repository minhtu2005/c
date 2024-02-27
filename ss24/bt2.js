const a = Number(prompt("Nhập số nguyên a:"));
const b = Number(prompt("Nhập số nguyên b:"));
if (isNaN(a) || isNaN(b)) {
    console.log("Vui lòng nhập vào hai số nguyên.");
} else {
    let sum = 0;
    for (let i = Math.min(a, b); i <= Math.max(a, b); i++) {
        sum += i;
    }
    console.log(`Tổng các số nguyên trong khoảng giữa ${a} và ${b} là ${sum}`);
}