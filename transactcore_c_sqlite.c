#include <stdio.h>
#include <sqlite3.h>

// Basic SQLite transaction example (TransactCore-C)

int main() {
    sqlite3 *db;
    char *err_msg = 0;

    int rc = sqlite3_open("transactions.db", &db);

    if (rc != SQLITE_OK) {
        printf("Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }

    const char *sql = 
        "BEGIN TRANSACTION;"
        "CREATE TABLE IF NOT EXISTS users(id INTEGER PRIMARY KEY, name TEXT);"
        "INSERT INTO users(name) VALUES('Pratik');"
        "COMMIT;";

    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK) {
        printf("SQL error: %s\n", err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(db);
        return 1;
    }

    printf("Transaction completed successfully.\n");

    sqlite3_close(db);
    return 0;
}
