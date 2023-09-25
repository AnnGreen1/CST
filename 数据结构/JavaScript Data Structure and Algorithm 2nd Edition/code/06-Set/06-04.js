let setA = new Set()
setA.add(1)
setA.add(2)
setA.add(3)

let setB = new Set()
setB.add(2)
setB.add(3)
setB.add(4)

// 模拟并集操作
let unionAB = new Set()
for (let a of setA) {
    unionAB.add(a)
}
for (let b of setB) {
    unionAB.add(b)
}
console.log(unionAB);

// 模拟并集操作 2
let unionAB2 = new Set([...setA].concat([...setB]))
console.log(unionAB2);

// 模拟交集操作
let intersectionSet = new Set()
for (let a of setA) {
    if (setB.has(a)) {
        intersectionSet.add(a)
    }
}

// 模拟差集操作
let difference = new Set()
for(let x of setA){
    if(!setB.has(x)){
        difference.add(x)
    }
}

