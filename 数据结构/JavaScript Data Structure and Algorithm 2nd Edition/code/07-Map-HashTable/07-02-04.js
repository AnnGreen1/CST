function HashTable() {
    var table = []


    var loseloseHashCode = function (key) {
        var hash = 0;
        for (var i = 0; i < key.length; i++) {
            hash += key.charCodeAt(i)
        }
        return hash % 37
    }

    var ValuePair = function (key, value) {
        this.key = key;
        this.value = value;

        this.toString = function () {
            return '[' + this.key + ' - ' + this.value + ']';

        }

    }

    this.put = function (key, value) {
        var position = loseloseHashCode(key)
        console.log(position + ' ' + key);
        if (table.length == 0) {
            table[position] = [ValuePair(key, value)];
        } else {
            if (Array.isArray(table[position])) {
                table[position].push(ValuePair(key, value))
            } else {
                table[position] = [ValuePair(key, value)];
            }
        }
    }

    this.get = function (key) {
        var position = loseloseHashCode(key)
        if (Array.isArray(table[position])) {

        } else {

        }                                                    
    }   

    this.values = function () {
        return table;
    }
}

var hash = new HashTable()
hash.put('Donnie', 'Donnie@email.com')
hash.put('Ana', 'ana@email.com')
hash.put('Nathan', 'nathan@eamil.com')

console.log(hash.values());