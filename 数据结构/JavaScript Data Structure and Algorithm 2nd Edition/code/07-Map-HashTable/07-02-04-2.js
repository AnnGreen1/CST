/**
 * 线性探查
 */
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
    this.print = function () {
        for (var i = 0; i < table.length; i++) {
            if (table[i] !== undefined) {
                console.log(i + "" + table[i])
            }
        }
    }

    this.put = function (key, value) {
        var position = loseloseHashCode(key)
        let i = 0;
        while (table[position + i] !== undefined) {
            i++;
        }
        table[position + i] = new ValuePair(key, value)
    }

    this.get = function (key) {
        var position = loseloseHashCode(key)
        if (table[position] !== undefined) {
            if (table[position].key === key) {
                return table[position].value
            } else {
                let i = 0;
                while (table[position + i] !== undefined || table[position + 1].key !== key) {
                    i++;
                }
                if (table[index].key === key) {
                    return table[index].value
                }
            }
        }
        return undefined
    }
    this.remove = function (key) {
        var position = loseloseHashCode(key)
        if (table[position] !== undefined) {
            if (table[position].key === key) {
                table[position].value = undefined
            } else {
                let i = 0;
                while (table[position + i] !== undefined || table[position + 1].key !== key) {
                    i++;
                }
                if (table[index].key === key) {
                    table[index].value = undefined
                }
            }
        }
    }
}

var hash = new HashTable()
hash.put('Donnie', 'Donnie@email.com')
hash.put('Ana', 'ana@email.com')
hash.put('Nathan', 'nathan@eamil.com')

console.log(hash.print());