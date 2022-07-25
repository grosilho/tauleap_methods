#ifndef INITIALIZER_H
#define INITIALIZER_H

#include "headers.h"

class Solver;
class ChemicalSystem;

class Parameters
{
public:
    Parameters();
    ~Parameters();
    
    void init_ChemicalSystem(ChemicalSystem*& cs);
    void init_Solver_ChemicalSystem(Solver*& sol, ChemicalSystem*& cs);
    
    string get_filename();
    unsigned int get_num_species();
    unsigned int get_MCiter();
    unsigned int get_nout();
    bool get_post_proc();
    unsigned int get_n_bins();
    string get_refsol();
    Real get_tau_max();
    string get_solver();
    Real get_final_time();
    Real get_Newton_tol();
    
    bool read_command_line(int argc, char** argv);
    void init();
    
    void disp_help();
    
    unsigned int prob_num;
    unsigned int N_species;
    Real final_time;
    unsigned int MCiter;
    Real tau_max;
    unsigned int nout;
    string solver_name;
    string problem_name;
    string filename;
    bool post_process;
    unsigned int n_bins;
    Real Newton_tol;
    string refsol;
    unsigned int s_add;
    unsigned int s;
    Real damping;
};

#endif /* INITIALIZER_H */

