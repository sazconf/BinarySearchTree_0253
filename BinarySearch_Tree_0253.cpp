#include<iostream>
using namespace std;

class Node{
    public:
        int info;
        Node* leftchild;
        Node* rightchild;

        //constructor for the node class4
        Node(){
            leftchild = nullptr;
            rightchild = nullptr;
        }
};

class BinaryTree{
    public:
         Node* ROOT;

         BinaryTree(){
            ROOT= nullptr ;
         }

         void insert (){
            int x;
            cout<<"Masukkan nilai: ";
            cin >> x;
            //Step1: Allocate memory for the new node
            Node* newNode = new Node();
            //Step2: Assign value to the data field of new node.
            newNode ->info = x;

            //Step3: Make the left and rigbt child of the new node point to  NULL;
            newNode -> leftchild = nullptr;
            newNode -> rightchild= nullptr;

            //step4: Locate the node which will be the parent of the node to be inserted

            Node *parent = nullptr;
            Node *currentNode = nullptr;
            search(x, parent, currentNode);

            //Step5: If parent is NULL , tree is empty.
            if (parent == nullptr){
                //5a : Mark the new node as ROOT
                ROOT = newNode;
                //5b : Exit

            }

            }


         }
};