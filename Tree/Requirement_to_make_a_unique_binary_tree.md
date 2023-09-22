# Requirements to make a unique binary tree

Given an inorder we can construct a lot of binary tree.

## What is a unique binary tree?
A tree that only gives that particular preoder and postorder. No other tree can be constructed that gives that
## What traversals are required to construct a unique binary tree?

Consider we are given preorder and postorder:
<pre>
  Pre-Order(VLR)-> 1 2 3
  Post-Order(LVR)-> 3 2 1

  We can create binary trees:
          1    
        /
      2
    /
  3

      1
    /
  2
    \
      3

  Both of these give same preorder and postorder.
</pre>

So if we are given preorder and postorder we cannot construct a unique binary tree.


2) Given preoder and inorder

  <pre>

    Inorder(LVR): 9 3 15 20 7
    Preorder(VLR): 3 9 20 15 7

  Yes we can create a unique binary tree from these two.
  </pre>

