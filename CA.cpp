#include <bits/stdc++.h>
#define LEN 700
using namespace std;
void out(int *a)
{
	for(int i  =0; i < LEN; ++i)
	{
		cout << a[i];
		/*if(a[i] == 1)
		{
			cout << "¡ö";
		}
		else
		{
			cout << "  ";
		}*/
	}
}
void play(int *a, int *b, int rule)
{
	int r[10] = {0};
	int h = 0;
	while(rule)
	{
		r[h++] = rule % 2;
		rule /= 2;
	}
	for(int i = 1; i < LEN; ++i)
	{
		if( a[i - 1]==1 && a[i]==1 && a[i + 1]==1)
		{
			b[i] = r[7];
		}
		else if( a[i - 1]==1 && a[i]==1 && a[i + 1]==0)
		{
			b[i] = r[6];
		}
		else if( a[i - 1]==1 && a[i]==0 && a[i + 1]==1)
		{
			b[i] = r[5];
		}
		else if( a[i - 1]==1 && a[i]==0 && a[i + 1]==0)
		{
			b[i] = r[4];
		}
		else if( a[i - 1]==0 && a[i]==1 && a[i + 1]==1)
		{
			b[i] = r[3];
		}
		else if( a[i - 1]==0 && a[i]==1 && a[i + 1]==0)
		{
			b[i] = r[2];
		}
		else if( a[i - 1]==0 && a[i]==0 && a[i + 1]==1)
		{
			b[i] = r[1];
		}
		else if( a[i - 1]==0 && a[i]==0 && a[i + 1]==0)
		{
			b[i] = r[0];
		}
	}
}
void game(int *a, int *b, int r, int rule)
{
	for(int i = 0; i < r; ++i)
	{
		out(a);
		//cout << endl;
		play(a, b, rule);
		out(b);
		//cout << endl;
		play(b, a, rule);
	}
}
int main()
{
	while(1)
	{
	freopen("C:\\Users\\Administrator\\Desktop\\1.txt", "w", stdout);
	//cout << endl;
	int n;
	cin >> n;
	int a[LEN] = {0};
	a[LEN/2-1] = 1;
	/*
	srand(time(0));
	for(int i = 0; i < 60; ++i)
	{
		a[rand() % LEN] = 1;
	}*/
	int b[LEN] = {0};
	game(a, b, 170,n);
	system("picture");
	}
	return 0;
}
