// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../../utf8unicode.hh"

int main()
{
	std::vector<unsigned int> uStr;
	uStr.resize(100, 0);
	wcscpy((wchar_t*)&uStr[0], L"��1��2��3");
	std::string sUtf8;
	Utf8Unicode::unicode_to_utf8(uStr, sUtf8);
	Utf8Unicode::utf8_to_unicode(sUtf8, uStr);
	wchar_t* wsz = (wchar_t*)&uStr[0];
    return 0;
}

