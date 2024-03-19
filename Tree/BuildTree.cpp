#include<iostream>
#include<queue>
using namespace std;
 class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

 };

 Node* buildTree(Node* root){
       cout<<"Enter the data" << endl;
       int data;
       cin>>data;
       root =new Node(data);
      if(data==-1){
        return NULL;
      }
    cout<<"Enter data for inserting left" << data << endl;
    
    root->left= buildTree(root->left);
     cout<<"Enter data for inserting " << data << endl;
    
    
     root->right=buildTree(root->right);
     return root;
 }

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
     q.push(NULL);
    while(!q.empty()){
      Node* temp=q.front();
      q.pop();
       

      if(temp==NULL){
       cout<<endl;
       if(!q.empty()){
        q.push(NULL);
       }
      }else{
         cout<<temp->data<<"  ";
     if(temp->left){
      q.push(temp->left);
     }
      if(temp->right){
        q.push(temp->right);
      }
      }
    }

}

void inorder(Node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

int main(){
   
    Node* root=NULL;
    root=buildTree(root);
    cout<<"printing"<<endl;
    levelOrderTraversal(root);
    inorder(root);
    return 0;
}