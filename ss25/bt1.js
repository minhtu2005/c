var num=Number(prompt("Nhập vào số nguyên dương"));
var sum=0;
for (var i = 0; i < n; i++) {
    let a = Number(prompt(`nhập phần tử thứ ${i + 1}`));
    arr.push(a);
  }
  for (var i = 0; i < arr.length; i++) {
    if (Number.isInteger(arr[i])) {
      console.log("các số nguyên là ", arr[i]);
    } else {
      console.log(" không phải là số nguyên");
    }
  }