#include "headers.h"
#include "server.h"

void server(vector<string> argv)
{

    if (argv[1] != "-a" || argv[3] != "-p" || argv[5] != "-ts" || argv[7] != "-tff" || argv[9] != "-tcp" || argv[11] != "-r")
    {
        command_arg_error();
    }
    else if (stoi(argv[4]) < 1000 || stoi(argv[4]) > 65535)
    {
        port_error();
    }
    else
    {
        cout << "server done\n";
    }
}