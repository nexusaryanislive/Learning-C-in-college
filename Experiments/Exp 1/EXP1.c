#include<stdio.h>

//We'll find the area and circumference of a CIRCLE

int main()
{

  //We'll find the area and circumference of a CIRCLE

  float radius;
  printf("Enter the value of the RADIUS of circle: \n");
  scanf("%f", &radius);

  float pi = 3.14;
  float area = pi*radius*radius;
  printf("The area of the circle is: %f \n", area);

  float circumference= 2*pi*radius;
  printf("The circumference of the circle is: %f \n", circumference);

  // RECTANGLE
  float len,bt;

  printf("Enter the value of length of rectangle: \n");
  scanf("%f", &len);
  printf("\n Enter the value of breadth of rectangle: \n");
  scanf("%f", &bt);

  float area_rec= len*bt;
  printf("\n The area of the rectangle is: %f \n", area_rec);

  float perimeter=2*(len+bt);
  printf("The perimeter of the rectangle is: %f \n", perimeter);

  //SQUARE

  float side;

  printf("Enter the value of the side of the square: ");
  scanf("%f", &side);

  float area_sq= side*side;
  printf("The area of the square is : %f \n", area_sq);

  float perimeter_sq = 4*side;
  printf("The perimeter of the square is : %f \n", perimeter_sq);

  //TRIANGLE

  float side1, side2, side3, height;
  printf("Enter the value of side1 (base) = ");
  scanf("%f", &side1);

  printf(" \n Enter the value of side2 = ");
  scanf("%f", &side2);

  printf("\n Enter the value of side3 = ");
  scanf("%f", &side3);

  printf("\n Enter the value of height = ");
  scanf("%f", &height);

  float area_tg = 0.5*side1*height;
  printf("\n The area of the triangle is: %f \n", area_tg);

  float perimeter_tg = side1+side2+side3;
  printf("The perimeter of the triangle is: %f \n", perimeter_tg);

  return 0;

}


