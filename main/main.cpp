#include <iostream>
#include <iomanip>
#include "Objects.h"

static void mainFunctionArguments(int argc, char *argv[])
{
    std::cout << "argc == " << argc << std::endl;
    for(int idx{}; idx not_eq argc; idx++)
    {
        std::cout << "argv[" << idx << "] == " << std::quoted(argv[idx]) << std::endl;
    }
    std::cout << "argv[" << argc << "] == " << static_cast<void *>(argv[argc]) << std::endl;
}

static void runObjectExamples(void)
{
    objectFunction();
    playWithPolymorphic();
    objectAlignment();
}

int main(int argc, char *argv[]) {
    runObjectExamples();
    return 0;
}
