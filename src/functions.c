#include "projectLibrary.h"
#define PI 3.141593

// function for userInput validation
float validateInput(float userInput)
{
    if (userInput > 0)
    {
        return userInput;
    }
    else
    {
        printf("\n\t\tERROR: The value you entered must be a positive value. Please try again.\n"
               "\n\t\t>> ");
        scanf("%f", &userInput);
        return userInput;
    }
}

// function for perimeter of a square
float perimeterSquare(float side)
{
    return 4.0*side;
}

// function for area of a square
float areaSquare(float side)
{
    return side*side;
}

// function for volume of a cube
float volumeCube(float side)
{
    return side*side*side;
}

// function for perimeter of a rectangle
float perimeterRectangle(float length, float width)
{
    return (2.0*length) + (2.0*width);
}

// function for area of a rectangle
float areaRectangle(float length, float width)
{
    return length*width;
}

// function for volume of rectangular prism
float volumeRectangularPrism(float length, float width, float height)
{
    return length*width*height;
}

// function for Perimeter of a triangle
float perimeterTriangle(float sideA, float sideB, float sideC)
{
    return sideA + sideB + sideC;
}

// function for area of a triangle
float areaTriangle(float base, float height)
{
    return (1.0/2)*(base*height);
}

// function for volume of a triangular pyramid
float volumeTriangularPyramid(float pyramidHeight, float lengthBase, float heightBase)
{
    return (1.0/3)*(1.0/2)*pyramidHeight*lengthBase*heightBase;
}

// function for perimeter of a circle
float perimeterCircle(float radius)
{
    return 2.0*PI*radius;
}

// function for area of a circle
float areaCircle(float radius)
{
    return PI*radius*radius;
}

// function for volume of a sphere
float volumeSphere(float radius)
{
    return (4.0/3)*PI*(radius*radius*radius);
}
