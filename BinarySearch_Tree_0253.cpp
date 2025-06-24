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
                return;

            }

            //Step7: If the value in the data field of the new node is greater than that of the parent
            else if(x> parent -> info){
                //7a: Make the right child of parent point to the new node
                parent -> rightchild = newNode;
                //7b: Exit
                return;
            }



            }

            void search (int element , Node *&parent, Node *&currentNode){
                //This function searches the current Node of the specific node as well as the current node of its parent
                currentNode = ROOT;
                parent = nullptr;

                while((currentNode !=nullptr) && (currentNode->info != element)){
                    parent = currentNode;
                    if (element < currentNode -> info)
                        currentNode = currentNode -> leftchild;
                    else
                        currentNode = currentNode-> rightchild;
                }
            }

            void inorder (Node * ptr){
                if (isEmpty()){
                    cout<<"Tree is empty"<<endl;
                    return;
                }
                if(ptr == nullptr)
                return;

                inorder (ptr->leftchild);
                cout << ptr->info << " ";
                inorder (ptr-> rightchild);
            }


         }
};