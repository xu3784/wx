#include "stdafx.h"
#include "MainWindow.h"


void LogoutWeChat()
{
	DWORD dwBaseAddress = (DWORD)GetModuleHandle(L"WeChatWin.dll");
	DWORD dwCallAddress = dwBaseAddress + Logout;
	HANDLE hThread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)dwCallAddress, nullptr, NULL, nullptr);
	if (hThread != nullptr)
	{
		CloseHandle(hThread);
	}
}
