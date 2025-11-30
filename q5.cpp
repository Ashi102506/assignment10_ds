#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool detectLoop(Node* head) {
    unordered_set<Node*> visited;
    Node* temp = head;
    
    while(temp != NULL) {
        if(visited.find(temp) != visited.end()) {
            return true;
        }
        visited.insert(temp);
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};
    head->next->next->next = new Node{4, NULL};
    head->next->next->next->next = head->next;
    
    cout << (detectLoop(head) ? "true" : "false") << endl;
    return 0;
}
