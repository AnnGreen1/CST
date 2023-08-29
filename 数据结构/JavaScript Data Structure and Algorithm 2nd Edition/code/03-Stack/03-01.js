let stack = [];
console.log(stack);
stack.push(1)
console.log(stack);
stack.pop()
stack.push(1)
stack.push(2)
stack.peek = function(){
    return this[this.length - 1]
}
console.log(stack.peek());

stack.isEmpty = function(){
    return this.length == 0
}
console.log(stack.isEmpty());
stack.clear = function(){
    this = []
}
stack.clear()
console.log(stack);