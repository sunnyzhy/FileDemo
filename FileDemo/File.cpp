#include "stdafx.h"
#include "File.h"

File::File(const char *fileName):fileName(fileName)
{
}

void File::Read()
{
	ifstream in(this->fileName);
	char buf[256];
	if(in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buf,200);
			cout<<buf<<endl;
		}
	}
}

void File::Write(char *content)
{
	ofstream out;
	out.open(this->fileName,ios_base::app);
	if(out.is_open())
	{
		int len=strlen(content);
		content[len]='\n';
		out.write(content,len+1);
		out.close();
	}
}

File::~File(void)
{
	cout<<"~File called"<<endl;
}
