#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

//Variables

double sArea2;
double vVolume;
double h, c, n;

//variables
double hHeight, aBase, sArea;
double aCateteTriangle, bCateteTriangle;
double aSide, bSide, cSide, semiPerimeter;
double bBase, mMiddleLine;
double a, b, r, q, w;
double aAngl, bAngl;
double aRadius, bRadius, lArc;
double aAxle, bAxle;
const double Pi=3.141592653589;
int y, p;
double Diagonal, aDiagonal, bDiagonal;

/*a function to calculate the area of triangle in terms of height and base */
 
void MyFuncTriangle ()
{ 
   cout << "Set the height of the triangle: \n";
   cin >> hHeight;
   
   cout << "Set the base of the triangle: \n";
   cin >> aBase;
   
   sArea=aBase*hHeight*1.0/2.0;
   
   if (sArea<=0) cout << "There is no such triangle. \n";
      else
         cout << "The area of the triangle is "<<sArea<<"\n";
  
   }

//Function for calculating the area of a right triangle

void MyFuncRectangularTriangle ()
{
   cout << "Set the first leg of the triangle: \n";
   cin >> aCateteTriangle;
   
   cout << "Set the second leg of the triangle: \n";
   cin >> bCateteTriangle;
   
//Calculation of the area of ??a right-angled triangle by the formula

   sArea=aCateteTriangle*bCateteTriangle*1.0/2.0;
   
   if (sArea<=0) cout << "There is no such triangle. \n";
     else   
       cout << "The area of the triangle is "<<sArea<<"\n";
   
   }
//Function for calculating the area of a triangle using Heron's formula

void MyFuncGerAreaTriangle ()
 {
	 cout << "Set a to the side of the triangle: \n";
	 cin >> aSide;
	 
	 cout << "Set b to the side of the triangle: \n";
	 cin >> bSide;
	 
	 cout << "Set c to the side of the triangle: \n";
	 cin >> cSide;
	 
//Calculation of the half-perimeter of a triangle

     semiPerimeter=(aSide+bSide+cSide)/2.0;
     
//Calculating the area of a triangle

     sArea=sqrt(semiPerimeter*(semiPerimeter-aSide)*(semiPerimeter-bSide)*(semiPerimeter-cSide));	  
 
     if (sArea<=0) cout << "There is no such triangle. \n";
       else
         cout << "The area of the triangle is "<<sArea<<"\n";
     
 }
 
//Function for calculating the area of an isosceles triangle

void MyFuncAreaIsoscelesTriangle ()

{	
	cout << "Set the height of the triangle: \n";
	cin >> hHeight;
	
	cout << "Specify the base of the triangle: \n";
	cin >> bBase;
	
//Formula calculation

    sArea=hHeight*bBase*1.0/2.0;
    
    if (sArea<=0) cout << "There is no such triangle. \n";
      else 
        cout << "The area of the triangle is "<<sArea<<"\n";
}

/*Function for calculating the area of an isosceles triangle
through sides a and b*/

void MyFuncAreaIsoscelesTriangle2 ()

{
	cout << "Specify side a of triangle: \n";
	cin >> aSide;
	
	cout << "Specify side b of triangle: \n";
	cin >> bSide;
	
	a=pow(aSide, 2);
	b=pow(bSide, 2);
	
	sArea=(bSide/4.0)*sqrt(4.0*a-b);
	
	if (sArea<=0) cout << "There is no such triangle. \n";
	  else
	    cout << "The area of the triangle is "<<sArea<<"\n";
	
}

/*Function for calculating the area of a triangle through two sides and
angle between them*/

void MyFuncAreaTriangle ()

{
	cout << "Specify side a of triangle: \n";
	cin >> aSide;
	
	cout << "Specify side b of triangle: \n";
	cin >> bSide;
	
	cout << "Set the angle between them: \n";
	cin >> aAngl;

//Convert angle values to radians

	aAngl=aAngl*Pi/180.0;
	
	sArea=aSide*bSide*sin(aAngl)*1.0/2.0;
	
	if (sArea<=0) cout << "There is no such triangle. \n";
	  else	
	    cout << "The area of the triangle is "<<sArea<<"\n";
	
}
	
void MyTriangle ()

