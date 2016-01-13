# include <stdio.h>
#include <math.h>
#include <cassert>
#include <iostream>
#include <cstdlib>
#include "Vector.h"
#include "Node.h"
#include "List.h"

//Method Display
void my_display(Vector v){
	printf("The Coordinates are (%f,%f) and the norm is %f.\n",v.get_x(),
	v.get_y(),v.get_norm());
}

//Main method:

int main(int argc, char* argv[]){
	
	Vector v1;
	printf("v1 (default): ");
	my_display(v1);
	
	Vector v2(3,4);
	printf("v2: ");
	my_display(v2);
	
	Vector v3(17,72);
	Node n3=Node(v3);

	Node n1=Node(v2);
	printf("Vector of Node n1 (contains v2): ");
	my_display(n1.get_v());
	printf("n1 pointe vers %p \n",n1.get_next());
	
	Node n2=Node(v1);
	n2.set_next(&n1);
	printf("n2 pointe vers %p \n",n2.get_next());
	
	printf("Vector of Node n2 (contains v1): ");
	my_display(n2.get_v());

	List l1;
	l1.PushBack(&n1);
	l1.PushBack(&n3);
	
	Node* nTest;
	Vector vTest;
	nTest=l1.get_head();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	nTest=l1.get_head();
	nTest=(*nTest).get_next();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	nTest=(*nTest).get_next();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	l1.Insert(&n2,1);
	
	
	nTest=l1.get_head();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	nTest=l1.get_head();
	nTest=(*nTest).get_next();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	nTest=(*nTest).get_next();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	nTest=(*nTest).get_next();
	vTest=(*nTest).get_v();
	my_display(vTest);
	
	
	printf("J'ai parcouru le main. \n");
	
	
	return 0;
	
}
