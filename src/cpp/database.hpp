#ifndef DATABASE_H_INCLUDED
#define DATABASE_H_INCLUDED

#include <string>
#include <vector>
#include <algorithm>

#include "table.hpp"

class Database
{
private:
  vector<Table> tables;
public:
  Database(std::string filename);

  ~Database();

  Table& addTable(std::string tableName);

  bool tableExists(std::string filename);

  void write();

  void close();
};

#endif // ifndef DATABASE_H_INCLUDED