{ 
   char op;

   cout << "To calculate the area of a triangle through the height and base, press symbol a. \n";
   cout << "To calculate the area of a right-angled triangle, press symbol b. \n";
   cout << "To calculate the area of a triangle using Heron's formula, press symbol c. \n";
   cout << "To calculate the area of an isosceles triangle through the height and base, press symbol d. \n";
   cout << "To calculate the area of an isosceles triangle through sides a and b, press symbol e. \n";
   cout << "To calculate the area of a triangle through two sides and the angle between them, press symbol f. \n";
   cin >> op;
   
   if (op=='a'){
   	 MyFuncTriangle ();
   }else if (op=='b'){
   	 MyFuncRectangularTriangle ();
   }else if (op=='c'){
   	 MyFuncGerAreaTriangle ();
   }else if (op=='d'){
   	 MyFuncAreaIsoscelesTriangle ();
   }else if (op=='e'){
   	 MyFuncAreaIsoscelesTriangle2 ();
   }else if (op=='f'){
   	 MyFuncAreaTriangle ();
   }else cout << "Leter entered incorrectly. \n";
   
 }
/*Function for finding the area of a square, rectangle,
parallelogram
Function for finding the area of a square across a side*/
void MyFuncSquare ()

{	
	cout << "Set the side of the square: \n";
	cin >> aSide;
	
	sArea=pow(aSide, 2);
	
	if (sArea<=0) cout << "There is no such square. \n";
	  else
	    cout << "The area of the square is "<<sArea<<"\n";
}
//Function for finding the area of a square through the diagonal

void MyFuncSquare2 ()

{
	cout << "Specify the diagonal of the square: \n";
	cin >> Diagonal;
	
	Diagonal=pow(Diagonal, 2);
	sArea=Diagonal*1.0/2.0;
	
	if (sArea<=0) cout << "There is no such square. \n";
	  else
	    cout << "The area of the square is "<<sArea<<"\n";
}

//Function for finding the area of a rectangle

void MyFuncRectangle ()

{
	cout << "Specify a side of the rectangle: \n";
	cin >> aSide;
	
	cout << "Specify b side of the rectangle: \n";
	cin >> bSide;
	
	sArea=aSide*bSide;
	
	if (sArea<=0) cout << "No such rectangle exists. \n";
	  else
	    cout << "The area of the rectangle is "<<sArea<<"\n";
}

//Function for finding the area of a parallelogram in terms of sides and angle

void MyFuncParallelogram ()

{
	cout << "Specify a side of the parallelogram: \n";
	cin >> aSide;
	
	cout << "Specify b side of the parallelogram: \n";
	cin >> bSide;
	
	cout << "Specify the angle of the parallelogram: \n";
	cin >> aAngl;
	
	aAngl=aAngl*Pi/180.0;
	
	sArea=aSide*bSide*sin(aAngl);
	
	if (sArea<=0) cout << "There is no such parallelogram. \n";
	  else
	    cout << "The area of the parallelogram is "<<sArea<<"\n";
}

/*Function for finding the area of a parallelogram across a side
and height*/

void MyFuncParallelogram2 ()

{
	cout << "Specify the side of the parallelogram: \n";
	cin >> aSide;
	
	cout << "Set the height of the parallelogram: \n";
	cin >> hHeight;
	
	sArea=aSide*hHeight;
	
	if (sArea<=0) cout << "There is no such parallelogram. \n";
	  else	
	    cout << "The area of the parallelogram is "<<sArea<<"\n";
}

/*Function for calculating the area of a parallelogram through the diagonals
 and the angle between them */
 
void MyFuncParallelogram3 ()

{
	cout << "Specify the large diagonal of the parallelogram: \n";
	cin >> aDiagonal;
	
	cout << "Specify the smaller diagonal of the parallelogram: \n";
	cin >> bDiagonal;
	
	cout << "Set the angle between them: \n";
	cin >> aAngl;
	
	aAngl=aAngl*Pi/180.0;
	
	sArea=aDiagonal*bDiagonal*sin(aAngl)*1.0/2.0;
	
	if (sArea<=0) cout << "There is no such parallelogram. \n";
	  else
	    cout << "The area of the parallelogram is "<<sArea<<"\n";
}
	
/*Function for parallelograms*/
void MyParallelogram ()

{
	char op;
	
	cout << "To calculate the area of a parallelogram through the sides and angle, press symbol a. \n";
	cout << "To calculate the area of a parallelogram through the side and height, press symbol b. \n";
	cout << "To calculate the area of a parallelogram through the diagonals and the angle between them, press symbol c. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncParallelogram ();
	}else if (op=='b'){
		MyFuncParallelogram2 ();
	}else if (op=='c'){
		MyFuncParallelogram3 ();
	}else cout << "Invalid symbol entered. \n";
}

/*Function for calculating the area of a rhombus through diagonals*/

void MyFuncRhombus ()

{
	cout << "Specify the large diagonal of the rhombus: \n";
	cin >> aDiagonal;
	
	cout << "Specify the smaller diagonal of the rhombus: \n";
	cin >> bDiagonal;
	
	sArea=aDiagonal*bDiagonal/2.0;
	
	if (sArea<=0) cout << "There is no such rhombus. \n";
	  else 
	    cout << "The area of the rhombus is "<<sArea<<"\n";
}
/*Function for calculating the area of a rhombus through the sides and the angle between them*/

