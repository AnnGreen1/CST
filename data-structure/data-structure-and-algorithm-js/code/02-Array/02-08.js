let int8arr = new Int8Array();
int8arr[0] = 9999999999;
console.log(int8arr[0])
int8arr[0] = 1;
console.log(int8arr[0])

let unit8arr = new Uint8Array();
unit8arr.push(0)
console.log(unit8arr);