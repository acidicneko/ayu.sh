#pragma once

#include <builtin/builtin.hpp>
#include <iostream>

class echoCommand : public builtinCommand{
public:
    void run(std::vector<std::string> arguments){
        for(auto string : arguments)
            std::cout << string << " ";
        std::cout << "\n";
    }

    std::string getHelp(){
        return "Prints the given string to stdout.\n";
    }

    std::string getCommandName(){
        return "echo";
    }
};