#include "Vector.h"
#include "Node.h"
#include "List.h"

//Contructors
//Default (empty list)
List::List(){
	Node n;
	head_=new Node(n);
	nb_elts=0;
}

//Copy
List::List(const List& model){
	this->head_=model.head_;
	this->nb_elts=model.nb_elts;
}

//Gives the first element
//~ List::List(Node first_element){
	//~ head_= new Node(first_element);
	//~ nb_elts=0; //problem implement method to count elements
//~ }

//Destructor
List::~List(){
	delete head_;
}

//Getters
int List::get_nb_elts(){
	return nb_elts;
}
Node* List::get_head(){
	return head_;
}
// TO DOOOOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!
//Add and substract an element at the end of the list
void List::PushBack(Node* addr){
	
	nb_elts++;
	
}

void List::PopBack(){
	nb_elts--;
}