void MyFuncRhombus2 ()

{
	cout << "Set the side of the rhombus: \n";
	cin >> aSide;
	
	cout << "Specify the angle of the rhombus: \n";
	cin >> aAngl;
	
	aSide=pow(aSide, 2);
	
	aAngl=aAngl*Pi/180.0;
	
	sArea=aSide*sin(aAngl);
	
	 if (sArea<=0) cout << "There is no such rhombus. \n";
	  else
	    cout << "The area of the rhombus is "<<sArea<<"\n";
}	     
/*Function for calculating the area of a rhombus in terms of height*/

void MyFuncRhombus3 ()

{
	cout << "Set the height of the rhombus: \n";
	cin >> hHeight;
	
	cout << "Set the side of the rhombus: \n";
	cin >> aSide;
	
	sArea=hHeight*aSide;
	
	if (sArea<=0) cout << "There is no such rhombus. \n";
	  else
	    cout << "The area of the rhombus is "<<sArea<<"\n";
}

/*Function for calculating the area of a rhombus through side and radius
 inscribed circle*/

void MyFuncRhombus4 ()

{
	cout << "Set the side of the rhombus: \n";
	cin >> aSide;
	
	cout << "Specify the radius of the inscribed circle: \n";
	cin >> r;
	
	sArea=aSide*r*2.0;
	
	if (sArea<=0) cout << "There is no such rhombus. \n";
	  else	
	    cout << "The area of the rhombus is "<<sArea<<"\n";
}

/*Function for calculating the area of a rhombus through the diagonal and the angle between the sides*/
 
void MyFuncRhombus5 ()

{
	cout << "Specify the diagonal of the rhombus: \n";
	cin >> aDiagonal;
	
	cout << "Set the angle between the sides of the rhombus: \n";
	cin >> aAngl;
	
	aAngl=aAngl/2.0;
	
	aAngl=aAngl*Pi/180.0;
	
	aDiagonal=pow(aDiagonal, 2);
	
	sArea=aDiagonal*tan(aAngl)*1.0/2.0;
	
	if (sArea<=0) cout << "There is no such rhombus. \n";
	  else
	    cout << "The area of the rhombus is "<<sArea<<"\n";
	    
}	    	        	    
/*Function for rhombus*/
void MyRhombus	()

{
	char op;
	
	cout << "To calculate the area of a rhombus through the diagonals, press symbol a. \n";
	cout << "To calculate the area of a rhombus through the sides and the angle between them, press symbol b. \n";
	cout << "To calculate the area of a rhombus through the height of the them press symbol c. \n";
	cout << "To calculate the area of a rhombus through the radius of the inscribed circle, press symbol d. \n";
	cout << "To calculate the area of a rhombus through the diagonal and the angle between the sides, press symbol e.\n";
	cin >> op;
	
	if (op=='a'){
		MyFuncRhombus ();
	}else if (op=='b'){
		MyFuncRhombus2();
	}else if (op=='c'){
		MyFuncRhombus3 ();
	}else if (op=='d'){
		MyFuncRhombus4 ();
	}else if (op=='e'){
		MyFuncRhombus5 ();
	}else cout << "Invalid symbol entered. \n";
}		      	            
/*Function for squares, rectangles, parallelograms, rhombuses*/

void MyFuncFoSquare ()

{   
    char op;

	cout << "To calculate the area of the square across the side, press symbol a. \n";
	cout << "To calculate the area of the square through the diagonal, press symbol b. \n";
	cout << "To calculate the area of a rectangle, press symbol c. \n";
	cout << "To calculate the area of a parallelogram, press symbol d. \n";
	cout << "To calculate the area of a rhombus, press symbol e. \n";
	cin >> op;
	
	if (op=='a'){
	      MyFuncSquare ();
    }else if (op=='b'){
    	MyFuncSquare2 ();
	}else if (op=='c'){
		MyFuncRectangle ();
	}else if (op=='d'){
		MyParallelogram ();
	}else if (op=='e'){
		MyRhombus ();
	}else cout << "Invalid leter entered. \n";
	     
	 }           
/*Function for calculating the area of an arbitrary trapezoid*/

/*Function for calculating the area of an arbitrary trapezoid through the base and height*/

void MyFuncTrapeze ()

{  
	cout << "Specify the bottom base of the trapezoid: \n";
	cin >> aBase;
	
	cout << "Specify the top base of the trapezoid: \n";
	cin >> bBase;
	
	cout << "Set the height of the trapezoid: \n";
	cin >> hHeight;
	
	sArea=(aBase+bBase)/2.0*hHeight;
		
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else 
	    cout << "The area of the trapezoid is "<<sArea<<"\n";
}
/*Function for calculating the area of a trapezoid through the midline and height*/
 
