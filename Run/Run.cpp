#include "Windows.h"
//#include <shellapi.h>
//#include <tchar.h>
//#include <iostream>
//#include "Run.h"


using namespace std;

enum Errors
{
	Success = 0,
	MissingCommandLine = 1
};

int wmain(int argc, wchar_t* argv[])
{
	// The first arg is the EXE path, so there should be 2 args.
	if (argc == 1) return MissingCommandLine;


	ShellExecute(NULL, L"Open", argv[1], NULL, NULL, SW_SHOWNORMAL);
	return Success;
}

//wchar_t* CharStarToLPCWSTR(const char* charArray)
//{
//	// See: https://stackoverflow.com/questions/19715144/how-to-convert-char-to-lpcwstr
//	wchar_t* wString = new wchar_t[4096];
//	MultiByteToWideChar(CP_ACP, 0, charArray, -1, wString, 4096);
//	return wString;
//}

