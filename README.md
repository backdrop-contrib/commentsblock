Comments Block
====

This module is a port to Backdrop of the Drupal contributed module 'Commentsblock'. 
It puts the comments and the comment form from a module into a block which can then be placed 
in a different location within a layout.

Version 3
----
Version 3 is a rewrite of version 2 to better make use of Backdrop's block and layout APIs. It includes a setting at the 
block level to specify whether the block should include only the comment form, or both full comment list and the form. When upgrading from version 2 from from Drupal 7, be sure to inspect the Comments Block blocks in all layouts to verify the settings are correct.

Version 3 also includes a setting in the configuration page (admin/config/user-interface/commentsblock) to fully disable the display of comments and the comment form in all nodes globally. This setting is helpful when your layout uses a "Main page content" block, as this block will normally display the node, the comments and the comment form. WARNING: if you disable the display of comments and the comment form, they will not be shown in ANY node display regardless of whether they use a custom layout or not. This option is only useful for layouts that contain a Comments Block - otherwise your users will not be able to see or submit comments. 

Installation
----
Install this module in the usual way.
It will add its admin page 'Comments block' to the configuration menu under 'User interface'.
Choose whether you want just the comments form to appear, or the comments as well.

In the relevant layout add the new 'Comment form block' to wherever you want it to appear
and set the conditions so that it only appears on required nodes.

Finally, edit your node settings so that 'Comment settings' is 'open'.

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
