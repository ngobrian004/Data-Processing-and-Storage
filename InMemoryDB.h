#include <iostream>
#include <string>
#include <map>

using namespace std;

class InMemoryDB {
    map<string, int> database;
    map<string, int> transactions;
    bool in_progress = false;

public:
    int get(string key);
    void put(string key, int val);
    void begin_transaction();
    void commit();
    void rollback();
};