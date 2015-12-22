// Laboratory13.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "Laboratory13.h"
#include "iostream"
#include "time.h"

#define MAX_LOADSTRING 100
int counter = 0;
int clckcount = 0;
// Global Variables:
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
HWND hWnd2[7];

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Place code here.

    // Initialize global strings
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_LABORATORY13, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Perform application initialization:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_LABORATORY13));

    MSG msg;

    // Main message loop:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_LABORATORY13));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_LABORATORY13);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Store instance handle in our global variable

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	int wmld, wmEvent;
	HDC hdc;
	PAINTSTRUCT ps;
	LPCWSTR titles[7] = { L"1", L"2", L"3", L"4", L"5", L"6", L"7" };

    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Parse the menu selections:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Add any drawing code that uses hdc here...
			//TextOut(hdc, 20, 20, L"Кликов ЛКМ: ", strlen("Кликов ЛКМ:"));
			//TextOut(hdc, 60, 20, (LPCWSTR)clckcount, 2);
            EndPaint(hWnd, &ps);
        }
        break;


	case WM_CLOSE:
		if (IDOK == MessageBox(hWnd, L"Вы уверены что хотите выйти?", L"Выход",
			MB_OKCANCEL | MB_ICONINFORMATION | MB_DEFBUTTON1))
		{
			if (IDOK == MessageBox(hWnd, L"Вы точно уверены что хотите выйти?", L"Выход",
				MB_OKCANCEL | MB_ICONEXCLAMATION | MB_DEFBUTTON1))
			{
				if (IDOK == MessageBox(hWnd, L"Вы абсолютно точно уверены что хотите выйти?", L"Выход",
					MB_OKCANCEL | MB_ICONERROR | MB_DEFBUTTON1))
				PostQuitMessage(0);
			}
			
		}
		
		break;


	case WM_LBUTTONDOWN:
		SetWindowText(hWnd, L"Зажата левая кнопка мыши");
		clckcount++;
		break;


	case WM_LBUTTONUP:
		SetWindowText(hWnd, L"Laboratory13");
		break;


	case WM_RBUTTONDOWN:
	{
		if (counter < 7)
		{
			hWnd2[counter] = CreateWindow(
				szWindowClass,
				szTitle,
				WS_CHILD | WS_CAPTION | WS_MINIMIZEBOX | WS_VISIBLE,
				 50 + 50 * counter,
				50 + 50 * counter,
				200,
				200,
				hWnd,
				NULL,
				hInst,
				NULL);
			SetWindowText(hWnd2[counter], titles[counter]);
			ShowWindow(hWnd2[counter], SW_SHOW);
			counter++;
		} break;
	}


	case WM_MBUTTONDOWN:
	{
		DestroyWindow(hWnd2[counter--]);
		break;
	}



    /*case WM_DESTROY:
        PostQuitMessage(0);
        break;*/
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}



LRESULT CALLBACK ChildProc(HWND hWnd2, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{

	case WM_KEYUP:
	{

		PostQuitMessage(0);
		break;
	}

	case WM_MBUTTONDOWN:
	{
		PostQuitMessage(0);
		break;
	}


	case WM_LBUTTONUP:
	{

		PostQuitMessage(0);
		break;
	}
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd2, message, wParam, lParam);
	}
	return 0;
}