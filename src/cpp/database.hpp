#ifndef DATABASE_HPP_INCLUDED
#define DATABASE_HPP_INCLUDED

#include <string>
#include <vector>
#include <algorithm>

#include "table.hpp"

class Database
{
private:
  std::vector<Table> tables;
public:
  Database(std::string filename);

  ~Database();

  Table& addTable(std::string tableName);

  bool tableExists(std::string filename);

  void write();

  void close();
};

#endif // ifndef DATABASE_HPP_INCLUDED
