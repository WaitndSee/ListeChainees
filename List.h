#ifndef LIST_H
#define LIST_H

class List{
	
	protected:
		Node* head_;
		int nb_elts;
	
	public:
		//Constructors
		List();
		List(const List& model);
		List(Node* first_element);
		
		//Add and substract an element at the end of the list
		void PushBack();
		void PopBack();
};

#endif
