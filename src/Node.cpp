/*
 * Node.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: adamgonzalez
 */

#include "Node.hpp"
#include <iostream>
#include <map>

namespace std {

Node::Node() {
	// TODO Auto-generated constructor stub
	head = nullptr;
	Tail = nullptr;
	Data = nullptr;
	NextNode = nullptr;
	PreviousNode = nullptr;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

bool Node::Delete_Node(int choice){
Node* newHead = new Node();
Node* temp = new Node();
Node* prev = new Node();
Node* end = new Node();

Bagel*  bagel = new Bagel();
if(choice == 1){
		newHead = head;
    delete newHead;
    head = head -> NextNode;
    Tail = head;
}
else{
    newHead = head;
    bagel = newHead -> Data;
    for(int i = 1; i < choice; i++) {
        temp = newHead;
        prev -> PreviousNode = newHead;
        Tail = newHead;
        newHead = newHead -> NextNode;
    }
    if(newHead -> NextNode == NULL){
        end = temp;
        temp -> NextNode = NULL;
        delete newHead;
        newHead = nullptr;
    }
    else{
        temp -> NextNode = newHead -> NextNode;
    }
}
bagel = newHead -> Data;
cout << "\nNow Deleting " << bagel -> Flavor << "\n\n";
newHead = nullptr;
return 0;
}

void Node::Cout_List(void){
//print the bagel flavor for all bagels in the list
Node* tempHead = new Node();
Bagel* newBagel = new Bagel();
tempHead = head;
int x = 1;
if(head == NULL){
	cout << "List is Empty\n" << endl;
}
else{
	while(tempHead -> NextNode != NULL){
		  newBagel = tempHead -> Data;
		  cout << "Bagel #" << x << endl;
		  cout << "\n";
		  cout << "Flavor of the Bagel: " << newBagel -> Flavor << endl;
		  cout << "Size: " << newBagel -> HoleSize << endl;
		  cout << "Calories: " << newBagel -> Calories << endl;
		  cout << "Price: " << newBagel -> Price << endl;
		  cout << "\n";
		  x++;
		  tempHead = tempHead -> NextNode;

		  if(tempHead -> NextNode == nullptr){
			  newBagel = tempHead -> Data;
			  cout << "Bagel #" << x << endl;
			  cout << "\n";
			  cout << "Flavor of the Bagel: " << newBagel -> Flavor << endl;
			  cout << "Size: " << newBagel -> HoleSize << endl;
			  cout << "Calories: " << newBagel -> Calories << endl;
			  cout << "Price: " << newBagel -> Price << endl;
			  cout << "\n";
		  }
	}
}
}

bool Node::push_back( Bagel *aBagel){
	Node* temp = new Node();
	temp -> Data = aBagel;
	if(head == nullptr){
		temp -> NextNode = nullptr;
		temp -> PreviousNode = Tail;
		head = temp;
	}
	else{
		temp -> NextNode = nullptr;
		temp -> PreviousNode = Tail;
		Tail -> NextNode = temp;
	}
	Tail = temp;
	return 0;
}

bool Node::push_Front(Bagel* aBagel){

	Node* temp = new Node();
	if(head == nullptr){
		head = new Node();
		head -> Data = aBagel;
		head -> NextNode = nullptr;
		head -> PreviousNode = head;
		Tail = head;
	}
	else{
		Tail = head;
		temp -> Data = aBagel;
		temp -> PreviousNode = nullptr;
		temp -> NextNode = Tail;
		head = temp;
	}
	Tail = temp;
	return 0;
}

void Node::clear(void){
	Node* temp = new Node();
	Bagel* aBagel = new Bagel();
	aBagel = head -> Data;
	while(head -> NextNode != NULL){
		temp = head;
		delete temp;
		temp = nullptr;
		cout << "Now Deleting " << aBagel -> Flavor << endl;
		head = head -> NextNode;
		aBagel = head -> Data;
		if(head -> NextNode == nullptr){
			delete temp;
			cout << "Now Deleting " << aBagel -> Flavor << endl;
			head = nullptr;
			Tail = nullptr;
			break;

		}
	}

}

unsigned int Node::size(void){
	int i = 0;
	Node* temp = new Node();
	temp = head;
	if(head == NULL){
		return 0;
	}
	while(temp -> NextNode != NULL){
		i++;
		temp = temp -> NextNode;
		if(temp -> NextNode == NULL){
			i++;
		}
	}
	return i;
}

Bagel* Node::pop_Back(void){
	Node* temp = new Node();
	int x = 0;

	temp = head;
	while(temp -> NextNode != nullptr){
		temp = temp -> NextNode;
		x++;
		if(temp -> NextNode == nullptr){
			x++;
			Delete_Node(x);
		}
	}
	return nullptr;
}

Bagel* Node::pop_Front(void){
	Node*temp = new Node();
	temp = head;
	delete temp;
	temp = nullptr;
	head = head -> NextNode;
	head -> PreviousNode = head;
	return nullptr;
}

Node* Node::FindLastNode(Node* temp){
	if(temp -> NextNode == nullptr){
		return temp;
	}
	else{
		return FindLastNode(temp -> NextNode);
	}
}

Node* Node::FindFirstNode(Node* temp){

	if(temp -> PreviousNode == nullptr){
		return temp;
	}
	else{
		return FindFirstNode(temp -> PreviousNode);
	}
}

void Node::insert_Order(Bagel* aBagel){
	Node* temp = new Node();
	Bagel* ptr = new Bagel();

	ptr = aBagel;
	temp = head;

	while(temp -> NextNode != nullptr){
		aBagel = temp -> Data;

		if(aBagel -> Flavor < ptr -> Flavor){
			temp -> Data = ptr;
		}
	temp = temp -> NextNode;
	}
}
} /* namespace std */
