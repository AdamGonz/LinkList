//============================================================================
// Name        : PracLinkedList.cpp
// Author      : Adam Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bagel.hpp"
#include "utilities.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "Node.hpp"

using namespace std;


int main() {

    int option, choice, del;
    //Node *head = nullptr;
    Bagel* aBagel = new Bagel();
    Node* list = new Node();
    Node* aNode;
    Node* ptr;



    while(true){
        cout << "Please pick from the following choices below\n" << endl;
        cout << "\n1 - Create Five Random Bagels In Order"
             << "\n2 - Create Five Random Bagels Out Of Order"
             << "\n3 - Print All The Bagels"
             << "\n4 - Pop Front Or Pop Back Bagel Or Delete A Certain Bagel"
             << "\n5 - Delete All Bagels"
			 << "\n6 - Return The First Node Flavor"
			 << "\n7 - Return The Last Node Flavor"
             << "\n8 - Quit";

        option = inputInt("\t\t\n\nPlease choice from the following options: ", 1, 8, 999);


        if(option == 1){
            for(int i = 0; i < 5; i++){
				list -> push_back(aBagel);
            		aBagel = new Bagel();
            }

        }

        else if(option == 2){
            for(int i = 0; i < 5; i++){
                 list -> push_Front(aBagel);
                 aBagel = new Bagel();
             }
        }

        else if(option == 3){
        		cout << "There are " << list -> size() << " Nodes in the list" << "\n\n" << endl;
        		list -> Cout_List();


        }

        else if(option == 4){
        	if(list -> size() == 0){
        		continue;
        	}
            cout << "Please choice from the following\n"
                 << "\n1 - Pop From The Front"
                 << "\n2 - Pop From The Back"
                 << "\n3 - Delete A Certain Bagel";
            cout << "\n";
            choice = inputInt("Enter A Choice: ", 1,3,999);


            if(choice == 1){
            		list -> pop_Front();
            }
            else if(choice == 2){
            		list -> pop_Back();
            }
            else if(choice == 3){
                list -> Cout_List();
                cout << "\n\nEnter Choice: ";
                cin >> del;
                list -> Delete_Node(del);

            }
        }

        else if(option == 5){
        		list -> clear();
        }
        else if(option == 6){
        		aNode = list -> FindFirstNode(list -> Tail);
        		aBagel = aNode -> Data;
        		cout << "The First Bagels Flavor Is " << aBagel -> Flavor << endl << "\n";
        }
        else if(option == 7){
        		ptr = list -> head;
        		aNode = list -> FindLastNode(ptr);
        		aBagel = aNode -> Data;
        		cout << "The Last Bagels Flavor Is " << aBagel -> Flavor << endl << "\n";
        }
        else if(option == 8){
            cout << "\n\nProgram Now Ending, Thank You Have A good day!!" << endl;
            break;
        }
    }
}




