#include "database.hpp"

Database::Database(std::string filename)
{
  std::string ext = filename.substr(filename.find_last_of(".") + 1);
  if(ext != "rhd")
  {
    // TODO raise an InvalidFileExtensionException
  }
  //
}

Database::~Database()
{
  close();
}

Table& Database::addTable(std::string tableName)
{
  Table table = newTable(tableName);
  tables.push_back(table);
  return tables.back();
  // The above is because vector::push_back copies the element,
  // while we want a reference to the actual element.
}

bool Database::tableExists(std::string filename)
{
  for(std::vector<Table>::iterator it = tables.begin(), it != tables.end(), ++it)
  {
	 if(*it.getName() == filename) return true;
  }
  return false;
}

void Database::write()
{
  //
}

void Database::close()
{
  //
}
