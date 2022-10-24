// Write a program that takes from the user n integers and stores them a vector of int
// then, create a functioon insertAfter that takes firstValue and secondValue. This functin searches for the value
// of firstValue and stores secondValue after it in the vector.
// 
// Create a class that implements a LinkedList. The class must include functins to:
// add a node
// remve a node
// print all elemet=nts of a linked list
// create a funtin that creates a linked list based n the vector's elements given that if the value occurs
// more than once in the vector then it shuld be reflected in the number of occurrences of that node in the
// LinkedList. This function should then return the linked list. (Node is a struct that contains the value of
// the number and its number of occurrences in the vector)
// Finally, create a member function in the linked list class that returns the suum f all nodes
// (Hint: You need to traverse the linked list and add the values of the nodes)
//




#include <iostream>
#include <vector>
#include<map>
using namespace std;

void insertAfter(int n, vector<int> &v, int firstValue, int secondValue) {
    int x;
    n = v.size();
    for (int i = 0; i < n; i++) {
        x = v.at(i);
        if (x == firstValue) {
            v.insert(v.begin()+i+1, secondValue);
        }
    }
    cout << "Your vector now is:";
    for (int i = 0; i <= n; i++) {
        x = v.at(i);
        cout << x;
    }

}

struct node {
    int d;
    int counter = 1;
    int head;
    node* next;
    node* pre;

    node() {
        d = 0;
        next = NULL;
        pre = NULL;
    }
    node(int data) {
        d = data;
        next = NULL;
        pre = NULL;
    }
};

class LinkedList {
    void addNode(int data, int counter = 1) {
        node* newNode = new node(data);
      node* temp =0;
        while (temp->next != NULL){
            temp = temp->next;
            }
        temp->next = newNode;
    }

  

    void print() {
        node* temp = 0;
        while (temp != NULL) {
            cout << temp->d << " " ;
            temp = temp->next;
        }
    }

};

int main()
{
    int s, v1, v2, x;
    vector<int>vec;
    cout << "Please enter your desired size of the vector:";
    cin >> s;
    cout << "Please enter your " << s << " values of the vector:";
    for (int y = 0; y <= s; y++) {
        cin >> y;
        vec.push_back(y);
    }
    
    cout << "Please enter your first and second values:";
    cin >> v1 >> v2;
    insertAfter(s,vec, v1, v2);


    return 0;
}