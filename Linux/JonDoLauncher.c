#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <cstring>
#include <array>
#include <unistd.h>

using namespace std;

string exec(const char* cmd) {
    array<char, 128> buffer;
    string result = "";
    shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
    	throw runtime_error("popen() failed!");
    }
    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != NULL){
            result += buffer.data();
        }
    }
    return result;
}

int main(int argc, char*argv[]){
    if(argc >= 2){
    	string res = exec("ps aux | grep \"[J]AP.jar\" | wc -l");
        bool isJAPRunning = false;
        for(int i = 0; i < res.length(); i++){
            if(res[i] == (char)'0'){
                break;
            }else if(res[i] > (char)'0' && res[i] <= (char)'9'){
                isJAPRunning = true;
                break;
            }
        }
    	if(!isJAPRunning && strcmp(argv[1], "on") == 0){
            char command[1024];
            strcpy(command, "java -jar ./JonDo/JAP.jar");
            for (int i = 2; i < argc; i++){
                strcat(command, " ");
                strcat(command, argv[i]);
            }
            strcat(command, " &");
            printf("%s\n", command);
    		system(command);
    	}
        if(isJAPRunning && strcmp(argv[1], "off") == 0){
            system("pkill -f 'java.*JAP.jar*' &");
        }
    }
}
	