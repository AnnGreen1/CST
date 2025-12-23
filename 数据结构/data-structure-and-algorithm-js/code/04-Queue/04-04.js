/**
 * @description: 实现一个优先级队列，可以分两种情况（优先级数字小优先级高）
 * 1、入队时考虑优先级
 * 2、出队是考虑优先级
 * @
 */

class inPriorityEnqueue {
    constructor() {
        this.data = [];
    }
    in(e) {
        let index = this.data.findIndex((element) => {
            return element.priority > e.priority
        })
        this.data.splice(index, 0, e)
    }
    out() {
        this.data.shift()
    }
}

// let obj = new inPriorityEnqueue();
// obj.in({ value: 5, priority: 9 })
// console.log(obj.data);
// obj.in({ value: 5, priority: 7 })
// console.log(obj.data);
// obj.in({ value: 4, priority: 2 })
// console.log(obj.data);
// obj.in({ value: 6, priority: 4 })
// console.log(obj.data);
// obj.in({ value: 7, priority: 4 })
// console.log(obj.data);
// obj.in({ value: 8, priority: 5 })
// console.log(obj.data);


class outPriorityEnqueue {
    constructor() {
        this.data = [];
    }
    in(e) {
        this.data.push(e)
    }
    out() {
        let min = this.data[0];
        let i = 0;
        let index = 0;
        for (i = 0; i < this.data.length; i++) {
            if (this.data[i].priority < min.priority) {
                min = this.data[i]
                index = i;
            }
        }

        return this.data.splice(index, 1)
    }
}

let obj = new outPriorityEnqueue();
obj.in({ value: 5, priority: 9 })
console.log(obj.data);
obj.in({ value: 5, priority: 7 })
console.log(obj.data);
obj.in({ value: 4, priority: 2 })
console.log(obj.data);
obj.in({ value: 6, priority: 4 })
console.log(obj.data);
obj.in({ value: 7, priority: 4 })
console.log(obj.data);
obj.in({ value: 8, priority: 5 })
console.log(obj.data);
obj.out()
console.log(obj.data);
obj.out()
console.log(obj.data);