void MyFuncTrapeze2 ()

{
	cout << "Set the midline of the trapezoid: \n";
	cin >> mMiddleLine;
	
	cout << "Set the height of the trapezoid: \n";
	cin >> hHeight;
	
	sArea=mMiddleLine*hHeight;
	
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
	    cout << "The area of the trapezoid is "<<sArea<<"\n";
	    
}

/*Function for calculating the area of a trapezoid using diagonals and angles
between them*/
 
void MyFuncTrapeze3 ()

{
	cout << "Specify the large diagonal of the trapezoid: \n";
	cin >> aDiagonal;
	
	cout << "Specify the smaller diagonal of the trapezoid: \n";
	cin >> bDiagonal;
	
	cout << "Set the angle between them: \n";
	cin >> aAngl;
	
	aAngl=aAngl*Pi/180.0;
	
	sArea=((aDiagonal*bDiagonal)/2.0)*sin(aAngl);
	
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
	    cout << "The area of the trapezoid is "<<sArea<<"\n";	
	}      


/*Function for calculating the area of a trapezoid through the sides*/
	      
void MyFuncTrapeze4 ()

{
	cout << "Set the side of the trapezoid: \n";
	cin >> aSide;
	
	cout << "Set another side of the trapezoid: \n";
	cin >> bSide;
	
	cout << "Specify the bottom base of the trapezoid: \n";
	cin >> aBase;
	
	cout << "Specify the top base of the trapezoid: \n";
	cin >> bBase;
	
	a=pow(aSide,2);
	
	b=pow(bSide,2);
	
	q=pow((aBase-bBase),2);
	
	r=a-pow(((q+a-b)/2.0*(aBase-bBase)),2);
	
	w=sqrt(r);
	
	sArea=(aBase+bBase)/2.0*w;
	
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
	    cout << "The area of the trapezoid is "<<sArea<<"\n";
	    
}	    

/*Function for calculating the area of an isosceles trapezoid through
sides and angle*/

void MyFuncTrapeze5 ()

{
    cout << "Set the side of the trapezoid: \n";
    cin >> aSide;
    
    cout << "Set the base of the trapezoid: \n";
    cin >> aBase;
    
    cout << "Set the angle between them: \n";
    cin >>	aAngl;
    
    // Convert degrees of angle to radians
    
    aAngl=aAngl*Pi/180.0;
    
    sArea=aSide*sin(aAngl)*(aBase-aSide*cos(aAngl));
    
    if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
    
    cout << "The area of the trapezoid is "<<sArea<<"\n";
}

/*Function for finding the area of a trapezoid in terms of the radius
 * inscribed circle and angle between side and base*/
 
void MyFuncTrapeze6 ()

{
	cout << "Specify the radius of the inscribed circle: \n";
	cin >> aRadius;
	
	cout << "Set the angle between the side and the base of the trapezoid: \n";
	cin >> aAngl;
	
	//Convert degrees of angle to radians
	
	aAngl=aAngl*Pi/180.0;
	
	//Calculation of the area of a trapezoid using the formula
	
	aRadius=pow(aRadius, 2);
	
	sArea=4.0*aRadius/sin(aAngl);
	
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
	
	cout << "The area of the trapezoid is "<<sArea<<"\n";
}
/*Calculation of the area of the trapezoid through the lateral side, the median line
* and angle at the base*/

void MyFuncTrapeze7 ()

{
	cout << "Set the size of the median line: \n";
	cin >> mMiddleLine;
	
	cout << "Set the size of the side: \n";
	cin >> aSide;
	
	cout << "Set the angle at the base: \n";
	cin >> aAngl;
	
	aAngl=aAngl*Pi/180.0;
	
	sArea=mMiddleLine*aSide*sin(aAngl);
	
	if (sArea<=0) cout << "There is no such trapezoid. \n";
	  else
	
	cout << "The area of the trapezoid is "<<sArea<<"\n";
}	

/*Function for calculating the area of trapeziums*/
	      
void MyTrapeze ()

