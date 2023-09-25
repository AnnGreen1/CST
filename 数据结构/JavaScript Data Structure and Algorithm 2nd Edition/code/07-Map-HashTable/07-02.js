function HashTable() {
    var table = []

    var loseloseHashCode = function (key) {
        var hash = 0;
        for (var i = 0; i < key.length; i++) {
            hash += key.charCodeAt(i)
        }
        return hash % 37
    }
    this.put = function (key, value) {
        var position = loseloseHashCode(key)
        console.log(position + '  ' + key);
        table[position] = value
    }

    this.get = function (key) {
        return table[loseloseHashCode(key)]
    }

    this.remove = function (key) {
        table[loseloseHashCode(key)] = undefined
    }
    this.values = function () {
        return table
    }
}

var hash = new HashTable()
hash.put('name', 'Yuan Mingyue')
hash.put('university', 'AUST')
hash.put('age', 18)
console.log(hash.values());
console.log(hash.get('age'));
console.log(hash.remove('age'));