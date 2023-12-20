function BinarySearchTree() {
    var Node = function (key) {
        this.key = key;
        this.left = null;
        this.right = null;
    }

    var root = null;

    function insertNode(node, newNode) {
        if (node.key < newNode.key) {
            if (node.left == null) {
                node.left = newNode
            }else{
                insert(node.left, newNode)
            }
        } else {
            if(node.right===null){
                node.right=newNode
            }else{
                insert(node.right,newNode)
            }
        }
    }
    this.insert = function (key) {
        var node = new Node(key)
        if (root === null) {
            root = newNode
        } else {
            insertNode(root, node)
        }
    }
}