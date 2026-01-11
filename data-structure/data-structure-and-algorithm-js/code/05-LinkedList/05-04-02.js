/**
 * @description: 双向循环链表
 */
function DoubleCircularLinkedList() {
    let Node = function (element) {
        this.element = element;
        this.next = null;
        this.prev = null;
    }
    let length = 0;
    let head = null;
    let tail = null

    this.insert = function (position, element) {

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