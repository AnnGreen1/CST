/**
 * 分离链接
 */
const { LinkedList } = require("./LinkedList.js")
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

        if (table[position] == undefined) {
            table[position] = new LinkedList()
        }
        table[position].append(new ValuePair(key, value))
    }

    this.get = function (key) {
        var position = loseloseHashCode(key)
        if (table[position] !== undefined) {
            var current = table[position].getHead()
            // 遍历链表来寻找键/值
            while (current.next) {
                if (current.element.key === key) {
                    return current.element.value
                }
                current = current.next
            }
            // 检查元素在链表第一个或最后一个节点的情况
            if (current.element.key === key) {
                return current.element.value
            }
        }
        return undefined
    }
    this.remove = function (key) {
        var position = loseloseHashCode(key)
        if (table[position] !== undefined) {
            var current = table[position].getHead()
            while (current.next) {
                if (current.element.key === key) {
                    table[position].remove(current.element)
                    if (table[position].isEmpty()) {
                        table[position] = undefined;
                    }
                    return true
                }
            }
        }
        return false
    }
}

var hash = new HashTable()
hash.put('Donnie', 'Donnie@email.com')
hash.put('Ana', 'ana@email.com')
hash.put('Nathan', 'nathan@eamil.com')

console.log(hash.print());
console.log(hash.get('Ana'));
hash.remove('Donnie')
console.log(hash.print());