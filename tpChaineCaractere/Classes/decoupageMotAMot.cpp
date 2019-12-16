#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char chaine[255], chaine2[255];
	int i;

	cout << "Veuillez rentrer une chaine de caracteres :";
	cin.getline(chaine, 255);

	for (i = 0; i < strlen(chaine); i++)
		if (chaine[i] == 32)
			chaine2[i] = 13;
		strcpy(chaine2[i], chaine[i]);
		

	return 0;
}