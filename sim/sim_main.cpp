
#include "Vhello_world.h"
#include "verilated.h"

int main(int argc, char** argv, char** env)
{
    Verilated::commandArgs(argc, argv);
    Vhello_world* hello_world = new Vhello_world;
    while (!Verilated::gotFinish()) { hello_world->eval(); }
    delete hello_world;
    exit(0);
}