{	
    char op;

	cout << "To calculate the area of the trapezoid through the bases and the height, press symbol a. \n";
	cout << "To calculate the area of the trapezoid through the median line, and the height, press symbol b. \n";
	cout << "To calculate the area of the trapezoid through the diagonals, and the angle between them, press symbol c. \n";
	cout << "To calculate the area of a trapezoid through the sides and bases, press symbol d. \n";
	cout << "To calculate the area of the trapezoid through the sides and the angle between them, press symbol e. \n";
	cout << "To calculate the area of the trapezoid through the radius of the inscribed circle, press symbol f. \n";
	cin >> op; 
	
	if (op=='a'){
		MyFuncTrapeze();
	}else if (op==b){
		MyFuncTrapeze2 ();
	}else if (op=='c'){
		MyFuncTrapeze3 ();
	}else if (op=='d'){
		MyFuncTrapeze4 ();
	}else if (op=='e'){
		MyFuncTrapeze5 ();
	}else if (op=='f'){
		MyFuncTrapeze6 ();
	}else cout << "Invalid symbol entered! \n";
		     
}	    

/*Function for calculating the area of a regular polygon*/

void MyFuncPolygon ()

{
	cout << "Specify the size of the side of the polygon: \n";
	cin >> aSide;
	
	cout << "Specify the number of sides of the polygon: \n";
	cin >> a;
	
	aSide=pow(aSide, 2);
	
	b=180.0/a;
	
	b=b*Pi/180.0;
	
	sArea=(a*aSide)/(4.0*tan(b));
	
	if (sArea<=0) cout << "There is no such polygon. \n";
	  else
	
	cout << "The area of the polygon is "<<sArea<<"\n";
}

/*Function for calculating the area of a circle*/

void MyFuncCircle ()

{
	cout << "Set the radius of the circle: \n";
	cin >> aRadius;
	
	aRadius=pow(aRadius,2);
	
	sArea=aRadius*Pi;
	
	if (sArea<=0) cout << "There is no such circle. \n";
	  else
	
	cout << "The area of the circle is "<<sArea<<"\n";
}

/*Function for calculating the area of a sector of a circle*/

void MyFuncCircleSector ()

{
	cout << "Set the radius of the circle: \n";
	cin >> aRadius;
	
	cout << "Set the arc length: \n";
	cin >> lArc;
	
	sArea=lArc*aRadius*1.0/2.0;
	
	if (sArea<=0) cout << "This sector does not exist. \n";
	  else
	
	cout << "The area of the sector of the circle is "<<sArea<<"\n";
}	

/*Function for calculating the area of a sector through
 * circle radius and sector angle*/
 
void MyFuncCircleSector2 ()

{
	cout << "Set the radius of the circle: \n";
	cin >> aRadius;
	
	cout << "Set the angle of the sector: \n";
	cin >> aAngl;
	
	//Converting angle to radians
	
	//
	
	aAngl=aAngl*Pi/180;
	
	//Calculating the square of the radius
	
	aRadius=pow(aRadius, 2);
	
	//Calculating the area of ??a sector
	
	sArea=Pi*aRadius*aAngl/360.0;
	
	if (sArea<=0) cout << "This sector does not exist. \n";
	  else
	
	cout << "The area of the sector of the circle is "<<sArea<<"\n";
}	
/*Function for calculating the area of a segment through the radius of a circle,
 * and segment angle*/
 
void MyFuncCircleSegment ()

{
	cout << "Set the radius of the circle: \n";
	cin >> aRadius;
	
	cout << "Specify the segment angle in degrees: \n";
	cin >> aAngl;
	
	//Convert degrees of angle to radians
	
	bAngl=aAngl*Pi/180.0;
	
	//Calculate the square of the radius
	
	aRadius=pow(aRadius, 2);
	
	//We calculate the area of the segment by the formula
    
    sArea=aRadius*1.0/2.0*((Pi*aAngl/180.0)-sin(bAngl));
    
    if (sArea<=0) cout << "This segment does not exist. \n";
	  else
    
    cout << "The area of the segment is "<<sArea<<"\n";
}
/*Function for calculating the area of a ring*/

void MyFuncRing ()

{
	cout << "Specify the radius of the outer circle: \n";
	cin >> aRadius;
	
	cout << "Specify the radius of the inner circle: \n";
	cin >> bRadius;
	
	//Converting the value of the radii to the square
	
	aRadius=pow(aRadius, 2);
	
	bRadius=pow(bRadius, 2);
	
	//Calculation of the area of the ring by the formula
	
	sArea=Pi*(aRadius-bRadius);
	
	if (sArea<=0) cout << "There is no such ring. \n";
	  else
	
	cout << "The area of the ring is "<<sArea<<"\n";
}

/*Function for calculating the area of an ellipse*/

void MyFuncEllipse ()

{
	cout << "Set semi-major axis: \n";
	cin >> aAxle;
	
	cout << "Set the semi-minor axis: \n";
	cin >> bAxle;
	
	sArea=Pi*aAxle*bAxle;
	
	if (sArea<=0) cout << "No such ellipse exists. \n";
	  else
	
	cout << "The area of the ellipse is "<<sArea<<"\n";
}
/*Function for circle, sector of circle, segment
 * rings and ellipses*/
 
