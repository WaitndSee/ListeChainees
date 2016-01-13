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

//Setters
void List::set_head(Node addr){
	//TODO
}
//Add and substract an element at the end of the list
void List::PushBack(Node addr){
	Node n(*head_);	
	Node* temp=n.get_next();
	while (temp!=nullptr){
		n=*n.get_next();
		temp=n.get_next();
	}
	n.set_next(&addr);
	nb_elts++;
}

void List::PopBack(){
	Node n(*head_);	
	Node* temp=n.get_next();
	Node save;
	while (temp!=nullptr){
		save=n;
		n=*n.get_next();
		temp=n.get_next();
	}
	save.set_next(nullptr);
	nb_elts--;
}

void List::Insert(Node addr){
	//TODO
}
