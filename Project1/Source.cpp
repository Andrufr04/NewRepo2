#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#include <iostream>
#include <tchar.h>
using namespace std;

int CountWords(_TCHAR* str)
{
	int count = 0;
	for (int i = 0; i < _tcslen(str); i++)
	{
		if ((str[i] != ' ' && (i + 1 == _tcslen(str) || str[i + 1] == ' '))) {

			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o' || str[i] == 'y')
			{
				count++;
			}
		}
	}
	return count;
}



void main()
{
	_TCHAR str3[100] = _TEXT("    hsdfajysh sja h jfkajsbha ");
	wcout << CountWords(str3) << endl;



	system("pause");
}