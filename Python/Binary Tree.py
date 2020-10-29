'''
Create a Binary Tree, and traverse through it's nodes (inorder, preorder, postorder) and print the tree accordingly !
'''

class Node:
    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data
        
# Inserting a Node
    def insert(self, data):

        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

# Printing the B.Tree
    def PrintTree(self):
        if self.left:
            self.left.PrintTree()
        print( self.data),
        if self.right:
            self.right.PrintTree()

# Inorder traversal------------------------------------
# Left -> Root -> Right
    def inorderTraversal(self, root):
        res = []
        if root:
            res = self.inorderTraversal(root.left)
            res.append(root.data)
            res = res + self.inorderTraversal(root.right)
        return res
        
# Preorder traversal-----------------------------------
# Root -> Left ->Right
    def PreorderTraversal(self, root):
        res = []
        if root:
            res.append(root.data)
            res = res + self.PreorderTraversal(root.left)
            res = res + self.PreorderTraversal(root.right)
        return res
        
# Postorder traversal----------------------------------
# Left ->Right -> Root
    def PostorderTraversal(self, root):
        res = []
        if root:
            res = self.PostorderTraversal(root.left)
            res = res + self.PostorderTraversal(root.right)
            res.append(root.data)
        return res

# Driver Program--------------------------------------

root = Node(27)
root.insert(14)
root.insert(35)
root.insert(10)
root.insert(19)
root.insert(31)
root.insert(42)

print(root.PostorderTraversal(root))
print(root.PreorderTraversal(root))
print(root.inorderTraversal(root))



'''

OUTPUT:
[10, 19, 14, 31, 42, 35, 27]
[27, 14, 10, 19, 35, 31, 42]
[10, 14, 19, 27, 31, 35, 42]
> 

'''
