#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>

class DatabaseManager {
public:
    static DatabaseManager& instance();
    bool connect(const QString &connString);
    // CRUD методы...
private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H