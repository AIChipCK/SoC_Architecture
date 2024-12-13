#ifndef CPU_H
#define CPU_H

#include <systemc.h>

SC_MODULE(CPU) {
    sc_in<bool> clk;
    sc_out<int> data_out;
    sc_in<int> data_in;
    sc_out<bool> req, ack;

    void process();

    SC_CTOR(CPU) {
        SC_THREAD(process);
        sensitive << clk.pos();
    }
};

#endif  // CPU_H