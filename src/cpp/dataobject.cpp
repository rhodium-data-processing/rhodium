#include "dataobject.hpp"

DataObject::DataObject(std::map<std::string, Datum> data)
{
  (*this).data = data;
}

Datum& DataObject::getField(std::string name)
{
  return data[name];
}

Datum& DataObject::operator[](std::string name)
{
  return getField(name);
}
