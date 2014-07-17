#include "table.hpp"

Table::Table(std::string nameIn)
{
  name = nameIn;
}

std::string Table::getName()
{
  return name;
}

void Table::rename(std::string newName)
{
  name = newName;
}

DataObject& getDataObject(int index)
{
  if(index >= dataObjects.size())
  {
    // TODO throw an IndexOutOfBoundsException
  }
  return dataObjects[index];
}

DataObject& addDataObject()
{
  DataObject obj = new DataObject();
  dataObjects.push_back(obj);
  return dataObjects.back();
}
