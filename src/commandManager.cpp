#include <commandManager.hpp>
#include <builtin/echo.hpp>
#include <vector>

std::vector<std::unique_ptr<builtinCommand>> g_commands;

void addCommand(std::unique_ptr<builtinCommand> command){
    g_commands.push_back(std::move(command));
}

void initialiseCommandManager(){
    addCommand(std::unique_ptr<echoCommand>());
}

void commandManagerHandler(int argc, char** argv){
    std::vector<std::string> arguments;
    
    for(int i = 0; i < argc; i++){
        arguments.push_back(argv[i]);
    }

    for(int i = 0; i < g_commands.size(); i++){
        if(arguments[0] == g_commands[i]->getCommandName()){
		g_commands[i]->run(arguments);
        }
    }
}