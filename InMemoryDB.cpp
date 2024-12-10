#include "InMemoryDB.h"

int InMemoryDB::get(string key) {
    if (database.find(key) != database.end()) {
        return database[key];
    }
    return -1;
}

void InMemoryDB::put(string key, int val) {
    if (!in_progress) {
        throw runtime_error("No transaction in progress");
    }
    transactions[key] = val;
}

void InMemoryDB::begin_transaction() {
    if (in_progress) {
        cout << "Transaction already in progress" << endl;
        return;
    }
    // Clear just in case
    transactions.clear();
    in_progress = true;
}

void InMemoryDB::commit() {
    if (!in_progress) {
        throw runtime_error("No transaction in progress");
    }
    for (const auto& entry : transactions) {
        string key = entry.first;
        int value = entry.second;
        database[key] = value;
    }
    transactions.clear();
    in_progress = false;
}

void InMemoryDB::rollback() {
    if (!in_progress) {
        throw runtime_error("No transaction in progress");
    }
    transactions.clear();
    in_progress = false;
}