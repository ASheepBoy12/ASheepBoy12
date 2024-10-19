#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 
unsigned long long l,r;
using namespace std;
void cls()
{
	system("cls");
}
int main()
{
	ifstream a("0.7.ini");
	a>>l>>r;
	int w=200,h=150,x=1425,y=125;
    HWND hwnd = GetForegroundWindow();
    RECT rect;
    GetWindowRect(hwnd, &rect);
    int newWidth = w;
    int newHeight = h;
    SetWindowPos(hwnd,NULL,rect.left,rect.top,newWidth,newHeight,SWP_NOZORDER|SWP_NOMOVE);
    int newX = x;
    int newY = y;
    SetWindowPos(hwnd,NULL,newX,newY,0,0,SWP_NOSIZE|SWP_NOZORDER);
	HWND Hwnd = GetForegroundWindow();
	SetWindowPos(Hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    
    cout<<"Please press\n'w' key to\ncontinue."<<endl;
    while(1)
    {
		if(KEY_DOWN(0x57))
		{
			break;
		}
	}
    cls();
    cout<<l<<" | "<<r;
    system("color c7");
	cout<<endl<<"STOPING!!!";
	Sleep(1000);
	while(1)
	{
		if(KEY_DOWN(0x9))
		{
			Sleep(200);
			break;
		}
	}
	system("color 07");
	cls();
	cout<<l<<" | "<<r;
	while(1)
	{
		if(KEY_DOWN(MOUSE_MOVED))
		{
			for(int i=1;i<=6;i++)
			{
				cls();
				mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
				cout<<l<<" | "<<r;
				Sleep(15);
				l++;
			}
		}
		if(KEY_DOWN(MOUSE_EVENT))
		{
			for(int i=1;i<=2;i++)
			{
				cls();
				mouse_event(MOUSEEVENTF_RIGHTDOWN|MOUSEEVENTF_RIGHTUP,0,0,0,0);
				cout<<l<<" | "<<r;
				Sleep(20);
				r++;
			}
		}
		if(KEY_DOWN(0x9))
		{
			for(int i=5;i>0;i--)
			{
				cls();
				cout<<l<<" | "<<r<<endl<<"WATING!!!"<<endl<<i<<i<<i<<i<<i<<i;
				system("color c7");
				Sleep(700);
				system("color 07");
				Sleep(300);
			}
			cls();
		}
		if(KEY_DOWN(VK_F2))
		{
			system("color c7");
			cout<<endl<<"STOPING!!!";
			Sleep(1000);
			while(1)
			{
				if(KEY_DOWN(0x9))
				{
					Sleep(200);
					break;
				}
			}
			system("color 07");
			cls();
			cout<<l<<" | "<<r;
		}
		if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_DELETE))
		{
			cls();
			cout<<l<<" | "<<r;
			ofstream as("0.7.ini");
			as<<l<<' '<<r;
			return 0;
		}
	}
	system("cls");
	return 0;
}

