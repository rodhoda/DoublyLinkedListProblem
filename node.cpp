//
// Created by rodho on 2/19/2022.
//

#include "node.h"

Node::Node() : next(nullptr) {}

Node::Node(const int& aValue) : score(aValue), next(nullptr) {}

Node::Node(const int& aValue, Node* nextNodePointer) : score(aValue), next(nextNodePointer) {}

int Node::getValue() const {
    return score;
}
Node* Node::getNext() const {
    return next;
}
Node* Node::getPrev() const {
    return prev;
}