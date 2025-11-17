class PipelineRegister {
};

class IF_ID : public PipelineRegister {
    uint32_t IR;
    uint32_t NPC;
};


class RISCVSimulator {
    uint32_t registers[32];
    uint32_t PC;
    uint32_t instruction_memory[512];  // 2KB = 512 words
    uint32_t data_memory[512];
    
    IF_ID if_id;
    ID_EX id_ex;
    EX_MEM ex_mem;
    MEM_WB mem_wb;
};