#pragma once

#include <builtin/builtin.hpp>
#include <memory>

void addCommand(std::unique_ptr<builtinCommand> command);
void initialiseCommandManager();
void commandManagerHandler(int argc, char** argv);