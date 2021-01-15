#include "start.h"
#include "server.h"
#include "client.h"
#include "error.h"
#include <vector>
#include <string>
void start(int argc, char **args)
{
    std::vector<std::string> argv(args, args + argc);
    if (argc == 13)
    {
        server(argv);
    }
    else if (argc == 17)
    {
        client(argv);
    }
    else
    {
        command_arg_error();
    }
}