#include <iostream>
#include "error.h"

using namespace std;

void command_arg_error()
{
    cout << "The command line argument you gave is not apt.\n";
}

void port_error()
{
    cout << "The port number specified is not in usable range!!\n";
}