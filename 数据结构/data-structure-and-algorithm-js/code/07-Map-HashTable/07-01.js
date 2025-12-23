function Dictionary() {
    var items = {}

    this.has = function (key) {
        return key in items
    }

    this.set = function (key, value) {
        items[key] = value;
    }

    this.delete = function (key) {
        if (this.has(key)) {
            delete items[key]
            return true
        }
        return false
    }

    this.get = function (key) {
        return this.has(key) ? items[key] : undefined
    }

    this.values = function () {
        return Object.values(items)
    }

    this.clear = function () {
        items = {}
    }

    this.size = function () {
        return Object.keys(items).length
    }

    this.keys = function () {
        return Object.keys(items)
    }
}

let dirctionary = new Dictionary()
dirctionary.set('name', 'Yuan Mingyue')
dirctionary.set('university', 'AUST')
dirctionary.set('age', 18)
console.log(dirctionary.values());
console.log(dirctionary.has('name'));
console.log(dirctionary.has('major'));

console.log(dirctionary.delete('major'));
console.log(dirctionary.delete('university'));

console.log(dirctionary.get('name'));

console.log(dirctionary.size());

console.log(dirctionary.keys());