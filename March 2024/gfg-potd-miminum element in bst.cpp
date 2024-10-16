POTD 30th March 20204  
Minimum Element in BST

Using CPP

class Solution 
{  
  public:    
  int minValue(Node* root) {       
     // Code here        
    Node* curr=root;        
    while (curr -> left != NULL){ 
      curr=curr->left;       
    }        
    return curr->data;   
}

