// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecuture Section: CMPT 115 (02)


#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
    char dir[] = "usr";
    char subdir[] = "bin";
    char file[] = "firefox";
    char path[100];
    char abc[100];
    // Use strcpy() and strcat() to combine the strings stored in
    // ’dir’, ’subdir’, and ’file’ to create somethign that looks
    // like a "full path",  e.g., /usr/bin/firefox
    // this string must be stored in the variable ’path’
    // put the code here!
    strcpy(abc, "/");
    strcat(abc, dir);
    strcat(abc,"/");
    strcat(abc,subdir);
    strcat(abc,"/");
    strcat(abc,file);
    strcpy(path,abc);
    
    
    
    cout << "The full path is: " << path << endl;
    return EXIT_SUCCESS;
}