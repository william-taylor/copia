
#include <iostream>
#include <rocksdb/db.h>

int main()
{
	rocksdb::Options options;
	options.create_if_missing = true;

	rocksdb::DB* database = nullptr;
	rocksdb::Status status = rocksdb::DB::Open(options, "tmp", &database);

	std::unique_ptr<rocksdb::DB> handle(database);

	if (status.ok()) 
	{
		std::cout << "Database is okay" << database << std::endl;
	}
	else 
	{
		std::cout << "Datbase is not okay" << database << std::endl;
	}
}
