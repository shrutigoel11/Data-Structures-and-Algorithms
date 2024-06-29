#include <iostream>
#include <queue>
using namespace std;

    class Node{
        public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=left;
            this->right=right;
        }

    };

    Node* buildTree(Node* root){
        cout<<"Enter parent data: ";
        int data;
        cin>>data;
        root=new Node(data); // Calls the constructor

        if(data==-1) return NULL;
        //Recursive call
        else{
            cout<<"Enter data for inserting at left of "<<data<<endl;
            root->left=buildTree(root->left);
            cout<<"Enter data for inserting at right of "<<data<<endl;
            root->right=buildTree(root->right);
        }
        return root;
    }

    void levelOrderTraversal(Node* root){
        queue<Node*>q;
        
        //use sesperator after each level
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            if(temp==NULL){  //level complete
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
                else{
                    cout<<" "<<temp->data<<" ";
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
                }
        }

    }


int main()
{
Node* root=NULL;
root=buildTree(root);
levelOrderTraversal(root);
return 0;
}