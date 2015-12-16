#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class File
{
public:
	File(const char *fileName);
	void Read();
	void Write(char *content);
	~File(void);
private:
	const char *fileName;
};