void MyFuncCircleAndSector ()

{
	char op;
	
	cout << "To calculate the area of a circle, press symbol a. \n";
	cout << "To calculate the area of a sector of a circle through the length of the arc, press symbol b. \n";
	cout << "To calculate the area of a sector of a circle through an angle, press symbol c. \n";
	cout << "To calculate a segment of a circle, press symbol d. \n";
	cout << "To calculate the area of the ring, press symbol e. \n";
	cout << "To calculate the area of the ellipse, press symbol f. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncCircle ();
	}else if (op=='b'){
		MyFuncCircleSector ();
	}else if (op=='c'){
		MyFuncCircleSector2 ();
	}else if (op=='d'){
		MyFuncCircleSegment ();
	}else if (op=='e'){
		MyFuncRing ();
	}else if (op=='f'){
		MyFuncEllipse ();
	}else cout << "Invalid symbol entered! \n";
		 
}
  
void MyFuncAreaFigur ()

{
	
	char op;
	
	cout << "Press symbol a to calculate the area of a triangle. \n";
	cout << "To calculate the area of a square, rectangle, rhombus, \n ";
    cout << "or parallelogram press symbol b. \n" ;
	cout << "To calculate the area of an arbitrary trapezoid, press symbol c. \n";
	cout << "To calculate the area of a regular polygon, press symbol d. \n";
	cout << "To calculate the area of a circle, a sector of a circle, a segment of a circle, \n ";
    cout << "area of the ring, area of the ellipse, press symbol e.\n";

	cin >> op;
	
	if (op=='a'){
		MyTriangle ();
	}else if (op=='b'){
		MyFuncFoSquare ();
	}else if (op=='c'){
		MyTrapeze ();
	}else if (op=='d'){
		MyFuncPolygon ();
	}else if (op=='e'){
		MyFuncCircleAndSector ();
	}else cout << "Invalid symbol entered! \n";
		    
	system ("pause");         
    
}                  

void MyFuncVolumeCube ()

{
    cout << "Set the side of the cube: \n";
    cin >> aSide;
    
    //Exponentiating a side
    
    aSide = pow(aSide, 3);
    
    vVolume = aSide;
    
    if (vVolume <= 0 ) cout << "No such cube exists. \n";
      else
    
    cout << "The volume of the cube is "<<vVolume<<"\n";
}

void MyFuncParallelepiped ()

{
	cout << "Specify a side of the box: \n";
	cin >> aSide;
	
	cout << "Specify b side of the box: \n";
	cin >> bSide;
	
	cout << "Specify c side of the box: \n";
	cin >> cSide;
	
	vVolume = aSide*bSide*cSide;
	
	if (vVolume<=0) cout << "No such parallelepiped exists. \n";
	else
	
	cout << "The volume of the parallelepiped is "<<vVolume<<"\n";
}

void MyFuncBall ()

{   
    cout << "Specify radius of the ball: \n";
    cin >> aRadius;
    
    a=pow(aRadius, 3);
	
	vVolume = Pi*a*(4.0/3.0);
	
	if (vVolume<=0) cout << "No such ball exists. \n";
	else	
	
	cout << "The volume of the ball is "<<vVolume<<"\n";
}

void MyFuncBallSegment ()

{
	cout << "Specify radius of the ball: \n";
	cin >> aRadius;
	
	cout << "Specify height of the segment: \n";
	cin >> hHeight;
	
	a=pow(hHeight, 2);
	
	vVolume=Pi*a*(3.0*aRadius-hHeight)*(1.0/3.0);
	
	if (vVolume<=0) cout << "No such ball segment exists. \n";
	else
	
	cout << "The volume of the ball segment is "<<vVolume<<"\n"; 
}

void MyFuncGlobLay ()

{
	cout << "Enter the height of the spherical layer: \n";
	cin >> hHeight;
	
	cout << "Enter the larger radius of the spherical layer: \n";
	cin >> aRadius;
	
	cout << "Enter the smaller radius of the spherical layer: \n";
	cin >> bRadius;
	
	a = pow(aRadius, 2);
	
	b = pow(bRadius, 2);
	
	h = pow(hHeight, 2);
	
	vVolume = 1.0/2.0*Pi*hHeight*(a+b+1.0/3.0*h);
	
	if (vVolume<=0) cout << "No such spherical layer exists. \n";
	else
	
	cout << "The volume of the spherical layer is "<<vVolume<<"\n";
	}
	
void MyFuncBallSector ()

