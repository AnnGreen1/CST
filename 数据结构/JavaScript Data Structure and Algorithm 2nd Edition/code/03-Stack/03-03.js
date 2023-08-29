let d = 789;
let stack = [];
while (true) {
    remainder = d % 2;
    stack.push(remainder)
    d = (d - remainder) / 2
    if (d == 1) {
        stack.push(1)
        break;
    }
}
// parseInt(stack.toString())
console.log(stack.join(''));

function D2B(param){
    let decimal = 0;
    let integer = 0
}
D2B(200.59)