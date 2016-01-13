#include "Vector.h"
#include "Node.h"
#include "List.h"

#include <stdio.h>

//Contructors
//Default 
List::List(){
	Vector v(1,2);
	Node n(v);
	head_=new Node(n);
	nb_elts=0;
	printf("Capitaine ,Liste crée mon Capitaine !\n"); 
}

//Copy
List::List(const List& model){
	this->head_=model.head_;
	this->nb_elts=model.nb_elts;
}


//Destructor
List::~List(){   //Il y a un ptit problème avec le destructeur
	//~ Node n(*head_);	
	//~ Node* temp=n.get_next();
	//~ 
	//~ while (temp!=nullptr){
		//~ Node save;
		//~ save=n;
		//~ n=*n.get_next();
		//~ temp=n.get_next();
		//~ delete &save;
	//~ }
	//~ 
	printf("My job here is done \n"); 
	delete head_;
	//~ delete &nb_elts;

}

//Getters
int List::get_nb_elts(){
	return nb_elts;
}
Node* List::get_head(){
	return head_;
}

//Setters
void List::set_head(Node* addr){
	//TODO
}
//Add and substract an element at the end of the list
void List::PushBack(Node* addr){
	Node* n;
	n=head_;
	Node* temp=(*n).get_next();
	while (temp!=nullptr){
		n=(*n).get_next();
		temp=n;
	}
	(*n).set_next(addr);
	nb_elts++;
	
	printf("J'ai fait quelque chose !!! Enfin je crois ... 'U_u \n"); 
}

void List::PopBack(){
	Node* n;
	n=head_;	
	Node* temp=(*n).get_next();
	Node save;
	while (temp!=nullptr){
		save=(*n);
		n=(*n).get_next();
		temp=n;
	}
	Node* p=nullptr;
	save.set_next(p);
	nb_elts--;

	printf("The empire strikes back\n"); 
}

void List::Insert(Node* addr,int position){
	//TODO
}
