#ifndef LINE_H
#define LINE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Line : public SVG {
public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // coordinates for the start and end points of the line
  int x1{0}, y1{0}, x2{0}, y2{0};

  // color of the line
  string color{"black"};
};

#endif
