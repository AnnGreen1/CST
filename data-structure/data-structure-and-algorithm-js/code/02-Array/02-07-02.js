let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
console.log(arr.every(item => item > 0));
console.log(arr.some(item => item > 5));

let initialValue = 0;
let sum = arr.reduce((accumulator, currentValue, currentIndex, array) => {
    console.log("accumulator:", accumulator);
    console.log("currentValue:", currentValue);
    console.log("currentIndex:", currentIndex);
    console.log("array:", array);
    currentValue += accumulator;
    return currentValue
}, initialValue)
console.log(sum);