var map = new Map()

map.set('Gandalf', 'gandalf@email.com')
map.set('John', 'johnsonow@email.com')
map.set('Tyrion', 'tyrio@gmail.com')

console.log(map.has('Gandalf'))
console.log(map.size);
console.log(map.keys());
console.log(map.values());
console.log(map.get('Tyrion'))