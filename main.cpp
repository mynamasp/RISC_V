#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdint>


using namespace std;

class IF_ID {
public:
    uint32_t IR;     
    uint32_t NPC;     
    bool valid;    
    
    IF_ID() : IR(0), NPC(0), valid(false) {}
    
    void clear() {
        IR = 0;
        NPC = 0;
        valid = false;
    }
};

class ID_EX {
public:
    uint32_t IR;      
    uint32_t NPC;     
    uint32_t A;       
    uint32_t B;       
    int32_t Imm;      
    bool valid;
    
    ID_EX() : IR(0), NPC(0), A(0), B(0), Imm(0), valid(false) {}
    
    void clear() {
        IR = 0;
        NPC = 0;
        A = 0;
        B = 0;
        Imm = 0;
        valid = false;
    }
};

class EX_MEM {
public:
    uint32_t IR;          
    uint32_t B;           
    uint32_t ALUOutput; 
    bool cond;           
    bool valid;
    
    EX_MEM() : IR(0), B(0), ALUOutput(0), cond(false), valid(false) {}
    
    void clear() {
        IR = 0;
        B = 0;
        ALUOutput = 0;
        cond = false;
        valid = false;
    }
};

class MEM_WB {
public:
    uint32_t IR;         
    uint32_t ALUOutput; 
    uint32_t LMD;
    bool valid;
    
    MEM_WB() : IR(0), ALUOutput(0), LMD(0), valid(false) {}
    
    void clear() {
        IR = 0;
        ALUOutput = 0;
        LMD = 0;
        valid = false;
    }
};

class RISCVSimulator {
    uint32_t registers[32];
    uint32_t PC;
    uint32_t instruction_memory[512]; 
    uint32_t data_memory[512];
    
    IF_ID if_id;
    ID_EX id_ex;
    EX_MEM ex_mem;
    MEM_WB mem_wb;
};