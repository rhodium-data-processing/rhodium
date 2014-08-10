#ifndef DATUM_HPP_INCLUDED
#define DATUM_HPP_INCLUDED

#include <boost/variant.hpp>
#include <ctime>

typedef boost::variant<int, double, std::string, bool, std::time_t> Value;

class Datum
{
private:
  Value val;
public:
  Datum(Value val);
  Value value();
  Value operator=(Value newVal);
};

#endif // ifndef DATUM_HPP_INCLUDED
