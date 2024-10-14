//TOPIC 6
//duzbucaqli 3
//#include<iostream>
//using namespace std;
//int main() 
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) 
//	{
//		for (int j = 0;j < m;j++)
//			cout << '#';
//		cout << endl;
//	}
//}
//*Cercive
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++)cout << "*";
//	cout << endl << "*";
//	for (int i = 0;i < n - 2;i++)cout << " ";
//	cout << "*" << endl;
//	for (int i = 0;i < n;i++)cout << "*";
//}
//*cercive 3
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n == 1)
//	{
//		cout << "*";
//		return 0;
//	}
//	for (int i = 0;i < n;i++)cout << "*";
//	for (int i = 0;i < n - 2;i++) 
//	{
//		cout << endl << "*";
//		for (int j = 0;j < n - 2;j++)cout << " ";
//		cout << "*";
//	}
//	cout << endl;
//	for (int i = 0;i < n;i++)cout << "*";
//}
//*Cercive 4
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0;i < m;i++)cout << "*";
//	for (int i = 0;i < n - 2;i++)
//	{
//		cout << endl << "*";
//		for (int j = 0;j < m - 2;j++)cout << " ";
//		if (m > 1) cout << "*";
//	}
//	cout << endl;
//	if (n > 1)for (int i = 0;i < m;i++)cout << "*";
//}
//Sablon 3
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n/2+1;i++)
	{
		for (int j = 0;j < i;j++)cout << " ";
		cout << '*';
		for (int j = 0;j < n - 2 * (i + 1);j++)cout << " ";
		if (n % 2 == 0)cout << '*';
		for (int j = 0;j < i;j++)cout << " ";
		cout << endl;
	}
}