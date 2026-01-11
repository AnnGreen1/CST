/**
 * @description: 双向链表
 * @param { position } begin at 0
 */
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
        if (head == null && tail == null) {
            head = node;
            tail = node;
            length += 1;
            return;
        }
        if (position == 0 && length > 0) {
            node.next = head;
            head.prev = node;
            head = node;
            length += 1;
            return
        }
        if (position == length && length > 0) {
            tail.next = node;
            node.prev = tail;
            tail = node;
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
                length += 1;
                break;
            }
            current = current.next;
            index++;
        }

    }

    this.removeAt = function(position){
        if(length == 0) return 
        if(position > length -1 || position < 0){
            console.log("位置不合法！");
            return
        }
        if(position == 0){
            head = head.next
            head.prev = null
            return
        }
        if(position == length - 1){
            tail = tail.prev
            tail.next = null;
            return
        }
        let index = 0;
        let current = head;
        while(current){
            if(index == position - 1){
                current.next.next.prev = current;
                current.next = current.next.next;
                break;
            }
            current = current.next;
            index++;
        }
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
doublelinkedlist.insert(0, 2)
doublelinkedlist.insert(1, 3)
doublelinkedlist.insert(2, 5)
console.log(doublelinkedlist.print());
doublelinkedlist.removeAt(2)
console.log(doublelinkedlist.print());