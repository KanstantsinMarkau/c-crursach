#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
bool stringFind(string s1){
	char c = 'c', b = ':';

	for (int i = 0; i< s1.size() - 2; i++){
		if (s1 == ""){ break; }
		if (s1[i] == c && s1[i + 1] == b)
		{
			return true;
		}
		else { continue; }
	}
	return false;
}
string stringParce(){
	ifstream file("test.txt");
	string s, s1;
	int i = 0;
	while (getline(file, s)){
		//	cout << s;
		if (stringFind(s)){
			i--;
			break;
		}
		else { i++; }
	}
	file.close();
	ifstream file1("test.txt");
	int n = 0;
	while (n != i){ getline(file1, s1); n++; }
	file.close();
	return s1;
}







int main(int argc, char** argv) {
	//system("cd c:/dd");
	system("dd.exe --list >test.txt");
	//get harddisk0 mounted C:/
	// обязательно закрываем файл что бы не повредить его
	string s1 = stringParce();
	string s2;
	string deviceName = s1;
	s1.erase(s1.begin(), s1.begin() + 10);
	//Блинчики из дд
	string request = (string)"dd.exe if=" + s1 + (string)" of=c:\\FTP\\cScreen.img ds=1M --progress";
	system(request.c_str());
	//	wchar_t i[] = L"127.0.0.1";
	//	string peng = (string)"ping " + "127.0.0.1" ;
	//	char ip[] = "127.0.0.1";
	//	system(peng.c_str());
	system("pause");
}