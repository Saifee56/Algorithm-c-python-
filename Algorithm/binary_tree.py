class BinaryTree:
    def __init__(self,key):
        self.key=key
        self.left=None
        self.right=None

    #Traverse Inorder
    def traverse_inorder(self):
        if self.left:
            self.left.traverse_inorder()
        print(self.key,end= ' ')
        if self.right:
            self.right.traverse_inorder()

    #Traverse postorder
    def traverse_postorder(self):
        if self.left:
            self.left.traverse_postorder()
        if self.right:
            self.right.traverse_postorder()
        print(self.key, end=' ')

    #Traverse Preorder
    def traverse_preorder(self):
        print(self.key, end=' ')
        if self.left:
            self.left.traverse_preorder()
        if self.right:
            self.right.traverse_preorder()
    #Insert function
    def insert(self, value):
        if value < self.key:
            if self.left is None:
                self.left = BinaryTree(value)
            else:
                self.left.insert(value)
        else:
            if self.right is None:
                self.right = BinaryTree(value)
            else:
                self.right.insert(value)

# Create a binary tree and insert values
root = BinaryTree(5)
root.insert(3)
root.insert(8)
root.insert(2)
root.insert(4)
root.insert(7)
root.insert(9)

# Traverse and print the tree in different orders
print("Inorder Traversal: ", end="")
root.traverse_inorder()
print("\nPostorder Traversal: ", end="")
root.traverse_postorder()
print("\nPreorder Traversal: ", end="")
root.traverse_preorder()