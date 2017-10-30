#pragma once

class Shape {

	// access modefiers 
protected:
	double width;
	double lenth;

	double calcArea();

public:

private:


};

class Square : Shape {

public:
	double calcArea();

	void setWidth(double w)
	{
		width = w;
	}

	void setLength(double l)
	{
		lenth = l;
	}
	
	Square(double w, double l)
	{
		width = w;
		lenth = l;
	}

 

	

};

class Recangle : Shape {

public:
	double calcArea();

	void setWidth(double w)
	{
		width = w;
	}

	void setLength(double l)
	{
		lenth = l;
	}

	Recangle(double w, double l)
	{
		width = w;
		lenth = l;
	}

private:
	
};