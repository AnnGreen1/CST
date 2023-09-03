function DoubleLinkedList() {
    let Node = function (element) {
        this.element = element;
        this.next = null;
        this.prev = null;
    }
    let length = 0;
    let head = null;
    let tail = null

    this.insert = function (position, element) {
        let node = new Node(element)
        if (position < 0 || position > length) {
            console.warn('位置不合法！');
            return
        }
        if (head == null) {
            head = node;
            length += 1;
            return;
        }
        let index = 0
        let current = head;
        while (current) {
            if (index == position - 1) {
                node.next = current.next
                current.next.prev = node;
                current.next = node;
                node.prev = current;
                break;
            }
            current = current.next;
            index++;
        }
        length += 1;
    }

    this.print = function () {
        let arr = [];
        let current = head;
        while (current) {
            arr.push(current.element)
            current = current.next;
        }
        return arr;
    }
}
let doublelinkedlist = new DoubleLinkedList()
doublelinkedlist.insert(0,2)
console.log(doublelinkedlist.print());