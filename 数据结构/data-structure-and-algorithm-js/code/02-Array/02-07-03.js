let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
arr.forEach(item => {
    console.log(item);
})
for (item of arr) {
    console.log(item);
}

const letter = ["a", "b", "c", "d", "e"];
const arrIter = letter[Symbol.iterator]();
console.log(arrIter);
console.log(arrIter.next());
console.log(arrIter.next().value); // a

console.log(arrIter);
console.log(arrIter.next());
console.log(arrIter.next().value); // b

console.log(arrIter);
console.log(arrIter.next());
console.log(arrIter.next().value); // c
console.log(arrIter);
console.log(arrIter.next());
console.log(arrIter.next().value); // d

console.log(arrIter);
console.log(arrIter.next());
console.log(arrIter.next().value); // e



console.log(Array.from('foo'));
console.log(Array.of(1, 2, 3, 4, '5',true, undefined, null));

const array1 = [1, 2, 3, 4];

// Fill with 0 from position 2 until position 4
console.log(array1.fill(0, 2, 4));
// Expected output: Array [1, 2, 0, 0]

// Fill with 5 from position 1
console.log(array1.fill(5, 1));
// Expected output: Array [1, 5, 5, 5]

console.log(array1.fill(6));
// Expected output: Array [6, 6, 6, 6]
