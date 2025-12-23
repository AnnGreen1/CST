/**
 * @param { position } begin at 0
 */
function LinkedList() {
    let Node = function (element) {
        this.element = element;
        this.next = null;
    }
    let length = 0;
    let head = null;

    this.append = function (element) {
        let node = new Node(element);
        let current;
        if (head === null) {
            head = node;
        } else {
            current = head;
            while (current.next) {
                current = current.next
            }
            current.next = node;
        }
        length += 1;
    }
    this.insert = function (position, element) {
        let node = new Node(element);
        if (position == 0) {
            node.next = head;
            head = node;
            return
        }
        let index = 0;
        let current = head;
        while (current) {
            if (index == position - 1) {
                node.next = current.next
                current.next = node
                break
            }
            current = current.next;
            index++;
        }
    }
    this.removeAt = function (position) {
        // 索引从0开始
        if (length == 0) return
        if (position > length - 1 || position < 0) {
            console.warn('位置不合法！');
            return
        }
        if (position == 0) {
            head = head.next
            return
        }
        let index = 0;
        let current = head;
        while (current) {
            if (index == position - 1) {
                current.next = current.next.next
                break
            }
            current = current.next;
            index++;
        }
    }
    this.remove = function (element) {
        let index = this.indexOf(element);
        return this.removeAt(index);
    }
    this.indexOf = function (element) {
        let index = -1;
        let current = head;
        while (current) {
            index++;
            if (current.element === element) {
                break;
            }
            current = current.next
        }
        return index;
    }
    this.isEmpty = function () {
        return length === 0
    }
    this.size = function () {
        let current = head;
        let len = 1;
        while (current.next) {
            len++;
            current = current.next;
        }
        length = len;
        return len;
    }
    this.getHead = function () {
        return head;
    }
    this.toString = function () {
        /**
         * @description: 什么意思？没有搞懂？
         */
        let current = head;
        string = '';
        while (current) {
            string += current.element + (current.next ? 'n' : '');
            current = current.next;
        }
        return string;
    }
    this.print = function () {
        let arr = []
        let current = head;
        while (current) {
            arr.push(current.element)
            current = current.next;
        }
        return arr
    }
}

module.exports = {
    LinkedList
}