import sys
sys.setrecursionlimit(int(2e4))

class BTNode:
  def __init__ (self, key):
    self.key = key
    self.left = None
    self.right = None

pre = []
while True:
    try:
        pre.append(int(input()))
    except: break

def insert_bst(root, node):
  if root == None :
    return node

  if node.key < root.key :
    root.left = insert_bst(root.left, node)

  elif node.key > root.key :
    root.right = insert_bst(root.right, node)

  return root

root = None
for num in pre :
  root = insert_bst(root, BTNode(num))

def postorder(node):
  if node :
    postorder(node.left)
    postorder(node.right)
    print(node.key)

postorder(root)