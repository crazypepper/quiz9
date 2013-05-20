/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Description: 
 *                                                                             *
 * Written by *** for COMP9021                                                 *
 *                                                                             *
 * Other source files, if any, one per line, starting on the next line:        *
 *       tailored_list.c                                                       *
 *       quiz9.c                                                               *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* THIS IS THE ONLY FILE YOU HAVE TO SUBMIT.
 * IT WILL BE COMPILED WITH THE OTHER FILES YOU HAVE BEEN PROVIDED WITH. */

#include "reorder.h"

void reorder(Node **const pt_to_pt_to_node) {
    reverse_list(pt_to_pt_to_node);
    Node *pt_to_node=*pt_to_pt_to_node;
    pt_to_node=pt_to_node->pt_to_next_node;
    Node *pt_to_previous=*pt_to_pt_to_node;
    while(list_length(pt_to_node)>1){
        reverse_list(&pt_to_node);
        pt_to_previous->pt_to_next_node=pt_to_node;
        pt_to_previous=pt_to_node;
        pt_to_node=pt_to_node->pt_to_next_node;
    }
    
}

