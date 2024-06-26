#include<vector>
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int x) {
    this->data = x;
    this->next = NULL;
  }
};

class Solution{
    
    
 public:
  bool isPalindrome ( vector <int> arr){
        
        int s=0,e=arr.size()-1;
        
        while( s <= e){
            
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
  }
  
    //Function to check whether the list is palindrome.
    
    bool isPalindrome (Node *&head )
    { 
    //create an array
    
       vector<int>arr;
       
    //copy items of linked list in array created above 
    
       Node* temp=head;
       
       while( temp != NULL){
           
           arr.push_back(temp->data);
           
           temp=temp->next;
       }
       
       return isPalindrome(arr);
    }
};