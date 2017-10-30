
#include "shape.h"

double Shape::calcArea()
{
	// this function calculates the area of any shape 
	return 2.5;

}

double Square::calcArea()
{
	return width*lenth;
}

double Recangle::calcArea()
{
	return 2*width*lenth;
}