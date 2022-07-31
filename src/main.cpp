#include <iostream>
#include <vector>
#include <builtin/echo.hpp>
#include <commandManager.hpp>

int main(int argc, char* argv[]){
    initialiseCommandManager();
    commandManagerHandler(argc, argv);
}