
# include <stdio.h>
#include <math.h>
#include <cassert>
#include <iostream>
#include <cstdlib>

#include "Node.h"
#include "Vector.h"


//Contructors
//Default
Node::Node(){
	Vector v2;
	addr=new Vector(v2);
	next =nullptr;
}

/**
 * On doit réaliser une copie avec un new pour éviter de perdre 
 * les données, il faudra par contre bien faire un delete pour
 * fermer le new ouvert.
 * */

//Gives a Vector (passage par valeur)
Node::Node(Vector vec){
	
	addr=new Vector(vec);
	next=nullptr;
}

//Copy	
Node::Node(const Node& model){
	this->addr=model.addr;
	this->next=model.next;
}

//Setter
void Node::set_next(Node* n){
	next=n;
}

//Getter
//Next node
Node* Node::get_next(){
	return next;
}

//The vector
Vector* Node::get_address(){
	return addr;
}

//Destructor
Node::~Node(){
	delete addr;
}

