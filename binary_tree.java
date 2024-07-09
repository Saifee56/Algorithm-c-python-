class Node {
    int data;
    Node left, right;

    public Node(int data) {
        this.data=data;
        left = right = null;
    }
}

class BinaryTree {
    Node root;

    //preorder
    void preorder(Node node) {
        if (node == null)
            return;
        System.out.print(node.data + " ");
        preorder(node.left);
        preorder(node.right);
    }

    //InOrder
    void inorder(Node node1){
        if (node1==null){
            return;
        }
        inorder(node1.left);
        System.out.print(node1.data + " ");
        inorder(node1.right);
    }

    //PostOrder
    void postorder(Node node2){
        if(node2==null){
            return ;
        }
        postorder(node2.left);
        postorder(node2.right);
        System.out.println(node2.data+ " ");
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(6);
        tree.root.right.right = new Node(7);

        tree.preorder(tree.root);
        System.out.println("\n");
        tree.inorder(tree.root);
        System.out.println("\n");
        tree.postorder(tree.root);
    }
}
