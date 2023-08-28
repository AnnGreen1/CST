let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15];
arr.reverse()
console.log(arr);
arr.sort((a, b) => a - b)



var names = ['Anna', 'ana', 'john', 'John']
console.log(names.sort());
names.sort((a, b) =>{
    if(a.toLowerCase() < b.toLowerCase()){
        return -1
    }
    if(a.toLowerCase() > b.toLowerCase()){
        return 1
    }
    return 0
})
console.log(names);