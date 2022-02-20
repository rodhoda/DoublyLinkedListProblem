
#pragma once

// Node class for where the pointers and the integer variable would be stored when
// used by the Linked List class.
class Node
{
private:
    int score;
    Node* next;
    Node* prev;
public:
    // default constructor
    Node();

    // constructor that takes the integer parameter
    Node(const int&);
    // constructor that takes in the integer and node pointer parameters to assign
    // it to a new node.
    Node(const int&, Node*);

    // Purpose: constant method that returns the val integer variable of the current node
    // Precondition: None
    // Postcondition: Returns the integer type val
    int getValue() const;
    // Purpose: const method that gets the next node
    // Precondition: None
    // Postcondition: Returns the pointer of the next node
    Node* getNext() const;

    Node* getPrev() const;

};

