#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool stringFind(string s1){
for(int i = 0; i< s1.size()-2; i++){
char c = 'c', b = ':', e = '\\';
if((char)s1[i]==c && (char)s1[i+1]==b && (char)s1[i+2]==e )
{return true;}
else {return false;}
}
}







int main(int argc, char** argv) {
	//system("cd c:/dd");
	//	 system("dd.exe --list >test.txt");
	//get harddisk0 mounted C:/
	ifstream file("test.txt"); // ôàéë èç êîòîðîãî ÷èòàåì (äëÿ ëèíóêñ ïóòü áóäåò âûãëÿäåòü ïî äðóãîìó)
	string s;
	int i = 0;


	while (getline(file, s)){ // ïîêà íå äîñòèãíóò êîíåö ôàéëà ëîæèòü î÷åðåäíóþ ñòðîêó â ïåðåìåííóþ (s)

		cout << s;
		if (stringFind(s)){
		i--;
		cout << i;
		break;
		}
		else { i++; }
		system("pause");
		//cout << s << endl; // è ñíîâà âûâîæó íà ýêðàí íî óæå ìîäèôèöèðîâàííóþ ñòðîêó (áåç çàïèñè åå â ôàéë)
	}

	file.close(); // îáÿçàòåëüíî çàêðûâàåì ôàéë ÷òî áû íå ïîâðåäèòü åãî
	/*
	string deviceName = (string)" ";
	//Áëèí÷èêè èç ää
	string request = (string)"dd.exe if=\\?\ " + deviceName + (string)" of = c:\FTP\cScreen.img ds=1M --sixe --progress";
	system(request.c_str());
	//	wchar_t i[] = L"127.0.0.1";
	//	string peng = (string)"ping " + "127.0.0.1" ;
	//	char ip[] = "127.0.0.1";
	//	system(peng.c_str());
	*/	system("pause");
}