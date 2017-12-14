/*
 * Node.hpp
 *
 *  Created on: Oct 8, 2017
 *      Author: adamgonzalez
 */

#ifndef NODE_HPP_
#define NODE_HPP_
#include "Bagel.hpp"

namespace std {

class Node {
public:
	Node();
	virtual ~Node();

	Node* NextNode;
	Node* PreviousNode;
	Bagel* Data;
	Node* head;
	Node* Tail;
    bool push_back(Bagel*); //done
    bool push_Front(Bagel*); //done
    void Cout_List(void); //done
    bool Delete_Node(int); //done
    void insert_Order(Bagel*); // not started
    Bagel* pop_Back(void); // done
    Bagel* pop_Front(void); // done
    void clear(void); // done
    unsigned int size(void); //done
    Node* FindLastNode(Node*);
    Node* FindFirstNode(Node*);
};

} /* namespace std */

#endif /* NODE_HPP_ */