{
	cout << "Enter the height of the spherical segment: \n";
	cin >> hHeight;
	
	cout << "Enter the radius of the spherical: \n";
	cin >> aRadius;
	
	a = pow(aRadius, 2);
	
	vVolume = 2.0/3.0*Pi*a*hHeight;
	
	if (vVolume <=0) cout << "No such spherical sector exists. \n";
	else
	
	cout << "The volume of the spherical sector is "<<vVolume<<"\n";
}

void MyFuncCylinder ()

{
	cout << "Enter the height of the cylinder: \n";
	cin >> hHeight;
	
	cout << "Enter the radius of the base cylinder: \n";
	cin >> aRadius;
	
	a = pow(aRadius, 2);
	
	vVolume = Pi*a*hHeight;
	
	if (vVolume<=0) cout << "No such cylinder exists. \n";
	else
	
	cout << "The volume of the cylinder is "<<vVolume<<"\n";
}

void MyFuncCone ()

{
	cout << "Enter the height of the cone: \n";
	cin  >> hHeight;
	
	cout << "Enter the radius of the base cone: \n";
	cin >> aRadius;
	
	a = pow(aRadius, 2);
	
	vVolume = 1.0/3.0*Pi*a*hHeight;
	
	if (vVolume<=0) cout << "No such cone exists. \n";
	else
	
	cout << "The volume of the cone is "<<vVolume<<"\n";
	
}

void MyFuncTruncCone ()

{
	cout << "Enter the height of the truncated cone: \n";
	cin >> hHeight;
	
	cout << "Enter the radius of bottom base: \n";
	cin >> aRadius;
	
	cout << "Enter the radius of top base: \n";
	cin >> bRadius;
	
	a = pow(aRadius, 2);
	
	b = pow(bRadius, 2);
	
	vVolume = 1.0/3.0*Pi*hHeight*(a+aRadius*bRadius+b);
	
	if (vVolume<=0) cout << "No such truncated cone exists. \n";
	else
	
	cout << "The volume of the truncated cone is "<<vVolume<<"\n";
}
	
void MyFuncBallVol ()

{  
    char op;
    
	cout << "To calculate the volume of a ball, press the symbol a. \n";
	cout << "To calculate the volume of a ball segment, press the symbol b. \n";
	cout << "To calculate the volume of a spherical layer press the symbol c. \n";
	cout << "To calculate the volume of a spherical sector press the symbol d. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncBall ();
	}
	else if (op=='b'){
		MyFuncBallSegment ();
	}
	else if (op=='c'){
		MyFuncGlobLay();
	}
	else if (op=='d'){
		MyFuncBallSector ();
	}else cout << "Invalid symbol entered. \n";	
}

void MyFuncCylConeTruncCone ()

{
	char op;
	
	cout << "To calculate the volume of cylinder press symbol a. \n";
	cout << "To calculate the volume of cone press symbol b. \n";
	cout << "To calculate the volume of truncated con press symbol c. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncCylinder ();
	}else if (op=='b'){
		MyFuncCone ();
	}else if (op=='c'){
		MyFuncTruncCone();
	}else cout << "Invalid symbol entered. \n";
}

void MyFuncPyramid ()

{
	cout << "Enter the height of pyramid: \n";
	cin >> hHeight;
	
	cout << "Enter the size of the base of pyramid: \n";
	cin >> aSide;
	
	cout << "Enter the number of the sides of the base pyramid: \n";
	cin >> c;
	
	a=pow(aSide, 2);
	
	b=180.0/c;
	
	b=b*Pi/180.0;
	
	sArea=(c*aSide)/(4.0*tan(b));
	
	vVolume = 1.0/3.0*sArea*hHeight;
	
	if (vVolume<=0) cout << "No such pyramid exists. \n";
	else
	
	cout << "The volume of the pyramid is "<<vVolume<<"\n";
	
}

void MyFuncTruncPyramid ()

{
	cout << "Enter the height of the pyramid: \n";
	cin >> hHeight;
	
	cout << "Enter the size of the base of the pyramid: \n";
	cin >> aSide;
	
	cout << "Enter the number of the sides of the pyramid: \n";
	cin >> n;
	
	cout << "Enter the size of the top base of the pyramid: \n";
	cin >> bSide;
	
	a=pow(aSide, 2);
	
	b=180.0/n;
	
	b=b*Pi/180.0;
	
	sArea=(n*aSide)/(4.0*tan(b));
	
	b=pow(bSide, 2);
	
	c=180.0/n;
	
	c=c*Pi/180.0;
	
	sArea2=(n*bSide)/(4.0*tan(c));
	
	vVolume = 1.0/3.0*hHeight*(b+sqrt(b+a)+a);
	
	if (vVolume<=0) cout << "No such truncated pyramid exists. \n";
	else
	
	cout << "The volume of the truncated pyramid is "<<vVolume<<"\n";	
	
}

