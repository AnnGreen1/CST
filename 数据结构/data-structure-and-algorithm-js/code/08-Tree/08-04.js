function BinarySearchTree() {
    var Node = function (key) {
        this.key = key;
        this.left = null;
        this.right = null;
    }
    // 中序遍历
    this.inOrderTraverse = function (calback) {
        this.inOrderTraverseNode(root, callback)
    }
    // callback 参数是一个函数，定义对遍历到的节点所进行的操作
    var inOrderTraverseNode = function (node, callback) {
        if (node !== null) {
            inOrderTraverseNode(node.left, callback)
            callback(node.key)
            inOrderTraverseNode(node.right, callback)
        }
    }
    // 先序遍历
    var preOrderTravers = function (callback) {
        this.preOrderTraversNode(root, callback)
    }
    var preOrderTraversNode = function (node, callback) {
        if (node !== null) {
            callback(node.key)
            preOrderTraversNode(node.left, callback)
            preOrderTraversNode(node.right, callback)
        }
    }
    // 后序遍历
    var postOrderTravers = function (node, callback) {
        this.postOrderTraversNode(root, callback)
    }
    var postOrderTraversNode = function (node, callback) {
        if (node !== null) {
            postOrderTraversNode(node.left, callback)
            postOrderTraversNode(node.right, callback)
            callback(node.key)
        }
    }
}