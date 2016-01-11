#ifndef NODE_H
#define NODE_H

class Node {
	
	public :
	
		//Constructors
		Node();
		Node(Vector temp);
		Node(const Node& model);
		
		//Getters
		//Gives the pointer to the next Node (next)
		Node* get_next();
		//Gives the pointer to the vector
		Vector* get_address();
		
		//Setter
		void set_next(Node* n);
		
		//Destructor
		~Node();
		
	protected :
		//Params
		Vector* addr;
		Node* next;
		
};

#endif
