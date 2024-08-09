#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* nxtNode;

    Node(){
        nxtNode = NULL;
    }

    Node(int data){
        this->data = data;
        this->nxtNode = NULL;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->nxtNode;
    }
    
}

int main()
{
    Node one;
    one.data = 10;
    Node two(20);
    Node three(30);

    one.nxtNode = &two;
    two.nxtNode = &three;

    Node* head = &one;

    printLL(head);
    return 0;
}