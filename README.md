# a-mighty-oak-tree

The notation to create a new tree node with a squirrel as its data is:

Squirrel cheeks = Squirrel("Cheeks");
Tree* node_one = new Tree(&cheeks);

use set_left() and set_right to set a node to the either the left or right
child of another node, respectively  


the get_left() and get_right() methods return the left and right child of a
node 

get_data() returns the data the node is actually responsible of containing
(in this case it is a squirrel object)

traverse() prints out the data of the tree using preorder traversal. You
could also specify where to start the tree from by passing in the "root" as
the argument.
