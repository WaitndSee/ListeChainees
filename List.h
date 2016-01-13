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
		
		//Destructor
		~List();
		
		//Getters
		int get_nb_elts();
		Node* get_head();
		
		//Setters
		void set_head(Node* n);
		
		//Methods
		void PushBack(Node* n);
		void PopBack();
		void Insert(Node* n,int position);
};

#endif