void MyFuncCorrectPyramid ()

{
	cout << "Enter height of the pyramid: \n";
	cin >> hHeight;
	
	cout << "Enter the size of the side of the pyramid: \n";
	cin >> aSide;
	
	cout << "Enter number of the side of the pyrmid: \n";
	cin >> n;
	
	a = pow(aSide, 2);
	
	vVolume = (n*a*hHeight)/(12.0*tan(180.0/n));
	
	if (vVolume<=0) cout << "No such correct pyramid exists. \n";
	else
	
	cout << "The volume of the correct pyramid is "<<vVolume<<"\n";
	
}

void MyFuncCorrTrianglPyramid ()

{
	cout << "Enter the height of the pyramid: \n";
	cin >> hHeight;
	
	cout << "Enter the size of the side of pyramid: \n";
	cin >> aSide;
	
	a = pow(aSide, 2);
	
	vVolume = (hHeight*a)/(4.0*sqrt(3.0));
	
	if (vVolume<=0) cout << "No such correct triangle pyramid exists. \n";
	else
	
	cout << "The volume of the correct triangle pyramid is "<<vVolume<<"\n";
	
}

void MyFuncCorrQuadPyramid ()

{
	cout << "Enter the height of the pyramid: \n";
	cin >> hHeight;
	
	cout << "Enter the size of the side of pyramid: \n";
	cin >> aSide;
	
	a = pow(aSide, 2);
	
	vVolume = 1.0/3.0*hHeight*a;
	
	if (vVolume<=0) cout << "No such correct quadrangular pyramid exists. \n";
	else
	
	cout << "The volume of the correct quadrangular pyramid is "<<vVolume<<"\n";
	
}

void MyFuncCorrTetrader ()

{
	cout << "Enter the size of the side of tetrader: \n";
	cin >> aSide;
	
	a = pow(aSide, 3);
	
	vVolume = (a*sqrt(2.0))/12.0;
	
	if (vVolume<=0) cout << "No such correct tetrader exists. \n";
	else
	
	cout << "The volume of the correct tetrader is "<<vVolume<<"\n";
	
}

void MyFuncVolPyramid()

{
	char op;
	
	cout << "To calculate the volume of pyramid press symbol a. \n";
	cout << "To calculate the volume of truncated pyramid press the symbol b. \n";
	cout << "To calculate the volume of correct pyramid press the symbol c. \n";
	cout << "To calculate the volume of correct triangle pyramid press the symbol d. \n";
	cout << "To calculate the volume of correct quadrangular pyramid press symbol e. \n";
	cout << "To calculate the volume of correct tetrader press symbol f. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncPyramid ();
	}else if (op=='b'){
		MyFuncTruncPyramid ();
	}else if (op=='c'){
		MyFuncCorrectPyramid ();
	}else if (op=='d'){
		MyFuncCorrTrianglPyramid ();
	}else if (op=='e'){
		MyFuncCorrQuadPyramid ();
	}else if (op=='f'){
		MyFuncCorrTetrader ();
	}else cout << "Invalid symbol entered. \n";
}

void MyFuncVolumeFigur ()

{
	char op;
	
	cout << "To calculate the volume of a cube, press the symbol a. \n";
	cout << "To calculate the volume of a box, click the symbol b. \n";
	cout << "To calculate the volume of a ball, press the symbol c. \n";
	cout << "To calculete the volume of a cylinder, cone, truncated cone press symbol d. \n";
	cout << "To calculate the volume of the pyramid press symbol e. \n";
	cin >> op;
	
	if(op=='a'){
		MyFuncVolumeCube ();
	}   
	else if(op=='b'){
		MyFuncParallelepiped ();
	}
	else if(op=='c'){
		MyFuncBallVol ();
	}
	else if(op =='d'){
		MyFuncCylConeTruncCone ();
	}
	else if(op=='e'){
		MyFuncVolPyramid ();
	}
	else cout << "Invalid simbol entered. \n";
	system ("pause");
    	
}

int main ()

{
	char op, o;
	
	for(;b!=1;)
	{
	
	cout << "To calculated of area geometr figure press symbol a. \n";
	cout << "To calculated of volume geometr figure press symbol b. \n";
	cin >> op;
	
	if (op=='a'){
		MyFuncAreaFigur();
	}else if (op=='b'){
		MyFuncVolumeFigur ();
	}else cout << "Invalide simbol entered. \n";
	
	cout << "Do you want to continue? Y/N. \n";
	cin >> o;
	
		if(o=='Y'){
			b=0;
		}if(o=='N'){
			b=1;
		}else if(o!='Y'){
			if(o!='N'){
			   cout << "Invalid entered number! \n";	
			}
		}
	}
	system ("pause");
	return 0;
}
