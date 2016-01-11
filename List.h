#ifndef LIST_H
#define LIST_H

class List{
	
	private:
	protected:
		Node* head_;
		int nb_elts;
	
	public:
		//Constructors
		List();
		List(const List& model);
	//	List(Node first_element);  // Finalement ce n'est pas dans le cahier des charges
		
		//Destructor
		~List();
		
		//Getters
		int get_nb_elts();
		
		//Add and substract an element at the end of the list
		void PushBack(Node* n);
		void PopBack();
	
};

#endif
