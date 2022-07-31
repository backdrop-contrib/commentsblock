Comments Block
====

This module is a port to Backdrop of the Drupal contributed module 'Commentsblock'. 
It puts the comments and the comment form from a module into a block which can then be placed 
in a different location within a layout.

There are options to suppress display of the 'add new comment' button from within the node, and
also to stop comments being shown to users who are not able to comment themselves.

Installation
----
Install this module in the usual way.
It will add its admin page 'Comments block' to the configuration menu under 'User interface'.
Choose whether you want just the comments form to appear, or the comments as well.

In the relevant layout add the new 'Comment form block' to wherever you want it to appear
and set the conditions so that it only appears on required nodes.

Finally, edit your node settings so that 'Comment settings' is 'open'.

IMPORTANT: in that relevant layout, you may want to remove the `Main page content` block,
since the "Main page content" block at the moment will also display the comment list and the comment form (you'll end up with duplicate comment list and form). 
Instead, you want to show only specific node fields such as `Body` in that area of the layout.

License
----
This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.
    
    
Current Maintainers
----
- [argiepiano](https://github.com/argiepiano)

For Drupal
----
Isolesen ;  marcoka


Port to Backdrop
----
Graham Oliver github.com/Graham-72

Acknowledgement
----
This port to Backdrop would not, of course, be possible without all the work done by the developers 
and maintainers of the Drupal module.
