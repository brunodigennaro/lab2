/*	Bruno DiGennaro
	Semptember 5, 2022
	CPSC 1111 Lab 001, Fall 2022
	Lab #2
	Correct compiling errors with lab2.c, which calculates the area of a circle
*/


#include <stdio.h>
#include <math.h>

int main (void) {

	// variables for showing precedence and integer truncation
	// Fixed: placed ',' before 'b'
	int a = 2, b = 9, c = -3, result;

	// variables for area of circle, showing user input, const variable
	// defines a constant: will not allow its value to be changed
	// const float PI = 3.141592;  
										 
	// Fixed: ';' instead of ':'
	float circleArea = 0;    			
	int radius = 0;


	// Show precedence and integer truncation
	// Fixed: ';' instead of ':'
	result = 6 + b / a * c;
	// Fixed: moved '"' from after -7.5 to after '\n'
	// Fixed: added %
	printf("\nresult of 6 + b / a * c is %d, NOT %.1f \n", result, -7.5);

	// Get user input
	// Fixed: added ';' at end of printf()
	printf("Enter radius: ");
	// Fixed: added '"' at end of scanf()	
	// Fixed: moved '"' from after &radius to after %d
	scanf("%d", &radius);     			

	// Calculate circle area
	// Fixed: added ')' before the ';'
	circleArea = (M_PI * (radius * radius)); 

	// Print circle radius, area 
	printf("Circle area = (");

	// Fixed: added 'f' after 'print' and moved '"' to after 'PI'
	// Fixed: moved '"' to after %f and added ',' after '"%f"'
	printf("%f", M_PI);  			 		
	printf(" * ");

	// Fixed: added '"' around 'radius'
	printf("radius");	
	printf(" * ");

	// Fixed: added '"' around 'radius'
	printf("radius");	

	// Fixed: changed '.' to ';'		 	 		
	printf(") = ");				

	// Fixed: added '"' after circleArea 		
	// Fixed: changed apostrophe to '"', and removed quote from circleArea
	printf("%.2f\n", circleArea);		

	return 0;
}



