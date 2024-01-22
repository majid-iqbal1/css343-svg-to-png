#include "path.h"
#include <fstream>
#include <iostream>

using namespace std;

// operator<< equivalent to write the object out
ostream &Path::write(ostream &out) const {
  out << "      <path ";
  out << "d=\"" << d << "\" ";
  out << "fill=\"" << color << "\" ";
  out << " />" << endl;

  return out;
}

// operator>> equivalent to read the object contents
istream &Path::read(istream &in) {
  getline(in, d);
  in >> color;
  return in;
}
