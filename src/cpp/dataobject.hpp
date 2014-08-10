#ifndef DATAOBJECT_HPP_INCLUDED
#define DATAOBJECT_HPP_INCLUDED

#include <string>
#include <map>

class DataObject
{
private:
  std::map<std::string, Datum> data;
public:
  DataObject(std::map<std::string, Datum> data);

  Datum& getField(std::string name);

  Datum& operator[](std::string name);
};

#endif // ifndef DATAOBJECT_HPP_INCLUDED
