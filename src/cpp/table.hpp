#ifndef TABLE_HPP_INCLUDED
#define TABLE_HPP_INCLUDED

#include <string>
#include <vector>
#include "dataobject.hpp"

class Table
{
private:
  std::string name;
  std::vector<DataObject> dataObjects;
public:
  Table(std::string nameIn);

  std::string getName();

  void rename(std::string newName);

  DataObject& getDataObject(int index);

  DataObject& addDataObject();
};

#endif // ifndef TABLE_HPP_INCLUDED
