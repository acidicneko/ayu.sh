#pragma once

#include <string>
#include <vector>

class builtinCommand {
public:
    virtual void run(std::vector<std::string> arguments) = 0;
    virtual std::string getHelp() = 0;
    virtual std::string getCommandName() = 0;
};