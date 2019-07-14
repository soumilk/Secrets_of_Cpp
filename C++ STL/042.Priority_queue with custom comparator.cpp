// FUNCTOR APPLICATION 
/* 
   This is a program which depicts the approach to solve the problem to find out the nearest n cars 
   when we have given the different coordinates of the car's position. we need to find out the 
   n closest cars from origin. 
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class car 
{
	public:
		int x,y,id;
		
		// This is the parameterised constructor of the class cars, which takes the id,x and y coordinates of 
		// the car.
		car(int id,int x,int y)
		{
			this->id=id;
			this->x=x;
			this->y=y;
		}
		
		/*
		 This is the function which returns the values of x^2+y^2, as the diagonal distance 
		 between 2 points in a cartesian coordinate system is sqrt(x^2+y^2). Here we are not 
		 considering the sqrt() to ease the understanding although it returns the same outcome
		*/ 
		int dist()
		{
			return x*x+y*y; 
		}
		
		// This a print function
		void print()
		{
			cout<<"ID:"<<id<<" x= "<<x<<","<<" y= "<<y<<endl;
		}
};

// This class performs a special function, in the concept of functor object. See the README file for details.
class car_comp
{
	public:
	
		// overloaded the operator ()
		bool operator ()(car a,car b)
		{
		//	cout<<"Car Comperator function "<<endl;
		//	return a.dist()<b.dist(); // this is the comparator for the max heap
			return a.dist()>b.dist(); // this is the comparator function for the min heap 
		}
};

int main()
{
	int x[]={2,1,4,6,7,8,9,2,0};
	int y[]={1,5,2,9,0,1,2,6,1};
	
	// This is the priority queue having car objects and custom comparator function i.e. car_comp
	priority_queue<car,vector<car>,car_comp> pq;
	
	for (int i=0;i<9;i++)
	{
		car c(i,x[i],y[i]);	
		pq.push(c);			
	}
	
	while(!pq.empty()) 	   // while(!pq.empty() && pq.size()!=6) to print only the first 3 closest closest 
	{
		car p= pq.top();
		p.print();
		pq.pop();
	}
	return 0;
}
