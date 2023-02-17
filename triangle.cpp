#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
  public:
    Triangle(double a, double b, double c);
    double areaHeron();
    double areaAltitude();
    double areaSin();

  private:
    double a;
    double b;
    double c;
};

Triangle::Triangle(double a, double b, double c) {
  this->a = a;
  this->b = b;
  this->c = c;
}

double Triangle::areaHeron() {
  /*
  Heron's formula for the area of a triangle:
  Let s = (a + b + c) / 2, where a, b, and c are the sides of the triangle.
  Then the area of the triangle is given by:
  sqrt(s * (s - a) * (s - b) * (s - c))
  */
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::areaAltitude() {
  /*
  Altitude formula for the area of a triangle:
  Let p = (a + b + c) / 2, where a, b, and c are the sides of the triangle.
  Then the area of the triangle is given by:
  2 / a * sqrt(p * (p - a) * (p - b) * (p - c))
  */
  double p = (a + b + c) / 2;
  double area = 2 / a * sqrt(p * (p - a) * (p - b) * (p - c));
  return area;
}

double Triangle::areaSin() {
  /*
  Sine formula for the area of a triangle:
  Let A be the angle opposite side a, B be the angle opposite side b, and C be the angle opposite side c.
  Then the area of the triangle is given by:
  (a * b * sin(C)) / 2
  */
  double area = (a * b * sin(c)) / 2;
  return area;
}

int main() {
  Triangle triangle(3, 4, 5);
  cout << "Area using Heron's formula: " << triangle.areaHeron() << endl;
  cout << "Area using Altitude formula: " << triangle.areaAltitude() << endl;
  cout << "Area using Sin formula: " << triangle.areaSin() << endl;
  return 0;
}