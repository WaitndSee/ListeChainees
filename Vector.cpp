#include <cassert>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include "Vector.h"

//Default Constructor
Vector::Vector(){
	x=0;
	y=0;
	norm=0;
}

//Copy
Vector::Vector(const Vector& model){
	this->x=model.x;
	this->y=model.y;
	this->norm=pow(pow(x,2)+pow(y,2),0.5);
}

//Giving the coordinates
Vector::Vector(float x,float y){
	this->x = x;
	this->y = y;
	norm=pow(pow(x,2)+pow(y,2),0.5);
}

//Getters

float Vector::get_x(){
	return x;
}

float Vector::get_y(){
	return y;
}

float Vector::get_norm(){
	return norm;
}

//Methods to modify the vector

//Addition	
void Vector::Add(Vector v){
	x=v.x+x;
	y=v.y+y;
	norm=pow(pow(x,2)+pow(y,2),0.5);
}

//Multiplication by a scalar
void Vector::Multiply(float k){
	x=x*k;
	y=y*k;
	norm=norm*k;
}


