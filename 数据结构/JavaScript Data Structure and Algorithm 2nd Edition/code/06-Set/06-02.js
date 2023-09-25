function Set() {
    let items = {};

    this.has = function (value) {
        return items.hasOwnProperty(value)
    }

    this.add = function (value) {
        if (!this.has(value)) {
            items[value] = value;
            return true
        }
        return false
    }

    this.remove = function (value) {
        if (!this.has(value)) {
            delete items[value];
            return true
        }
        return false
    }

    this.clear = function () {
        items = {}
    }

    this.size = function () {
        return Object.keys(items).length
    }

    this.values = function () {
        let values = [];
        for (let key in items) {
            if (items.hasOwnProperty(key)) {
                values.push(items[key])
            }
        }
        return values
    }

    this.union = function (otherSet) {
        let unionSet = new Set()
        let values = this.values()
        for (let i = 0; i < values.length; i++) {
            unionSet.add(values[i])
            console.log(unionSet.values());
        }

        values = otherSet.values();
        for (let i = 0; i < values.length; i++) {
            unionSet.add(values[i])
            console.log(unionSet.values());
        }

        return unionSet
    }

    this.intersection = function (otherSet) {
        let intersectionSet = new Set()

        let values = this.values()
        for (let i = 0; i < values.length; i++) {
            if (otherSet.has(values[i])) {
                intersectionSet.add(values[i])
            }
        }

        return intersectionSet
    }

    this.difference = function (otherSet) {
        // 属于this且不属于otherSet
        let differenceSet = new Set()

        let values = this.values()
        for (let i = 0; i < values.length; i++) {
            if (!otherSet.has(values[i])) {
                differenceSet.add(values[i])
            }
        }

        return differenceSet
    }

    this.subset = function (otherSet) {
        let values = otherSet.values()
        if (this.size() < values.length) return false
        console.log(values);
        console.log(this.values());
        return values.every(v => {
            return this.values().includes(v)
        })

    }
}

let set = new Set();
set.add(2)
set.add(2)
set.add(1)
// console.log(set.values());
// console.log(set.has(1));
// console.log(set.size());
// set.remove(1)
// console.log(set.values());

let otherSet = new Set()
otherSet.add(2)
otherSet.add(9)
// console.log(set.union(otherSet).values());
// console.log(set.intersection(otherSet).values());
set.add(3)
// console.log(set.difference(otherSet).values());
console.log(set.subset(otherSet));