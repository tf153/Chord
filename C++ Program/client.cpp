#include "headers.h"
#include "client.h"

void client(vector<string> argv)
{
    if (argv[1] != "-a" || argv[3] != "-p" || argv[5] != "-ja" || argv[7] != "-jp" || argv[9] != "-ts" || argv[11] != "-tff" || argv[13] != "-tcp" || argv[15] != "-r")
    {
        command_arg_error();
    }
    else
    {
        cout << "client done\n";
    }
}