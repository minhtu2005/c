let n = prompt("Nhập vào một số nguyên dương n:");
n = parseInt(n);
if (isNaN(n) || n <= 0) {
    console.log("Vui lòng nhập một số nguyên dương.");
} else {
    let S = 1;
    for (let i = 2; i <= n; i++) {
        S += 1 / Math.pow(i, 3);
    }
    S = S.toFixed(5);
    console.log(`Kết quả của biểu thức S= 1+1/2^3+1/3^3+...+1/n^3 là ${S}`);
}