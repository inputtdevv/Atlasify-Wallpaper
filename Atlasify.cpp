// Warning this will atlasify your pc which is very scary your eyes will start to bleed looking at this nazis profile picture.



#include <windows.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

int main() {
    const wchar_t* url = L"https://inputt.dev/files/Atlasifypng.jpg";
    wchar_t path[MAX_PATH];
    GetTempPathW(MAX_PATH, path);
    wcscat_s(path, L"Atlasify.jpg");
    if (URLDownloadToFileW(nullptr, url, path, 0, nullptr) == S_OK) {
        SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, path, SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
    }
    return 0;
}
