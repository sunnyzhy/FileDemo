// FileDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "File.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char content[256];
	File *file=new File("text.txt");
	while(true)
	{
		cin>>content;
		if(strcmp(content,":exit")==0)
		{
			break;
		}
		file->Write(content);
	}
	file->Read();
	delete file;
	file=NULL;
	system("PAUSE");
	return 0;
}

