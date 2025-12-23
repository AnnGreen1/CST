// class Stack {
//     constructor(){
//         this.items = [];
//     }
//     push(element){
//         this.items.push(element)
//     }
// }

let _items = Symbol();

class Stack{
    constructor(){
        this[_items] = [];
    }
}