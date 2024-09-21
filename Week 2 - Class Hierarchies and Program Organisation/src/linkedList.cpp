//
// Created by Solomon Ayuba on 20/09/2024 - Week 3 Module.
//

#include "linkedList.h"

// Node structure for a linked list
struct node {
    std::string data;
    Node* next;
};

// Linked list to store tools
Node*head = nullptr; // initially empty __cpp_initializer_lists

// Adding a new tool (node) to the beginning of the list
void addTool(std::string toolName) {
    Node*newNode = new Node;
    newNode->data = toolName;
    newNode->next = head;
    head = newNode;
}