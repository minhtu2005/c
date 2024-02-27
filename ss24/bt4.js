const number = Number(prompt("Nhập vào một số nguyên dương:"));
if (isNaN(num) || num <= 0) {
    console.log("Vui lòng nhập một số nguyên dương.");
} else {
    let sum = 0;
    for (let i = 2; i <= num; i += 2) {
        let square = i * i;
        if (sum + square > num) {
            break;
        }
        console.log(`Bình phương của ${i} là ${square}`);
        sum += square;
    }
}