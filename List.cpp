#include "Vector.h"
#include "Node.h"
#include "List.h"

#include <stdio.h>

//Contructors
//Default 
List::List(){
	Node n;
	head_=new Node(n);
	nb_elts=0;
	printf("Capitaine ,Liste crée mon Capitaine !"); 
}

//Copy
List::List(const List& model){
	this->head_=model.head_;
	this->nb_elts=model.nb_elts;
}


//Destructor
List::~List(){
	//~ Node n(*head_);	
	//~ Node* temp=n.get_next();
	//~ Node save;
	//~ while (temp!=nullptr){
		//~ save=n;
		//~ n=*n.get_next();
		//~ temp=n.get_next();
		//~ delete &save;
	//~ }
	//~ delete &n;
	//~ printf("My job here is done"); 
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
	printf("J'ai fait quelque chose !!! Enfin je crois ... 'U_u "); 
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
	printf("The empire strikes back"); 
}

void List::Insert(Node addr,int position){
	//TODO
}
