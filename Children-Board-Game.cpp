#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	int x, y;
	string c;
	int boyut;
	int H[10][10];
	int V[10][10];
	int tur = 0;


	fstream dataFile;
	fstream outFile;//Oluþturma dosyam

	dataFile.open("input.txt", ios::in);//dosyayý okuma iþlemi
	outFile.open("Output.txt", ios::out);//dosyayý oluþturma modunda açtým.

	if (!dataFile)
	{
		cout << "The input.txt file was not opened.\n";
		exit(0);
	}

	cout << "The input.txt file was opened succesfulyy.\n";
	cout << "Now reading information from the file.\n";

	while (!dataFile.eof())//input file ýn sonuna kadar.
	{

		dataFile >> n >> m;

		tur++;
		int say = 0;
		int say2 = 0;
		int say3 = 0;
		int sayarray[10];
		for (int rw = 0; rw < 10; rw++)
		{
			sayarray[rw] = 0;
		}
		for (int s = 0; s < 10; s++)
		{
			for (int k = 0; k < 10; k++)
			{
				H[s][k] = 0;
				V[s][k] = 0;
			}
		}
		for (int i = 1; i <= m; i++)
		{
			dataFile >> c >> x >> y;
			if (c == "H")
			{
				H[x][y] = 1;
			}
			else
			{
				V[x][y] = 1;
			}
		}


		boyut = 1;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (H[i][j] == 1 && V[j][i] == 1)
				{
					if (H[i + 1][j] == 1 && V[j + 1][i] == 1)
					{
						say++;//BÝR BOYUTLU KARELER

					}

					int a1 = n - i;
					int a2 = n - j;
					int minimum = 0;
					if (a1 < a2)
					{
						minimum = a1;
					}
					else
						minimum = a2;
					boyut = 1;
					for (int s = 1; s <= minimum; s++)
					{

						if (H[i][j + s] == 1 && V[j][i + s] == 1)
						{
							boyut++;
							say2 = 0;
							for (int k = 0; k <= s; k++)
							{
								if (H[boyut + i][j + k] == 1 && V[boyut + j][i + k] == 1)
								{
									say2++;
								}
							}
							if (say2 == boyut)
							{
								say3++;
								sayarray[boyut]++;
							}

						}
					}
				}
			}
		}
		if (!outFile)
		{
			cout << "The file was not opened.\n";
			exit(0);
		}

		cout << endl << "The Output.txt file was opened succesfulyy.\n";
		cout << "Now writing information into the file.\n";

		cout << endl << "***************************************" << endl;
		outFile << endl << "***************************************" << endl;
		cout << "Problem #" << tur << endl;
		outFile << "Problem #" << tur << endl;
		if (say == 0 && say3 == 0)
		{
			cout << "No completed square (s) can be found.";
			outFile << "No completed square (s) can be found.";//dosya içerisine de yazýldý
		}
		else
		{
			cout << say << " square (s) of size 1." << endl;
			outFile << say << " square (s) of size 1." << endl;
			for (int l = 0; l < 10; l++)
			{
				if (sayarray[l] != 0)
				{
					cout << sayarray[l] << " square (s) of size " << l << "." << endl;
					outFile << sayarray[l] << " square (s) of size " << l << "." << endl;
				}
			}
		}


	}
	dataFile.close();
	outFile.close();

	cout << endl << endl;
	system("pause");
}