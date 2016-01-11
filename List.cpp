#include "Vector.h"
#include "Node.h"
#include "List.h"

//Contructors
//Default (empty list)
List::List(){
	head_=nullptr;
	nb_elts=0;
}

//Copy
List::List(const List& model){
	this->head_=model.head_;
	this->nb_elts=model.nb_elts;
}

//Gives the first element
List::List(Node* first_element){
	head_=first_element;
	nb_elts=0; //problem implement method to count elements
}

// TO DOOOOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!
//Add and substract an element at the end of the list
void List::PushBack(){
	//On parcourt la liste jusqu'à atteindre le dernier element
}

void List::PopBack(){
}
